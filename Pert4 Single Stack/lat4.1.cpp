#include <iostream>
using namespace std;
int main() {
    const int MAX = 10;      
    int stack[MAX];          
    int top = -1;            
    int data;                
    cout << "Program Stack (PUSH & POP)\n";
    cout << "---------------------------------\n";
    while (true) {
        cout << "Masukkan data (999 untuk berhenti): ";
        cin >> data;
        if (data == 999) {
            cout << "Proses selesai.\n";
            break;
        }
        if (data >= 60) {
            if (top < MAX - 1) {
                top++;
                stack[top] = data;
                cout << data << " disimpan ke stack.\n";
            } else {
                cout << "Stack Penuh!\n";
                break; 
            }
        }
        else {
            if (top >= 0) {
                cout << "Data " << stack[top] << " diambil dari stack.\n";
                top--;
            } else {
                cout << "Stack Kosong!\n";
                break; 
            }
        }
    }
    cout << "\nIsi stack terakhir:\n";
    if (top == -1)
        cout << "(Kosong)\n";
    else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

