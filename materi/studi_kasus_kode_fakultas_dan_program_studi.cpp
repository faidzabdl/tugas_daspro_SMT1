#include <iostream>
using namespace std;

int main() {
    int fakultas, prodi;

    cout << "Fakultas:\n";
    cout << "1. Teknik\n";
    cout << "2. Ekonomi\n";
    cout << "Pilih fakultas (1-2): ";
    cin >> fakultas;

    switch (fakultas) {
        case 1:
            cout << "\n1. Teknik Informatika\n";
            cout << "2. Sistem Informasi\n";
            cout << "Pilih program studi (1-2): ";
            cin >> prodi;

            switch (prodi) {
                case 1:
                    cout << "Anda memilih Fakultas Teknik, Program Studi Teknik Informatika.\n";
                    break;
                case 2:
                    cout << "Anda memilih Fakultas Teknik, Program Studi Sistem Informasi.\n";
                    break;
                default:
                    cout << "Program studi tidak valid!\n";
                    break;
            }
            break;

        case 2:
            cout << "\n1. Manajemen\n";
            cout << "2. Akuntansi\n";
            cout << "Pilih program studi (1-2): ";
            cin >> prodi;

            switch (prodi) {
                case 1:
                    cout << "Anda memilih Fakultas Ekonomi, Program Studi Manajemen.\n";
                    break;
                case 2:
                    cout << "Anda memilih Fakultas Ekonomi, Program Studi Akuntansi.\n";
                    break;
                default:
                    cout << "Program studi tidak valid!\n";
                    break;
            }
            break;

        default:
            cout << "Fakultas tidak valid!\n";
            break;
    }

    return 0;
}
