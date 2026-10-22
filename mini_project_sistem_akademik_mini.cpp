#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihanMenu;
    bool running = true;
    char lanjut;
    
    string nama = "-";
    string nim = "-";
    string prodi = "-";
    double nilaiUjian = 0;
    bool adaNilai = false;
    long saldoKeuangan = 1000000;

    while (running) {
        cout << "\n===== SISTEM INFORMASI AKADEMIK =====\n";
        cout << "1. Data Mahasiswa\n";
        cout << "2. KRS\n";
        cout << "3. Nilai\n";
        cout << "4. Jadwal\n";
        cout << "5. Keuangan\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan (1-6): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1: {
                int subData;
                cout << "\n--- MENU DATA MAHASISWA ---\n";
                cout << "1. Input/Update Data\n";
                cout << "2. Lihat Data\n";
                cout << "Pilih submenu (1-2): ";
                cin >> subData;

                if (subData == 1) {
                    cout << "Masukkan Nama: ";
                    cin.ignore();
                    getline(cin, nama);
                    cout << "Masukkan NIM: ";
                    cin >> nim;
                    cout << "Masukkan Prodi: ";
                    cin.ignore();
                    getline(cin, prodi);
                    cout << "Data mahasiswa berhasil disimpan!\n";
                } else if (subData == 2) {
                    cout << "\n[ Profil Mahasiswa ]\n";
                    cout << "Nama  : " << nama << endl;
                    cout << "NIM   : " << nim << endl;
                    cout << "Prodi : " << prodi << endl;
                } else {
                    cout << "Submenu tidak valid!\n";
                }
                break;
            }

            case 2: {
                int subKrs;
                cout << "\n--- MENU KRS ---\n";
                cout << "1. Ambil Mata Kuliah\n";
                cout << "2. Lihat KRS Aktif\n";
                cout << "Pilih submenu (1-2): ";
                cin >> subKrs;

                if (subKrs == 1) {
                    cout << "Berhasil mengambil paket SKS semester ini.\n";
                } else if (subKrs == 2) {
                    cout << "Daftar Mata Kuliah: Algoritma Pemrograman, Struktur Data, Kalkulus.\n";
                } else {
                    cout << "Submenu KRS tidak valid!\n";
                }
                break;
            }

            case 3: {
                int subNilai;
                cout << "\n--- MENU NILAI ---\n";
                cout << "1. Masukkan Angka Nilai (0-100)\n";
                cout << "2. Cek Grade Nilai\n";
                cout << "Pilih submenu (1-2): ";
                cin >> subNilai;

                if (subNilai == 1) {
                    cout << "Masukkan nilai ujian: ";
                    cin >> nilaiUjian;
                    if (nilaiUjian >= 0 && nilaiUjian <= 100) {
                        adaNilai = true;
                        cout << "Nilai berhasil disimpan.\n";
                    } else {
                        adaNilai = false;
                        cout << "Error: Nilai harus di antara 0 dan 100!\n";
                    }
                } else if (subNilai == 2) {
                    if (adaNilai) {
                        cout << "Nilai Angka: " << nilaiUjian << endl;
                        if (nilaiUjian >= 85) {
                            cout << "Grade: A\n";
                        } else if (nilaiUjian >= 75) {
                            cout << "Grade: B\n";
                        } else if (nilaiUjian >= 65) {
                            cout << "Grade: C\n";
                        } else if (nilaiUjian >= 50) {
                            cout << "Grade: D\n";
                        } else {
                            cout << "Grade: E\n";
                        }
                    } else {
                        cout << "Belum ada nilai yang diinput. Silakan pilih menu 1 terlebih dahulu.\n";
                    }
                } else {
                    cout << "Submenu nilai tidak valid!\n";
                }
                break;
            }

            case 4:
                cout << "\n--- MENU JADWAL KULIAH ---\n";
                cout << "Senin  : Pemrograman Berorientasi Objek\n";
                cout << "Selasa : Basis Data\n";
                cout << "Rabu   : Jaringan Komputer\n";
                break;

            case 5: {
                int subKeuangan;
                cout << "\n--- MENU KEUANGAN ---\n";
                cout << "1. Cek Saldo / Tagihan\n";
                cout << "2. Bayar UKT / Setor Dana\n";
                cout << "Pilih submenu (1-2): ";
                cin >> subKeuangan;

                if (subKeuangan == 1) {
                    cout << "Sisa Saldo / Potensi Dana: Rp " << saldoKeuangan << endl;
                } else if (subKeuangan == 2) {
                    long nominal;
                    cout << "Masukkan nominal pembayaran/setor: Rp ";
                    cin >> nominal;
                    if (nominal > 0) {
                        saldoKeuangan += nominal;
                        cout << "Transaksi berhasil! Saldo terbaru: Rp " << saldoKeuangan << endl;
                    } else {
                        cout << "Error: Nominal harus bernilai positif (> 0)!\n";
                    }
                } else {
                    cout << "Submenu keuangan tidak valid!\n";
                }
                break;
            }

            case 6:
                cout << "\nKeluar dari Sistem Informasi Akademik. Terima kasih.\n";
                running = false;
                break;

            default:
                cout << "\nPilihan menu utama tidak valid! Silakan masukkan angka 1-6.\n";
                break;
        }

        if (!running) {
            break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
