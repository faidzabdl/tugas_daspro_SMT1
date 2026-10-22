#include <iostream>
using namespace std;

int main() {
    int pilihan;
    char lanjut;

    do {
        cout << "===== LAYANAN LABORATORIUM =====" << endl;
        cout << "1. Peminjaman Lab\n";
        cout << "2. Peminjaman Komputer\n";
        cout << "3. Instalasi Software\n";
        cout << "4. Reset Password\n";
        cout << "5. Keluar\n";
        cout << "Masukkan kode layanan (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\n--- PROSEDUR PEMINJAMAN LAB ---\n";
                cout << "1. Mengajukan surat izin peminjaman.\n";
                cout << "2. Memeriksa ketersediaan jadwal lab.\n";
                cout << "3. Mendapat persetujuan dari kepala lab.\n";
                break;

            case 2:
                cout << "\n--- PROSEDUR PEMINJAMAN KOMPUTER ---\n";
                cout << "1. Menunjukkan kartu identitas mahasiswa.\n";
                cout << "2. Memilih nomor unit komputer yang tersedia.\n";
                cout << "3. Mengisi buku log penggunaan.\n";
                break;

            case 3:
                cout << "\n--- PROSEDUR INSTALASI SOFTWARE ---\n";
                cout << "1. Mengisi formulir permintaan software resmi.\n";
                cout << "2. Menyertakan installer atau lisensi yang sah.\n";
                cout << "3. Menyerahkan perangkat kepada teknisi lab.\n";
                break;

            case 4:
                cout << "\n--- PROSEDUR RESET PASSWORD ---\n";
                cout << "1. Melapor ke admin lab dengan membawa KTM.\n";
                cout << "2. Melakukan verifikasi data akun mahasiswa.\n";
                cout << "3. Admin memproses reset password sementara.\n";
                break;

            case 5:
                cout << "\nKeluar dari sistem layanan laboratorium. Terima kasih.\n";
                break;

            default:
                cout << "\nKode layanan tidak valid!\n";
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
