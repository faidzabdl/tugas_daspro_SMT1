#include <iostream>
using namespace std;

int main() {
    int pilihan;
    long saldo = 1000000;
    long jumlah;
    char lanjut;

    do {
        cout << "===== ATM SEDERHANA =====" << endl;
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
                cout << "\nMasukkan nominal setor tunai: Rp ";
                cin >> jumlah;
                if (jumlah > 0) {
                    saldo = saldo + jumlah;
                    cout << "Setor tunai berhasil! Saldo sekarang: Rp " << saldo << endl;
                } else {
                    cout << "Nomor transaksi harus positif!\n";
                }
                break;

            case 3:
                cout << "\nMasukkan nominal tarik tunai: Rp ";
                cin >> jumlah;
                if (jumlah > 0) {
                    if (jumlah <= saldo) {
                        saldo = saldo - jumlah;
                        cout << "Tarik tunai berhasil! Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo tidak mencukupi!\n";
                    }
                } else {
                    cout << "Nomor transaksi harus positif!\n";
                }
                break;

            case 4:
                cout << "\nMasukkan nominal transfer: Rp ";
                cin >> jumlah;
                if (jumlah > 0) {
                    if (jumlah <= saldo) {
                        saldo = saldo - jumlah;
                        cout << "Transfer berhasil! Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo tidak mencukupi!\n";
                    }
                } else {
                    cout << "Nomor transaksi harus positif!\n";
                }
                break;

            case 5:
                cout << "\nKeluar dari sistem ATM. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu tidak valid!\n";
                break;
        }

        if (pilihan == 5) {
            break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
