#include <iostream>
using namespace std;

int main() {
    int pilihan;
    char lanjut;

    do {
        cout << "===== MENU =====\n";
        cout << "1. Profil\n";
        cout << "2. Nilai\n";
        cout << "3. Jadwal\n";
        cout << "4. Keuangan\n";
        cout << "5. Bantuan\n";
        cout << "6. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Menampilkan informasi profil mahasiswa.\n";
                break;
            case 2:
                cout << "Menampilkan daftar nilai akademik.\n";
                break;
            case 3:
                cout << "Menampilkan jadwal kuliah mingguan.\n";
                break;
            case 4:
                cout << "Menampilkan status keuangan dan tagihan UKT.\n";
                break;
            case 5:
                cout << "Menampilkan panduan dan layanan bantuan.\n";
                break;
            case 6:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak tersedia.\n";
                break;
        }

        if (pilihan == 6) {
            break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
