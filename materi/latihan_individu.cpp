#include <iostream>
using namespace std;

int main() {
    int pilihanMenu;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "\n=== PROGRAM LATIHAN INDIVIDU ===" << endl;
        cout << "1. Nama Hari (1-7)\n";
        cout << "2. Nama Bulan (1-12)\n";
        cout << "3. Kalkulator Empat Operasi\n";
        cout << "4. Jenis Kendaraan (Kode 1-4)\n";
        cout << "5. Kategori Semester (Beberapa case ke satu output)\n";
        cout << "6. Keluar Program\n";
        cout << "Masukkan pilihan menu (1-6): ";
        cin >> pilihanMenu;

        if (pilihanMenu == 6) {
            cout << "Keluar dari program. Terima kasih!\n";
            break;
        }

        switch (pilihanMenu) {
            case 1: {
                int hari;
                cout << "\nMasukkan nomor hari (1-7): ";
                cin >> hari;
                if (hari == 1) {
                    cout << "Hari: Senin\n";
                } else if (hari == 2) {
                    cout << "Hari: Selasa\n";
                } else if (hari == 3) {
                    cout << "Hari: Rabu\n";
                } else if (hari == 4) {
                    cout << "Hari: Kamis\n";
                } else if (hari == 5) {
                    cout << "Hari: Jumat\n";
                } else if (hari == 6) {
                    cout << "Hari: Sabtu\n";
                } else if (hari == 7) {
                    cout << "Hari: Minggu\n";
                } else {
                    cout << "Nomor hari tidak valid!\n";
                }
                break;
            }

            case 2: {
                int bulan;
                cout << "\nMasukkan nomor bulan (1-12): ";
                cin >> bulan;
                if (bulan == 1) {
                    cout << "Bulan: Januari\n";
                } else if (bulan == 2) {
                    cout << "Bulan: Februari\n";
                } else if (bulan == 3) {
                    cout << "Bulan: Maret\n";
                } else if (bulan == 4) {
                    cout << "Bulan: April\n";
                } else if (bulan == 5) {
                    cout << "Bulan: Mei\n";
                } else if (bulan == 6) {
                    cout << "Bulan: Juni\n";
                } else if (bulan == 7) {
                    cout << "Bulan: Juli\n";
                } else if (bulan == 8) {
                    cout << "Bulan: Agustus\n";
                } else if (bulan == 9) {
                    cout << "Bulan: September\n";
                } else if (bulan == 10) {
                    cout << "Bulan: Oktober\n";
                } else if (bulan == 11) {
                    cout << "Bulan: November\n";
                } else if (bulan == 12) {
                    cout << "Bulan: Desember\n";
                } else {
                    cout << "Nomor bulan tidak valid!\n";
                }
                break;
            }

            case 3: {
                double angka1, angka2, hasil = 0;
                char op;
                bool validOp = true;

                cout << "\nMasukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan operator (+, -, *, /): ";
                cin >> op;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;

                if (op == '+') {
                    hasil = angka1 + angka2;
                } else if (op == '-') {
                    hasil = angka1 - angka2;
                } else if (op == '*') {
                    hasil = angka1 * angka2;
                } else if (op == '/') {
                    if (angka2 != 0) {
                        hasil = angka1 / angka2;
                    } else {
                        validOp = false;
                        cout << "Error: Pembagian dengan nol!\n";
                    }
                } else {
                    validOp = false;
                    cout << "Operator tidak valid!\n";
                }

                if (validOp) {
                    cout << "Hasil Kalkulator: " << hasil << endl;
                }
                break;
            }

            case 4: {
                int kode;
                cout << "\nMasukkan kode kendaraan (1-4): ";
                cin >> kode;
                if (kode == 1) {
                    cout << "Jenis Kendaraan: Motor\n";
                } else if (kode == 2) {
                    cout << "Jenis Kendaraan: Mobil\n";
                } else if (kode == 3) {
                    cout << "Jenis Kendaraan: Bus\n";
                } else if (kode == 4) {
                    cout << "Jenis Kendaraan: Truk\n";
                } else {
                    cout << "Kode kendaraan tidak valid!\n";
                }
                break;
            }

            case 5: {
                int semester;
                cout << "\nMasukkan nomor semester (1-8): ";
                cin >> semester;
                switch (semester) {
                    case 1:
                    case 2:
                        cout << "Kategori: Mahasiswa Tahun Pertama (Tahap Persiapan Bersama)\n";
                        break;
                    case 3:
                    case 4:
                        cout << "Kategori: Mahasiswa Tahun Kedua (Tahap Madya)\n";
                        break;
                    case 5:
                    case 6:
                        cout << "Kategori: Mahasiswa Tahun Ketiga (Tahap Lanjut/Spesialisasi)\n";
                        break;
                    case 7:
                    case 8:
                        cout << "Kategori: Mahasiswa Tahun Akhir (Tugas Akhir/Skripsi)\n";
                        break;
                    default:
                        cout << "Semester tidak valid!\n";
                        break;
                }
                break;
            }

            default:
                cout << "Pilihan menu utama tidak valid!\n";
                break;
        }

        cout << "\nIngin kembali ke menu utama? (y/n): ";
        cin >> lanjut;
        cout << endl;
    }

    return 0;
}
