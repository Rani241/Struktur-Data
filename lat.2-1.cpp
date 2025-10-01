#include <iostream>
using namespace std;

int main(){
	unsigned int base = 0x1000;
	unsigned int alamat = base + 8 * sizeof(char);
	cout<<hex<<"Alamat &x[8] = "<<alamat<<"H"<<endl;
	return 0;
}
