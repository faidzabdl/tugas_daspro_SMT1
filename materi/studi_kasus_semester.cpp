#include <iostream>
using namespace std;

int main() {
    int semester;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "Masukkan semester: ";
        cin >> semester;

        switch (semester) {
            case 1:
            case 2:
                cout << "Semester Awal\n";
                break;
            case 3:
            case 4:
                cout << "Semester Menengah\n";
                break;
            case 5:
            case 6:
                cout << "Semester Lanjutan\n";
                break;
            case 7:
            case 8:
                cout << "Semester Akhir\n";
                break;
            default:
                cout << "Semester tidak valid\n";
                break;
        }

        cout << "\nIngin mengecek lagi? (y/n): ";
        cin >> lanjut;
        cout << endl;
    }

    return 0;
}
