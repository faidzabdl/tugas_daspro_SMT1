#include <iostream>
using namespace std;

int main() {
    int pilihanMenu = 0;

    while (pilihanMenu != 6) {
        cout << "\n===== SISTEM INFORMASI AKADEMIK MINI =====" << endl;
        cout << "1. Data Mahasiswa\n";
        cout << "2. KRS\n";
        cout << "3. Nilai\n";
        cout << "4. Jadwal\n";
        cout << "5. Keuangan\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan (1-6): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "\n--- DATA MAHASISWA ---\n";
                cout << "Nama  : Faidz Abdul Ma'zid\n";
                cout << "NIM   : 12345678\n";
                cout << "Prodi : Teknik Informatika\n";
                break;

            case 2: {
                int subKrs;
                cout << "\n--- MENU KRS ---\n";
                cout << "1. Tambah\n";
                cout << "2. Lihat\n";
                cout << "Pilih submenu (1-2): ";
                cin >> subKrs;

                if (subKrs == 1) {
                    cout << "Aksi: Berhasil menambah mata kuliah ke KRS.\n";
                } else if (subKrs == 2) {
                    cout << "Aksi: Menampilkan daftar mata kuliah KRS.\n";
                } else {
                    cout << "Submenu tidak valid!\n";
                }
                break;
            }

            case 3: {
                int subNilai;
                cout << "\n--- MENU NILAI ---\n";
                cout << "1. Input\n";
                cout << "2. Lihat\n";
                cout << "Pilih submenu (1-2): ";
                cin >> subNilai;

                if (subNilai == 1) {
                    cout << "Aksi: Berhasil menginput nilai baru.\n";
                } else if (subNilai == 2) {
                    cout << "Aksi: Menampilkan rekapitulasi nilai mahasiswa.\n";
                } else {
                    cout << "Submenu tidak valid!\n";
                }
                break;
            }

            case 4:
                cout << "\n--- MENU JADWAL ---\n";
                cout << "Menampilkan jadwal perkuliahan mingguan.\n";
                break;

            case 5:
                cout << "\n--- MENU KEUANGAN ---\n";
                cout << "Status Pembayaran UKT: Lunas / Cek Pembayaran.\n";
                break;

            case 6:
                cout << "\nKeluar dari sistem. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu utama tidak valid!\n";
                break;
        }
    }

    return 0;
}
