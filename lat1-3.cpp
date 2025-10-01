#include <iostream>
using namespace std;
int main()
{
	int skor;
	
	cout<<"masukkan skor siswa (0-100): ";
	cin>> skor;
	
	if (skor== 100){
		cout<<"\nSkor Sempurna!"<<endl;
		
	}
	else if (skor >=90 && skor <100){
		cout<<"\nA"<<endl;
	}
	else if (skor >=80 && skor <90){
		cout<<"\nB"<<endl;
	}
	else if (skor >=70 && skor <80){
		cout<<"\nC"<<endl;
	}
	else if (skor>=60 && skor <70){
		cout<<"\nD"<<endl;
	}
	else{
		cout<<"\nF"<<endl;
	}
	
	cout<<"\nTugas 11 sep 2025"<<endl;
	
	return 0;
}
