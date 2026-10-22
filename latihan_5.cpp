#include <iostream>
using namespace std;

int main(){
    float a, b;
    char op;
    char lanjut;
    
    do {
        cin >> a >> op >> b;
        
        switch(op){
            case '+': cout << a + b << "\n"; break;
            case '-': cout << a - b << "\n"; break;
            case '*': cout << a * b << "\n"; break;
            case '/':
                if(b != 0) cout << a / b << "\n";
                else cout << "Tidak dapat membagi dengan 0\n"; 		
                break;
            default: cout << "Operator tidak valid\n";
        }
        cout << "lanjut?(y/n)";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');
}
