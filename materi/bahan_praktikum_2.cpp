#include <iostream>
using namespace std;

int main(){
    float a, b;
    char op;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "Masukkan bilangan 1: ";
        cin >> a;
        cout << "Masukkan bilangan 2: ";
        cin >> b;
        
        cout << "\nPilih operasi matematika\n";
        cout << "1. pertambahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "masukkan pilihan: ";
        cin >> op;
        
        switch(op){
            case '1': cout << a << " + " << b << " = " << a + b << endl; break;
            case '2': cout << a << " - " << b << " = " << a - b << endl; break;
            case '3': cout << a << " * " << b << " = " << a * b << endl; break;
            case '4':
                if(b != 0) cout << a << " / " << b << " = " << a / b << endl;
                else cout << "Tidak dapat membagi dengan 0\n";        
                break;
            default: cout << "Operator tidak valid\n";
        }

        cout << "\nIngin menghitung lagi? (y/n): ";
        cin >> lanjut;
        cout << endl;
    }

    return 0;
}
