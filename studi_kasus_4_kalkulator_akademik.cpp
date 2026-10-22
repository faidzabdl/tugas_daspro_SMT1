#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double angka1, angka2, hasil;
    char lanjut;

    do {
        bool isValid = true;
        hasil = 0;

        cout << "===== STUDI KASUS 4 — KALKULATOR AKADEMIK =====" << endl;
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;

        switch (pilihan) {
            case 1:
                hasil = angka1 + angka2;
                break;
            case 2:
                hasil = angka1 - angka2;
                break;
            case 3:
                hasil = angka1 * angka2;
                break;
            case 4:
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                } else {
                    isValid = false;
                    cout << "Error: Pembagi tidak boleh sama dengan nol!" << endl;
                }
                break;
            default:
                isValid = false;
                cout << "Pilihan menu tidak valid!" << endl;
                break;
        }

        if (isValid) {
            cout << "Hasil: " << hasil << endl;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
