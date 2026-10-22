#include <iostream>
using namespace std;

int main() {
    int pilihan = 0;

    while (pilihan != 4) {
        cout << "\n===== MENU =====\n";
        cout << "1. Profil\n";
        cout << "2. Nilai\n";
        cout << "3. Jadwal\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Menu Profil\n";
                break;
            case 2:
                cout << "Menu Nilai\n";
                break;
            case 3:
                cout << "Menu Jadwal\n";
                break;
            case 4:
                cout << "Program selesai\n";
                break;
            default:
                cout << "Pilihan tidak tersedia\n";
                break;
        }
    }

    return 0;
}
