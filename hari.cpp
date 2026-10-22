#include<iostream>
using namespace std;

int main(){
	int hari;
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
		}	
}



