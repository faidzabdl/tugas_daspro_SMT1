#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double nilai;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "=== PROGRAM KONVERSI SATUAN ===" << endl;
        cout << "Pilih Menu Konversi:\n";
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
                if (nilai > 0) {
                    cout << "hasil: " << nilai / 1000.0 << endl;
                } else {
                    cout << "nilai harus lebih dari 0\n";
                }
                break;

            case 2:
                cout << "Masukkan nilai (Kilometer): ";
                cin >> nilai;
                if (nilai > 0) {
                    cout << "hasil: " << nilai * 1000.0 << endl;
                } else {
                    cout << "nilai harus lebih dari 0\n";
                }
                break;

            case 3:
                cout << "Masukkan nilai (Meter): ";
                cin >> nilai;
                if (nilai > 0) {
                    cout << "hasil: " << nilai * 100.0 << endl;
                } else {
                    cout << "nilai harus lebih dari 0\n";
                }
                break;

            case 4:
                cout << "Masukkan nilai (Centimeter): ";
                cin >> nilai;
                if (nilai > 0) {
                    cout << "hasil: " << nilai / 100.0 << endl;
                } else {
                    cout << "nilai harus lebih dari 0\n";
                }
                break;

            default:
                cout << "Pilihan tidak valid\n";
                break;
        }

        cout << "\nIngin melakukan konversi lagi? (y/n): ";
        cin >> lanjut;
        cout << endl;
    }

    return 0;
}
