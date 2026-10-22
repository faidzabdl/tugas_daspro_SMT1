#include <iostream>
using namespace std;

int main() {
    int pilihanJenis, durasi;
//    long totalTarif = 0;

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
            cout << "\ntarif: " << durasi * 2000;
            break;

        case 2: 
            cout << "Durasi parkir: " << durasi << " jam";
            cout << "\ntarif: " << durasi * 5000;
            break;

        case 3: 
            cout << "Durasi parkir: " << durasi << " jam";
            cout << "\ntarif: " << durasi * 10000;
            break;

        default:
            cout << "Pilihan tidak valid";
            break;
    }


    return 0;
}
