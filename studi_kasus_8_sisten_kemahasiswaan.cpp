#include <iostream>
using namespace std;

int main() {
    int pilihan;
    char lanjut;

    do {
        cout << "===== SISTEM KEMAHASISWAAN =====" << endl;
        cout << "1. Beasiswa\n";
        cout << "2. Organisasi Mahasiswa\n";
        cout << "3. Surat Aktif Kuliah\n";
        cout << "4. Kegiatan Mahasiswa\n";
        cout << "5. Konseling Akademik\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\n--- INFORMASI BEASISWA ---\n";
                cout << "Pendaftaran beasiswa internal dan eksternal sedang dibuka.\n";
                break;

            case 2:
                cout << "\n--- ORGANISASI MAHASISWA ---\n";
                cout << "Daftar Ormawa: BEM, DPM, Hima Prodi, dan UKM.\n";
                break;

            case 3:
                cout << "\n--- SURAT AKTIF KULIAH ---\n";
                cout << "Pengajuan surat keterangan aktif kuliah dapat dilakukan secara online.\n";
                break;

            case 4:
                cout << "\n--- KEGIATAN MAHASISWA ---\n";
                cout << "Informasi seminar, workshop, dan lomba mahasiswa terbaru.\n";
                break;

            case 5:
                cout << "\n--- KONSELING AKADEMIK ---\n";
                cout << "Silakan buat janji temu dengan Dosen Wali untuk konsultasi studi.\n";
                break;

            case 6:
                cout << "\nKeluar dari sistem kemahasiswaan. Terima kasih.\n";
                break;

            default:
                cout << "\nPilihan menu tidak valid!\n";
                break;
        }

        if (pilihan == 6) {
            break;
        }

        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
