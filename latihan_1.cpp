#include<iostream>
using namespace std;

int main(){
    int hari;
    string lanjut;
    
    while (true) {
        cout << "Masukkan nomor hari (1-7) atau 0 untuk keluar: ";
        cin >> hari;
        
        
        
        switch (hari) {
            case 1:
                cout << "Senin\n";
                break;
            case 2:
                cout << "Selasa\n";
                break;
            case 3:
                cout << "Rabu\n";
                break;
            case 4:
                cout << "Kamis\n";
                break;
            case 5:
                cout << "Jum'at\n";
                break;
            case 6:
                cout << "Sabtu\n";
                break;
            case 7:
                cout << "Minggu\n";
                break;          
            default:
                cout << "Nomor tidak valid\n";
        }
        cout << "------------------------\n";
        cout << "jalankan lagi?(y/n)";
        cin >> lanjut;
        if (lanjut == "n") {
            cout << "Program selesai." << endl;
            break;
        }
    }
    
    return 0;
}
