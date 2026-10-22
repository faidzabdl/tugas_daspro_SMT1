#include <iostream>
using namespace std;

int main() {
    int pilihan;
    char lanjut;

    do {
        double nilai, hasil = 0;
        bool isValid = true;

        cout << "===== PRAKTIKUM 5 — KONVERSI SATUAN =====" << endl;
        cout << "1. Meter -> Kilometer\n";
        cout << "2. Kilometer -> Meter\n";
        cout << "3. Meter -> Centimeter\n";
        cout << "4. Centimeter -> Meter\n";
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai (Meter): ";
                cin >> nilai;
                if (nilai >= 0) {
                    hasil = nilai / 1000.0;
                } else {
                    isValid = false;
                }
                break;

            case 2:
                cout << "Masukkan nilai (Kilometer): ";
                cin >> nilai;
                if (nilai >= 0) {
                    hasil = nilai * 1000.0;
                } else {
                    isValid = false;
                }
                break;

            case 3:
                cout << "Masukkan nilai (Meter): ";
                cin >> nilai;
                if (nilai >= 0) {
                    hasil = nilai * 100.0;
                } else {
                    isValid = false;
                }
                break;

            case 4:
                cout << "Masukkan nilai (Centimeter): ";
                cin >> nilai;
                if (nilai >= 0) {
                    hasil = nilai / 100.0;
                } else {
                    isValid = false;
                }
                break;

            default:
                isValid = false;
                break;
        }

        if (isValid) {
            cout << "\n--- HASIL KONVERSI ---\n";
            cout << "Hasil: " << hasil << endl;
        } else {
            cout << "\n[ERROR] Pilihan menu atau nilai input tidak valid!\n";
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
