#include <iostream>
using namespace std;
int main() {
    const int MAX = 10;   
    int stack[MAX];       
    int top = -1;         
    int data;             
    cout << "=== PUSH Data ke Stack ===\n";
    while (true) {
        if (top == MAX - 1) {  
            cout << "Stack Penuh! Tidak bisa menambah data lagi.\n";
            break;
        }
        cout << "Masukkan data ke stack: ";
        cin >> data;
        top++;
        stack[top] = data;
        cout << "Data " << data << " berhasil di-PUSH ke stack.\n";
    }

    return 0;
}

