#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah;
    char lanjut;

    do {
        long harga = 0, subtotal = 0, diskon = 0, totalAkhir = 0;
        bool isValid = true;

        cout << "===== MENU RESTORAN KAMPUS =====" << endl;
        cout << "1. Nasi Goreng - Rp15.000\n";
        cout << "2. Mie Ayam - Rp12.000\n";
        cout << "3. Soto - Rp13.000\n";
        cout << "4. Es Teh - Rp5.000\n";
        cout << "Masukkan pilihan menu (1-4): ";
        cin >> pilihan;

        cout << "Masukkan jumlah porsi/item: ";
        cin >> jumlah;

        if (jumlah > 0) {
            switch (pilihan) {
                case 1:
                    harga = 15000;
                    break;
                case 2:
                    harga = 12000;
                    break;
                case 3:
                    harga = 13000;
                    break;
                case 4:
                    harga = 5000;
                    break;
                default:
                    isValid = false;
                    cout << "Pilihan menu tidak valid!\n";
                    break;
            }
        } else {
            isValid = false;
            cout << "Jumlah pesanan harus lebih dari 0!\n";
        }

        if (isValid) {
            subtotal = harga * jumlah;

            if (subtotal >= 50000) {
                diskon = subtotal * 0.10;
            } else {
                diskon = 0;
            }

            totalAkhir = subtotal - diskon;

            cout << "\n--- STRUK PEMBAYARAN ---\n";
            cout << "Subtotal    : Rp " << subtotal << endl;
            cout << "Diskon      : Rp " << diskon << endl;
            cout << "Total Akhir : Rp " << totalAkhir << endl;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
