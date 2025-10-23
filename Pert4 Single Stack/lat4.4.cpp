#include <iostream>
using namespace std;

int main() {
    const int MAX = 10;   
    int stack[MAX];       
    int top = MAX - 1;    
   
    for (int i = 0; i <= top; i++) {
        stack[i] = (i + 1) * 10; 
    }

    cout << "=== POP Data dari Stack ===\n";

    while (top >= 0) {
        cout << "Data " << stack[top] << " di-POP dari stack.\n";
        top--; 
    }

    cout << "Stack sekarang kosong.\n";

    return 0;
}

