#include<iostream>
using namespace std;

int main(){
    int menu;
    int pilihan;
    char lanjut;
    
    do {
        cout << "========= SISTEM AKADEMIK ==========\n";
        cout << "1. Biodata\n";
        cout << "2. KRS\n";
        cout << "3. Nilai\n";
        cout << "4. Jadwal\n";
        cout << "5. Transkrip\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> menu;
        
        switch(menu){
            case 1:
                cout << "Memilih Biodata\n";
                break;
            case 2:
                cout << "\nMemilih KRS\n";
                cout << "============= menu KRS ===========\n";
                cout << "1. Tambah Mata Kuliah\n";
                cout << "2. Hapus Mata Kuliah\n";
                cout << "3. Lihat KRS\n";
                cout << "Masukkan pilihan: ";
                cin >> menu;
                switch(menu){
                    case 1:
                        cout << "\nMemilih menu Tambah Mata Kuliah\n";
                        break;
                    case 2:
                        cout << "\nMemilih menu Hapus Mata Kuliah\n";
                        break;
                    case 3:
                        cout << "\nMemilih menu Lihat KRS\n";
                        break;		
                    default:
                        cout << "\nMenu tidak valid\n";
                        break;	
                }
                break;
            case 3:
                cout << "\nMemilih Nilai\n";
                break;
            case 4:
                cout << "\nMemilih Jadwal\n";
                break;
            case 5:
                cout << "\nMemilih Transkip\n";
                break;
            case 6:
                cout << "\nProgram Selesai...\n";
                break;
            default:
                cout << "\nMenu tidak valid\n";
                break;						
        }	
        
        cout << "\nIngin lanjut? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');
}
