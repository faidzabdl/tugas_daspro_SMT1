#include <iostream>
using namespace std;

int main() {
    int pilihanMenu;
    long nominal;
    char lanjut;

    do {
        cout << "===== SISTEM KEUANGAN MAHASISWA =====" << endl;
        cout << "1. Cek UKT\n";
        cout << "2. Cek Tagihan\n";
        cout << "3. Pembayaran\n";
        cout << "4. Riwayat Pembayaran\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "\n--- CEK UKT ---\n";
                cout << "Golongan UKT Anda: Golongan III (Rp 3.500.000)\n";
                break;

            case 2:
                cout << "\n--- CEK TAGIHAN ---\n";
                cout << "Total Tagihan Aktif: Rp 3.500.000\n";
                break;

            case 3: {
                int subPembayaran;
                cout << "\n--- MENU PEMBAYARAN ---\n";
                cout << "1. Tunai\n";
                cout << "2. Transfer\n";
                cout << "3. Virtual Account\n";
                cout << "Pilih metode pembayaran (1-3): ";
                cin >> subPembayaran;

                switch (subPembayaran) {
                    case 1:
                        cout << "Masukkan nominal pembayaran: Rp ";
                        cin >> nominal;
                        if (nominal >= 0) {
                            cout << "Pembayaran tunai sebesar Rp " << nominal << " berhasil diproses.\n";
                        } else {
                            cout << "Error: Nominal pembayaran tidak boleh negatif!\n";
                        }
                        break;

                    case 2:
                        cout << "Masukkan nominal pembayaran: Rp ";
                        cin >> nominal;
                        if (nominal >= 0) {
                            cout << "Pembayaran transfer sebesar Rp " << nominal << " berhasil diproses.\n";
                        } else {
                            cout << "Error: Nominal pembayaran tidak boleh negatif!\n";
                        }
                        break;

                    case 3:
                        cout << "Masukkan nominal pembayaran: Rp ";
                        cin >> nominal;
                        if (nominal >= 0) {
                            cout << "Pembayaran Virtual Account sebesar Rp " << nominal << " berhasil diproses.\n";
                        } else {
                            cout << "Error: Nominal pembayaran tidak boleh negatif!\n";
                        }
                        break;

                    default:
                        cout << "Metode pembayaran tidak tersedia!\n";
                        break;
                }
                break;
            }

            case 4:
                cout << "\n--- RIWAYAT PEMBAYARAN ---\n";
                cout << "Belum ada riwayat transaksi pembayaran pada semester ini.\n";
                break;

            case 5:
                cout << "\nKeluar dari sistem keuangan. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu tidak tersedia!\n";
                break;
        }

        if (pilihanMenu == 5) {
            break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}

