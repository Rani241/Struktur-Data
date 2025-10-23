#include <iostream>
using namespace std;

int main() {
    unsigned int base = 0x12EF; 

    int index1 = 1 * 15 + 1 * 5 + 4; 
    int index2 = 0 * 15 + 0 * 5 + 3; 
    
    int diff = index2 - index1;
    unsigned int alamat = base + diff * sizeof(int);

    cout << hex << "Alamat &x[0][0][3] = " << alamat << "H" << endl;
    return 0;
}

