#include <iostream>
using namespace std;

int main() {
    int pilihanJenis, durasi;
    char lanjut;

    do {
        long totalTarif = 0;
        bool isValid = true;

        cout << "=== PRAKTIKUM 3 — SISTEM PARKIR ===\n";
        cout << "Pilih Jenis Kendaraan:\n";
        cout << "1. Motor (Rp2.000 / jam)\n";
        cout << "2. Mobil (Rp5.000 / jam)\n";
        cout << "3. Bus (Rp10.000 / jam)\n";
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihanJenis;

        cout << "Masukkan lama parkir (jam): ";
        cin >> durasi;

        if (durasi < 1) {
            isValid = false;
        } else {
            switch (pilihanJenis) {
                case 1:
                    totalTarif = durasi * 2000;
                    break;
                case 2:
                    totalTarif = durasi * 5000;
                    break;
                case 3:
                    totalTarif = durasi * 10000;
                    break;
                default:
                    isValid = false;
                    break;
            }
        }

        if (isValid) {
            cout << "\n--- RINCIAN BIAYA PARKIR ---\n";
            cout << "Durasi Parkir : " << durasi << " jam\n";
            cout << "Total Tarif   : Rp " << totalTarif << endl;
        } else {
            cout << "\n[ERROR] Jenis kendaraan tidak valid atau lama parkir tidak boleh kurang dari 1 jam!\n";
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
