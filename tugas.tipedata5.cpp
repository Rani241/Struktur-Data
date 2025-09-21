#include <iostream>
using namespace std;
int main()
{
	int a, b, temp;
	
	cout<<"masukkan nilai a: ";
	cin>> a;
	
	cout<<"masukkan nilai b: ";
	cin>> b;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<"\nNilai setelah ditukar: "<<endl;
	cout<<"a= "<<a<<"\nb= "<<b<<endl;
	
	cout<<"\nTugas 11 sep 2025"<<endl;
	
	return 0;
}
