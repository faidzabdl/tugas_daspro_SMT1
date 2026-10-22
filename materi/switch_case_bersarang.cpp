#include <iostream>
using namespace std;

int main() {
    int fakultas, prodi;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "Masukkan kode fakultas dan prodi: ";
        cin >> fakultas >> prodi;
        
        switch (fakultas) {
            case 1:
                switch (prodi) {
                    case 1: cout << "Teknik Informatika\n"; break;
                    case 2: cout << "Sistem Informasi\n"; break;
                    default: cout << "Prodi tidak tersedia\n";
                }
                break;
            case 2:
                switch (prodi) {
                    case 1: cout << "Manajemen\n"; break;
                    case 2: cout << "Akuntansi\n"; break;
                    default: cout << "Prodi tidak tersedia\n";
                }
                break;
            default:
                cout << "Fakultas tidak tersedia\n";
        }

        cout << "\nIngin mencoba lagi? (y/n): ";
        cin >> lanjut;
        cout << endl;
    }

    return 0;
}
