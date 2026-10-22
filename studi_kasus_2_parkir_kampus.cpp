#include <iostream>
using namespace std;

int main() {
    int pilihanJenis, durasi;
    char lanjut;

    do {
        cout << "=== PROGRAM SISTEM PARKIR ===" << endl;
        cout << "Pilih Jenis Kendaraan:\n";
        cout << "1. Motor (Tarif: Rp2.000 / jam)\n";
        cout << "2. Mobil (Tarif: Rp5.000 / jam)\n";
        cout << "3. Bus (Tarif: Rp10.000 / jam)\n";
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihanJenis;

        cout << "Masukkan lama parkir (jam): ";
        cin >> durasi;

        switch (pilihanJenis) {
            case 1: 
                cout << "Durasi parkir: " << durasi << " jam";
                cout << "\ntarif: " << durasi * 2000 << endl;
                break;

            case 2: 
                cout << "Durasi parkir: " << durasi << " jam";
                cout << "\ntarif: " << durasi * 5000 << endl;
                break;

            case 3: 
                cout << "Durasi parkir: " << durasi << " jam";
                cout << "\ntarif: " << durasi * 10000 << endl;
                break;

            default:
                cout << "Pilihan tidak valid\n";
                break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
