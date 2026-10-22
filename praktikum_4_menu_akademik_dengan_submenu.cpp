#include <iostream>
using namespace std;

int main() {
    int pilihanMenu;
    char lanjut;

    do {
        cout << "===== MENU UTAMA =====" << endl;
        cout << "1. Akademik\n";
        cout << "2. Keuangan\n";
        cout << "3. Perpustakaan\n";
        cout << "4. Kemahasiswaan\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1: {
                int subAkademik;
                cout << "\n--- MENU AKADEMIK ---\n";
                cout << "1. KRS\n";
                cout << "2. Nilai\n";
                cout << "3. Jadwal\n";
                cout << "Pilih submenu (1-3): ";
                cin >> subAkademik;

                if (subAkademik == 1) {
                    cout << "Aksi: Menampilkan dan mengelola Kartu Rencana Studi (KRS).\n";
                } else if (subAkademik == 2) {
                    cout << "Aksi: Menampilkan daftar nilai mahasiswa.\n";
                } else if (subAkademik == 3) {
                    cout << "Aksi: Menampilkan jadwal perkuliahan.\n";
                } else {
                    cout << "Submenu Akademik tidak valid!\n";
                }
                break;
            }

            case 2:
                cout << "\n--- MENU KEUANGAN ---\n";
                cout << "Menampilkan informasi pembayaran UKT dan tagihan kuliah.\n";
                break;

            case 3:
                cout << "\n--- MENU PERPUSTAKAAN ---\n";
                cout << "Menampilkan layanan peminjaman buku dan daftar pustaka.\n";
                break;

            case 4:
                cout << "\n--- MENU KEMAHASISWAAN ---\n";
                cout << "Menampilkan informasi organisasi, beasiswa, dan kegiatan mahasiswa.\n";
                break;

            case 5:
                cout << "\nKeluar dari sistem. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu utama tidak valid!\n";
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
