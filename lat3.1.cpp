#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
	int no_urut;
	string nama;
	int usia;
	float nilai;
};

int main(){
	int n;
	cout << "Masukkan jumlah mahasiswa: "; cin>> n;
	
	Mahasiswa mhs[n];
	
	for(int i = 0; i < n; i++){
		cout << "\nData mahasiswa ke-" << i+1 << endl;
		mhs[i].no_urut = i + 1;
		cout<< "Nama : ";
		cin.ignore();
		getline(cin, mhs[i].nama);
		cout << "Usia : "; cin>> mhs[i].usia;
		cout<<"Nilai : "; cin>> mhs[i].nilai;
	}
	cout<<"\n=== Data Mahasiswa ===\n";
	cout<<"No\tNama\t\tUsia\tNilai\n";
	for (int i = 0; i<n; i++){
		cout<<i+1<<"\t";
		cout<< mhs[i].no_urut<<"\t"
			<< mhs[i].nama<<"\t\t"
			<< mhs[i].usia<<"\t"
			<< mhs[i].nilai<<endl;
	}
	return 0;
}
