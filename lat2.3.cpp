#include <iostream>
using namespace std;

int main(){
	unsigned int base = 0x1000;
	int index = 2 * 8 + 4;
	unsigned int alamat = base + index * sizeof(float);
	cout << hex << "Alamat &x[2][4] = " << alamat << "H" << endl;
	return 0;
}
