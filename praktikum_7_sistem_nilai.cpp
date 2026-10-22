#include <iostream>
using namespace std;

int main() {
    int pilihanMenu;
    double nilai = 0;
    bool adaNilai = false;
    char lanjut;

    do {
        cout << "===== PRAKTIKUM 7 — SISTEM NILAI =====" << endl;
        cout << "1. Input Nilai\n";
        cout << "2. Lihat Nilai\n";
        cout << "3. Tentukan Grade\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "\nMasukkan nilai mahasiswa (0-100): ";
                cin >> nilai;
                if (nilai >= 0 && nilai <= 100) {
                    adaNilai = true;
                    cout << "Nilai berhasil disimpan!\n";
                } else {
                    cout << "Error: Nilai harus berada di rentang 0 sampai 100!\n";
                }
                break;

            case 2:
                cout << "\n--- LIHAT NILAI ---\n";
                if (adaNilai) {
                    cout << "Nilai saat ini: " << nilai << endl;
                } else {
                    cout << "Belum ada nilai yang diinput. Silakan pilih menu 1 terlebih dahulu.\n";
                }
                break;

            case 3: {
                cout << "\n--- TENTUKAN GRADE ---\n";
                double nilaiCheck;
                cout << "Masukkan nilai untuk dikonversi ke grade: ";
                cin >> nilaiCheck;

                if (nilaiCheck >= 0 && nilaiCheck <= 100) {
                    if (nilaiCheck >= 85) {
                        cout << "Grade: A\n";
                    } else if (nilaiCheck >= 75) {
                        cout << "Grade: B\n";
                    } else if (nilaiCheck >= 65) {
                        cout << "Grade: C\n";
                    } else if (nilaiCheck >= 50) {
                        cout << "Grade: D\n";
                    } else {
                        cout << "Grade: E\n";
                    }
                } else {
                    cout << "Error: Rentang nilai tidak valid!\n";
                }
                break;
            }

            case 4:
                cout << "\nKeluar dari sistem nilai. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu tidak valid!\n";
                break;
        }

        if (pilihanMenu == 4) {
            break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
