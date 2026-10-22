#include<iostream>
using namespace std;

int main(){
    char fakultas;
    char lanjut;
    
    do {
    	cout << "masukkan kode fakultas: ";
        cin >> fakultas;
        
        switch(fakultas){
            case 'A':
                cout << "Fakultas Sains dan Teknologi\n";
                break;
            case 'B':
                cout << "Fakultas Ushuluddin\n";
                break;
            case 'C':
                cout << "Fakultas Sosiologi\n";
                break;
            case 'D':
                cout << "Fakultas Psikologi\n";
                break;	
            default:
                cout << "Kode fakultas tidak valid\n";
                break;				
        }
        cout << "lanjut?(y/n)";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');
}
