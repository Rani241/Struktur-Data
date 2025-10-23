#include <iostream>
using namespace std;
int main() {
    const int MAX = 10;      
    int stack[MAX];          
    int top = -1;            
    int data;                
    cout << "Program Stack (PUSH hingga penuh, lalu POP hingga kosong)\n";
    cout << "----------------------------------------------------------\n";
    while (true) {
        if (top == MAX - 1) {
            cout << "Stack Penuh!\n";
            break;
        }
        cout << "Masukkan data (999 untuk berhenti): ";
        cin >> data;
        if (data == 999) {
            cout << "Input dihentikan oleh pengguna.\n";
            break;
        }
        top++;
        stack[top] = data;
        cout << data << " berhasil di-PUSH ke stack.\n";
    }
    cout << "\nMengeluarkan isi stack (POP):\n";
    if (top == -1) {
        cout << "Stack Kosong!\n";
    } else {
        while (top >= 0) {
            cout << "Data " << stack[top] << " di-POP dari stack.\n";
            top--;
        }
        cout << "Stack sekarang kosong.\n";
    }
    return 0;
}

