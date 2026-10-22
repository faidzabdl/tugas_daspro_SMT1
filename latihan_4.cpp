#include<iostream>
using namespace std;

int main(){
    int jk;
    char lanjut;
    
    do {
    	cout << "masukkan jenis kendaran(1-4): ";
        cin >> jk;
        
        switch(jk){
            case 1:
                cout << "Motor\n";
                break;
            case 2:
                cout << "Mobil\n";
                break;	
            case 3:
                cout << "Bus\n";
                break;
            case 4:
                cout << "Truk\n";
                break;
            default:
                cout << "Jenis kendaraan tidak valid\n";
                break;
                            
        }
        cout << "ulang?(y/n) ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');
}
