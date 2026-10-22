#include <iostream>
using namespace std;

int main(){
	int pilihan = 0;
	string nama, nim, prodi, semester;
	
	cout << "masukkan nama: ";
	cin >> nama;
	cout << "masukkan NIM: ";
	cin >> nim;
	cout << "masukkan prodi: ";
	cin >> prodi;
	cout << "masukkan semester: ";
	cin >> semester;
	
	while (pilihan != 6) {
		cout << "\n=========SISTEM AKADEMIK==========\n";
		cout << "1. Biodata\n";
		cout << "2. KRS\n";
		cout << "3. Nilai\n";
		cout << "4. Jadwal\n";
		cout << "5. Transkip\n";
		cout << "6. keluar\n";
		cout << "Masukkan pilihan: ";
		cin >> pilihan;
		
		switch(pilihan){
			case 1:
				cout << "\nMemilih Biodata";
				cout << "\nnama: " << nama;
				cout << "\nnim: " << nim;
				cout << "\nprodi: " << prodi;
				cout << "\nsemester: " << semester << "\n";
				break;
			case 2:
				cout << "Memilih KRS\n";
				break;
			case 3:
				cout << "Memilih Nilai\n";
				break;	
			case 4:
				cout << "Memilih Jadwal\n";
				break;		
			case 5:
				cout << "Memilih Transkip\n";
				break;	
			case 6:
				cout << "Keluar...\n";
				break;	
			default:
				cout << "Pilihan tidak valid\n";	
		}
	}

	return 0;
}
