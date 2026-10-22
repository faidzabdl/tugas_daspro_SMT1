#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double angka1, angka2, hasil = 0;
    bool isValid = true;

    cout << "===== STUDI KASUS 4 — KALKULATOR AKADEMIK =====" << endl;
    cout << "1. Penjumlahan[cite: 9]\n";
    cout << "2. Pengurangan[cite: 9]\n";
    cout << "3. Perkalian[cite: 9]\n";
    cout << "4. Pembagian[cite: 9]\n";
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
                cout << "Error: Pembagi tidak boleh sama dengan nol![cite: 9]" << endl;
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

    return 0;
}
