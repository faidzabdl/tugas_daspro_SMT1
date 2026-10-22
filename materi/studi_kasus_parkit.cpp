#include<iostream>
using namespace std;


int main(){
	int jenis, lama, tarif = 0;
	cin >> jenis >> lama;
	switch (jenis) {
		 case 1:
		 tarif = 2000 * lama;
		 cout << "Motor";
		 break;
		 case 2:
		 tarif = 5000 * lama;
		 cout << "Mobil";
		 break;
		 case 3:
		 tarif = 10000 * lama;
		 cout << "Bus";
		 break;
		 default:
		 cout << "Jenis tidak valid";
	}
	cout << "\nTarif: Rp" << tarif;
	
}

