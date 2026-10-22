#include <iostream>
using namespace std;

int main() {
    int pilihanMenu = 0;
    bool running = true;

    while (running) {
        cout << "\n===== MENU UTAMA =====" << endl;
        cout << "1. Menu Akademik\n";
        cout << "2. Menu Keuangan\n";
        cout << "3. Perpustakaan\n";
        cout << "4. Kemahasiswaan\n";
        cout << "5. Laboratorium\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan (1-6): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "Menu Akademik\n";
                break;
            case 2:
                cout << "Menu Keuangan\n";
                break;
            case 3:
                cout << "Perpustakaan\n";
                break;
            case 4:
                cout << "Kemahasiswaan\n";
                break;
            case 5:
                cout << "Laboratorium\n";
                break;
            case 6:
                cout << "Keluar dari program. Terima kasih!\n";
                running = false;
                break;
            default:
                cout << "Tidak valid\n";
                break;
        }
    }

    return 0;
}
