#include<iostream>
using namespace std;

int main(){
    int bulan;
    char lanjut;
    
    do {
    	cout << "masukkan nomor bulan: ";
        cin >> bulan;
        
        switch (bulan) {
            case 1:
                cout << "Januari\n";
                break;
            case 2:
                cout << "Februari\n";
                break;
            case 3:
                cout << "Maret\n";
                break;
            case 4:
                cout << "April\n";
                break;
            case 5:
                cout << "Mei\n";
                break;
            case 6:
                cout << "Juni\n";
                break;
            case 7:
                cout << "Juli\n";
                break;
            case 8:
                cout << "Agustus\n";
                break;
            case 9:
                cout << "September\n";
                break;
            case 10:
                cout << "Oktober\n";
                break;
            case 11:
                cout << "November\n";
                break;
            case 12:
                cout << "Desember\n";
                break;              
            default:
                cout << "nomor tidak valid\n";
        }
        cout << "lanjut?(y/n)";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');
}
