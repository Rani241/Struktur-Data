#include <iostream>
#include <string>
using namespace std;
struct Mahasiswa {
    int no_urut;
    string nama;
    int umur;
    string alamat;
    float nilai;
};
int main() {
    const int JUMLAH = 15;
    Mahasiswa mhs[JUMLAH];
    for (int i = 0; i < JUMLAH; i++) {
        mhs[i].no_urut = i + 1; 
        cout << "\nData Mahasiswa ke-" << mhs[i].no_urut << endl; 
		cin.ignore(); 
        cout << "Nama   : ";
        getline(cin, mhs[i].nama);
        cout << "Umur   : "; cin >> mhs[i].umur; cin.ignore();
        cout << "Alamat : ";
        getline(cin, mhs[i].alamat);
        cout << "Nilai  : "; cin >> mhs[i].nilai; cin.ignore();
    }
    cout << "\n=== Data 15 Mahasiswa ===\n";
    cout << "No\tNama\t\tUmur\tAlamat\t\tNilai\n";
    for (int i = 0; i < JUMLAH; i++) {
        cout << mhs[i].no_urut << "\t"
             << mhs[i].nama << "\t\t"
             << mhs[i].umur << "\t"
             << mhs[i].alamat << "\t\t"
             << mhs[i].nilai << endl;
    }
    return 0;
}

