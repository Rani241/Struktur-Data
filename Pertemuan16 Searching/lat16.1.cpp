#include <iostream>
#include <iomanip>
using namespace std;

int binarySearchWithTable(int A[], int n, int key) {
    int low = 0, high = n - 1, mid, iter = 1;

    cout << "\nMencari N = " << key << endl;
    cout << "---------------------------------------------\n";
    cout << left << setw(10) << "Iterasi"
         << setw(10) << "Low"
         << setw(10) << "High"
         << setw(10) << "Mid"
         << setw(10) << "A[mid]" << endl;
    cout << "---------------------------------------------\n";

    while (low <= high) {
        mid = (low + high) / 2;

        cout << left << setw(10) << iter
             << setw(10) << low
             << setw(10) << high
             << setw(10) << mid
             << setw(10) << A[mid] << endl;

        if (A[mid] == key) {
            cout << ">>> Ditemukan pada iterasi ke-" << iter 
                 << " di index " << mid << endl;
            return mid;
        }

        if (key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;

        iter++;
    }

    cout << ">>> Tidak ditemukan setelah " << iter-1 << " iterasi.\n";
    return -1;
}

int main() {
    int data[] = {5, 7, 12, 15, 17, 19, 22, 25, 27, 32};
    int n = 10;

    // Mencari 17
    binarySearchWithTable(data, n, 17);

    cout << endl;

    // Mencari 22
    binarySearchWithTable(data, n, 22);

    return 0;
}

