#include <iostream>
using namespace std;

int main() {
    int pilihanMenu;
    char lanjut;

    do {
        cout << "===== PERPUSTAKAAN =====" << endl;
        cout << "1. Pinjam Buku\n";
        cout << "2. Kembalikan Buku\n";
        cout << "3. Cek Denda\n";
        cout << "4. Cek Koleksi\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "\n--- PINJAM BUKU ---\n";
                cout << "Silakan pilih buku yang ingin dipinjam.\n";
                break;

            case 2:
                cout << "\n--- KEMBALIKAN BUKU ---\n";
                cout << "Proses pengembalian buku berhasil diproses.\n";
                break;

            case 3: {
                int hariKeterlambatan;
                long denda = 0;
                cout << "\n--- CEK DENDA ---\n";
                cout << "Masukkan jumlah hari keterlambatan: ";
                cin >> hariKeterlambatan;

                if (hariKeterlambatan <= 0) {
                    denda = 0;
                    cout << "Tidak ada keterlambatan. Denda: Rp 0\n";
                } else if (hariKeterlambatan <= 3) {
                    denda = hariKeterlambatan * 1000;
                    cout << "Total Denda: Rp " << denda << endl;
                } else if (hariKeterlambatan <= 7) {
                    denda = hariKeterlambatan * 2000;
                    cout << "Total Denda: Rp " << denda << endl;
                } else {
                    denda = hariKeterlambatan * 5000;
                    cout << "Total Denda (Keterlambatan Berat): Rp " << denda << endl;
                }
                break;
            }

            case 4:
                cout << "\n--- CEK KOLEKSI ---\n";
                cout << "Menampilkan daftar koleksi buku perpustakaan.\n";
                break;

            case 5:
                cout << "\nKeluar dari sistem perpustakaan. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu tidak valid!\n";
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
