#include <iostream>
using namespace std;

int main() {
    int pilihanFasilitas, lama;
    char lanjut;

    do {
        long tarifPerJam = 0, totalTarif = 0;
        bool isValid = true;

        cout << "===== TIKET FASILITAS KAMPUS =====" << endl;
        cout << "1. Lapangan (Rp50.000 / jam)\n";
        cout << "2. Auditorium (Rp200.000 / jam)\n";
        cout << "3. Laboratorium (Rp100.000 / jam)\n";
        cout << "4. Ruang Seminar (Rp150.000 / jam)\n";
        cout << "Masukkan pilihan fasilitas (1-4): ";
        cin >> pilihanFasilitas;

        cout << "Masukkan lama penggunaan (jam): ";
        cin >> lama;

        if (lama > 0) {
            switch (pilihanFasilitas) {
                case 1:
                    tarifPerJam = 50000;
                    break;
                case 2:
                    tarifPerJam = 200000;
                    break;
                case 3:
                    tarifPerJam = 100000;
                    break;
                case 4:
                    tarifPerJam = 150000;
                    break;
                default:
                    isValid = false;
                    cout << "Pilihan fasilitas tidak valid!\n";
                    break;
            }
        } else {
            isValid = false;
            cout << "Lama penggunaan harus lebih dari 0 jam!\n";
        }

        if (isValid) {
            totalTarif = tarifPerJam * lama;

            cout << "\n--- RINCIAN SEWA FASILITAS ---\n";
            cout << "Lama Penggunaan : " << lama << " jam\n";
            cout << "Tarif Total     : Rp " << totalTarif << endl;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
