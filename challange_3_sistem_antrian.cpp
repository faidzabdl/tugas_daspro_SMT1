#include <iostream>
using namespace std;

int main() {
    int pilihanMenu;
    int nomorAntrian = 0;
    int nomorPanggil = 0;
    char lanjut;

    do {
        cout << "===== SISTEM ANTRIAN =====" << endl;
        cout << "1. Ambil Nomor\n";
        cout << "2. Panggil Nomor\n";
        cout << "3. Lihat Nomor\n";
        cout << "4. Reset\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                nomorAntrian++;
                cout << "\n--- AMBIL NOMOR ANTRIAN ---\n";
                cout << "Nomor antrian Anda: " << nomorAntrian << endl;
                break;

            case 2:
                cout << "\n--- PANGGIL NOMOR ANTRIAN ---\n";
                if (nomorPanggil < nomorAntrian) {
                    nomorPanggil++;
                    cout << "Nomor antrian " << nomorPanggil << " silakan menuju ke loket!\n";
                } else {
                    cout << "Semua nomor antrian sudah dipanggil atau belum ada antrian baru.\n";
                }
                break;

            case 3:
                cout << "\n--- STATUS NOMOR ANTRIAN ---\n";
                cout << "Nomor Antrian Terakhir : " << nomorAntrian << endl;
                cout << "Nomor yang Sedang Dipanggil: " << nomorPanggil << endl;
                break;

            case 4:
                nomorAntrian = 0;
                nomorPanggil = 0;
                cout << "\nSistem antrian telah di-reset ke 0.\n";
                break;

            case 5:
                cout << "\nKeluar dari sistem antrian. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu tidak valid!\n";
                break;
        }

        if (pilihanMenu == 5) {
            break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
