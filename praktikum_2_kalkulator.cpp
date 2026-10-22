#include <iostream>
using namespace std;

int main() {
    double angka1, angka2, hasil;
    char op;
    char lanjut;

    do {
        bool isValid = true;
        hasil = 0;

        cout << "Masukkan bilangan pertama: ";
        cin >> angka1;
        cout << "Masukkan operator (+, -, *, /): ";
        cin >> op;
        cout << "Masukkan bilangan kedua: ";
        cin >> angka2;

        switch (op) {
            case '+':
                hasil = angka1 + angka2;
                break;
            case '-':
                hasil = angka1 - angka2;
                break;
            case '*':
                hasil = angka1 * angka2;
                break;
            case '/':
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                } else {
                    isValid = false;
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
                }
                break;
            default:
                isValid = false;
                cout << "Operator tidak valid!" << endl;
                break;
        }

        if (isValid) {
            cout << "\nOutput:" << endl;
            cout << angka1 << " " << op << " " << angka2 << " = " << hasil << endl;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
