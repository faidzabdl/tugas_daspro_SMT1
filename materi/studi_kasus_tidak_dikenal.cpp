#include<iostream>
using namespace std;

int main(){
	char kode;
	cin >> kode;
	
	switch(kode){
		case 'A':
			cout << "Fakultas Teknik";
			break;
		case 'B':
			cout << "Fakultas Ekonomi";
			break;
		case 'C':
			cout << "Fakultas Ilmu Komputer";
			break;
		case 'D':
			cout << "Fakultas Pendidikan";
			break;	
		default:
			cout << "Kode tidak dikenal";
			break;				
	}
}
