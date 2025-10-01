#include <iostream>
using namespace std;

int main() {
    unsigned int base = 0x1000; 
    unsigned int alamat = base + (9 - 3) * sizeof(int);
    cout << hex << "Alamat &x[9] = " << alamat << "H" << endl;
    return 0;
}

