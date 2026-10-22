#include<iostream>
using namespace std;

int main(){
	int menu;
	cin >> menu;
	switch(menu) {
		 case 1:
		 cout << "Tambah";
		 break;
		 case 2:
		 cout << "Hapus";
		 break;
		 case 3:
		 cout << "Tampil";
		 break;
		 default:
		 	cout << "Masukkan menu yang valid";
		 	break;
	}
}

//kode sebelumnya
//
//	int menu;
//	cin >> menu;
//	switch(menu) {
//		 case 1;
//		 cout << "Tambah";
//		 break
//		 case 2:
//		 cout << "Hapus";
//		 break;
//		 case 3:
//		 cout << "Tampil";
//		 break;
//	}

