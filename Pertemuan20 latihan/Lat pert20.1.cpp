#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h> 
using namespace std;

int main() {
    int data[10];
    srand(time(0));

    cout << "Data awal: ";
    for(int i = 0; i < 10; i++) {
        data[i] = rand() % 100;
        cout << data[i] << " ";
    }

    for(int i = 0; i < 9; i++) {
        cout << "\n\nPass " << i + 1 << endl;
        for(int j = 0; j < 9 - i; j++) {
            cout << "Bandingkan " << data[j] << " dan " << data[j+1];
            if(data[j] > data[j+1]) {
                swap(data[j], data[j+1]);
                cout << " -> Tukar";
            } else {
                cout << " -> Tidak ditukar";
            }
            cout << endl;
            usleep(300000);
        }
    }

    cout << "\nHasil akhir: ";
    for(int i = 0; i < 10; i++)
        cout << data[i] << " ";

    return 0;
}

