#include<iostream>
using namespace std;

int main(){
	int hari;
	int bulan;
	
	
	cin >> hari;
		switch (hari) {
		 case 1:
		 	cout << "Senin";
		 	break;
		 case 2:
		 	cout << "Selasa";
		 	break;
		 case 3:
		 	cout << "Rabu";
		 	break;
		 case 4:
		 	cout << "Kamis";
		 	break;
		case 5:
		 	cout << "Jum'at";
		 	break;
		case 6:
		 	cout << "Sabtu";
		 	break;
		case 7:
		 	cout << "Minggu";
		 	break;	 	 	 	
		 default:
		 cout << "nomor tidak valid";
		 break;
		}	


	cout << "\n";
	cin >> bulan;
		switch (bulan) {
		 case 1:
		 	cout << "Januari";
		 	break;
		 case 2:
		 	cout << "Februari";
		 	break;
		 case 3:
		 	cout << "Maret";
		 	break;
		 case 4:
		 	cout << "April";
		 	break;
		case 5:
		 	cout << "Mei";
		 	break;
		case 6:
		 	cout << "Juni";
		 	break;
		case 7:
		 	cout << "Juli";
		 	break;
		case 8:
		 	cout << "Agustus";
		 	break;
		case 9:
		 	cout << "September";
		 	break;
		case 10:
		 	cout << "Oktber";
		 	break;
		case 11:
		 	cout << "November";
		 	break;
		case 12:
		 	cout << "Desember";
		 	break;	 	 	 	 	
		default:
		 	cout << "nomor tidak valid";
		}	



	
}



