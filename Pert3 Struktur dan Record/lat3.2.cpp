#include <iostream>
#include <string>
using namespace std;
struct Mahasiswa {
    int no_urut;
    string nama;
    int umur;
};
int main() {
    const int JUMLAH = 5;
    Mahasiswa mhs[JUMLAH];

    for (int i = 0; i < JUMLAH; i++) {
        mhs[i].no_urut = i + 1;
        cout << "Masukkan nama mahasiswa ke-" << mhs[i].no_urut << ": ";
        getline(cin, mhs[i].nama);
        cout << "Masukkan umur mahasiswa ke-" << mhs[i].no_urut << ": ";
        cin >> mhs[i].umur;
        cin.ignore(); 
        cout << endl;
    }

    int cari = 2; 
    cout << "\n=== Detail Mahasiswa No Urut " << cari << " ===\n";
    for (int i = 0; i < JUMLAH; i++) {
        if (mhs[i].no_urut == cari) {
            cout << "No Urut : " << mhs[i].no_urut << endl;
            cout << "Nama    : " << mhs[i].nama << endl;
            cout << "Umur    : " << mhs[i].umur << endl;
    	}
    }
    return 0;
}

