#include <iostream>
using namespace std;

int main() {
    int pilihan = 0;
    long saldo = 1000000;
    long jumlah;

    while (pilihan != 5) {
        cout << "\n===== ATM =====" << endl;
        cout << "1. Cek Saldo\n";
        cout << "2. Setor Tunai\n";
        cout << "3. Tarik Tunai\n";
        cout << "4. Transfer\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\nSaldo Anda saat ini: Rp " << saldo << endl;
                break;

            case 2:
                cout << "\nMasukkan jumlah setor tunai: Rp ";
                cin >> jumlah;
                if (jumlah > 0) {
                    saldo = saldo + jumlah;
                    cout << "Setor tunai berhasil! Saldo sekarang: Rp " << saldo << endl;
                } else {
                    cout << "Jumlah tidak valid!\n";
                }
                break;

            case 3:
                cout << "\nMasukkan jumlah tarik tunai: Rp ";
                cin >> jumlah;
                if (jumlah > 0) {
                    if (jumlah <= saldo) {
                        saldo = saldo - jumlah;
                        cout << "Tarik tunai berhasil! Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo tidak mencukupi!\n";
                    }
                } else {
                    cout << "Jumlah tidak valid!\n";
                }
                break;

            case 4:
                cout << "\nMasukkan jumlah transfer: Rp ";
                cin >> jumlah;
                if (jumlah > 0) {
                    if (jumlah <= saldo) {
                        saldo = saldo - jumlah;
                        cout << "Transfer berhasil! Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo tidak mencukupi untuk transfer!\n";
                    }
                } else {
                    cout << "Jumlah tidak valid!\n";
                }
                break;

            case 5:
                cout << "\nTerima kasih telah menggunakan layanan ATM.\n";
                break;

            default:
                cout << "\nPilihan menu tidak valid!\n";
                break;
        }
    }

    return 0;
}
