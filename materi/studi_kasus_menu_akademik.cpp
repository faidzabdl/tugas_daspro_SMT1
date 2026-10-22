#include<iostream>
using namespace std;

int main(){
	int menu;
	cin >> menu;
	switch (menu) {
		 case 1: cout << "Biodata"; break;
		 case 2: cout << "KRS"; break;
		 case 3: cout << "Nilai"; break;
		 case 4: cout << "Jadwal"; break;
		 case 5: cout << "Transkrip"; break;
		 default: cout << "Menu tidak tersedia";
	}	
}

