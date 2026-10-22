#include <iostream>
using namespace std;

int main() {
    int pilihanMenu = 0;

    while (pilihanMenu != 6) {
        cout << "\n===== SISTEM AKADEMIK =====" << endl;
        cout << "1. Biodata\n";
        cout << "2. KRS\n";
        cout << "3. Nilai\n";
        cout << "4. Jadwal\n";
        cout << "5. Transkrip\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan (1-6): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "\n--- MENU BIODATA ---\n";
                cout << "Nama  : Faidz\n";
                cout << "Prodi : Teknik Informatika\n";
                break;

            case 2: {
                int subKrs;
                cout << "\n--- MENU KRS ---\n";
                cout << "1. Tambah Mata Kuliah\n";
                cout << "2. Hapus Mata Kuliah\n";
                cout << "3. Lihat KRS\n";
                cout << "Pilih submenu (1-3): ";
                cin >> subKrs;

                switch (subKrs) {
                    case 1:
                        cout << "Aksi: Mata kuliah berhasil ditambah.\n";
                        break;
                    case 2:
                        cout << "Aksi: Mata kuliah berhasil dihapus.\n";
                        break;
                    case 3:
                        cout << "Aksi: Menampilkan daftar mata kuliah KRS.\n";
                        break;
                    default:
                        cout << "Submenu KRS tidak valid!\n";
                        break;
                }
                break;
            }

            case 3:
                cout << "\n--- MENU NILAI ---\n";
                cout << "Menampilkan daftar nilai semester saat ini.\n";
                break;

            case 4:
                cout << "\n--- MENU JADWAL ---\n";
                cout << "Menampilkan jadwal kuliah mingguan.\n";
                break;

            case 5:
                cout << "\n--- MENU TRANSKRIP ---\n";
                cout << "Menampilkan transkrip nilai lengkap dan IPK.\n";
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
