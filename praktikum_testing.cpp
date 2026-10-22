#include <iostream>
using namespace std;

int main() {
    int pilihanMenu;
    char lanjut;

    do {
        cout << "===== MENU UTAMA =====" << endl;
        cout << "1. Menu 1\n";
        cout << "2. Menu 2\n";
        cout << "3. Menu 3\n";
        cout << "Masukkan pilihan (1-3): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "Menu 1\n";
                break;
            case 2:
                cout << "Menu 2\n";
                break;
            case 3:
                cout << "Menu 3\n";
                break;
            default:
                cout << "Pesan error: Pilihan tidak valid!\n";
                break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
