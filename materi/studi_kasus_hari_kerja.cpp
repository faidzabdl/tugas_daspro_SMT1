#include<iostream>
using namespace std;

int main(){
	int hari;
	cin >> hari;
	switch (hari) {
		 case 1:
		 case 2:
		 case 3:
		 case 4:
		 case 5:
		 cout << "Hari Kerja";
		 break;
		 case 6:
		 case 7:
		 cout << "Akhir Pekan";
		 break;
		 default:
		 cout << "Tidak valid";
	}	
}

