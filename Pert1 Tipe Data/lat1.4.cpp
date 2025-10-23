#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x1, x2, y1, y2;
	
	cout<<"Masukkan koordinat x titik A: ";
	cin>> x1;
	
	cout<<"Masukkan koordinat y titik A: ";
	cin>> y1;
	
	cout<<"Masukkan koordinat x untuk titik B: ";
	cin>> x2;
	
	cout<<"Masukkan koordninat y untuk titik B: ";
	cin>> y2;

	
	double jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout<<"Jarak antara titik A dan Titik B adalah: "<<jarak<<endl;
	
	cout<<"\nTugas 11 sep 2025"<<endl;
	return 0;
	
}
