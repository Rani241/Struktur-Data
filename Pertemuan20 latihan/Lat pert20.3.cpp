#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1, langkah = 0;

    while(left <= right) {
        langkah++;
        int mid = (left + right) / 2;
        cout << "Langkah " << langkah
             << ": cek index " << mid
             << " (nilai " << arr[mid] << ")\n";

        if(arr[mid] == target) {
            cout << "Jumlah langkah: " << langkah << endl;
            return mid;
        }
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int data[15] = {12, 5, 8, 20, 30, 25, 15, 40, 10, 7, 18, 35, 2, 28, 22};
    sort(data, data + 15);

    cout << "Data: ";
    for(int i = 0; i < 15; i++)
        cout << data[i] << " ";

    int target = data[7];
    cout << "\nCari angka: " << target << endl;

    int index = binarySearch(data, 15, target);
    cout << "Angka ditemukan di index: " << index << endl;

    return 0;
}

