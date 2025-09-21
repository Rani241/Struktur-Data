#include <iostream>
using namespace std;
int main()
{
	float panjang, lebar;
	
	cout<<"masukkan panjang persegi panjang: " ;
	cin>>panjang;
	cout<<"masukkan lebar persegi panjang: ";
	cin>>lebar;
	
	float luas = panjang * lebar;
	float keliling = 2 * (panjang + lebar);
	
	cout<<"\nLuas Persegi panjang adalah: "<< luas <<endl;
	cout<<"Keliling persegi panjang adalah: "<<keliling<<endl;
	
	cout<<"\nTugas 11 sep 2025"<<endl;
	
	return 0; 
	
}
