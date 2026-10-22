#include <iostream>
using namespace std;

int main() {
    int pilihan = 0;

    while (pilihan != 6) {
        cout << "\n===== SISTEM LAYANAN KAMPUS =====" << endl;
        cout << "1. Akademik\n";
        cout << "2. Keuangan\n";
        cout << "3. Perpustakaan\n";
        cout << "4. Kemahasiswaan\n";
        cout << "5. Laboratorium\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\nAnda memilih menu Akademik." << endl;
                cout << "Layanan: KRS, Transkrip Nilai, dan Jadwal Kuliah." << endl;
                break;
            case 2:
                cout << "\nAnda memilih menu Keuangan." << endl;
                cout << "Layanan: Cek Tagihan UKT dan Status Pembayaran." << endl;
                break;
            case 3:
                cout << "\nAnda memilih menu Perpustakaan." << endl;
                cout << "Layanan: Peminjaman Buku dan Riwayat Peminjaman." << endl;
                break;
            case 4:
                cout << "\nAnda memilih menu Kemahasiswaan." << endl;
                cout << "Layanan: Info Beasiswa, Ormawa, dan Kegiatan Mahasiswa." << endl;
                break;
            case 5:
                cout << "\nAnda memilih menu Laboratorium." << endl;
                cout << "Layanan: Peminjaman Lab dan Jadwal Praktikum." << endl;
                break;
            case 6:
                cout << "\nKeluar dari sistem. Terima kasih." << endl;
                break;
            default:
                cout << "\nPilihan tidak valid! Silakan masukkan angka 1 sampai 6." << endl;
                break;
        }
    }

    return 0;
}
