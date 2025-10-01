#include <iostream>
#include <string>
using namespace std;

struct Buku {
	int no_akses;
	string penullis, judul;
	int jumlah;
};

int main(){
	Buku perpustakaan[100];
	int n = 0, pil;
	
	do{
		cout << "\n1. Info buku\n2. Tambah buku\n3. Cari penulis\n4. Hitung judul\n5. Total buku\n6. Terbitkan\n7. Keluar\nPilihan: ";
		cin>> pil; cin.ignore();
		
		if (pil == 1){
			int id; cout<<"No akses: "; cin>>id;
			for (int i=0;i<n;i++)
    			if (perpustakaan[i].no_akses==id)
                	cout<<perpustakaan[i].no_akses<<" "<<perpustakaan[i].penulis<<" "<<perpustakaan[i].judul<<" stok:"<<perpustakaan[i].jumlah<<endl;	
		}
		else if (pil == 2){
			cout << "No akses: "; cin >> perpustakaan[n].no_akses; cin.ignore();
        	cout << "Penulis : "; getline(cin, perpustakaan[n].penulis);
        	cout << "Judul   : "; getline(cin, perpustakaan[n].judul);
            cout << "Jumlah  : "; cin >> perpustakaan[n].jumlah;
            n++;
		}
		else if (pil == 3) {
            string p; cout << "Nama penulis: "; getline(cin, p);
            for (int i=0;i<n;i++) if (perpustakaan[i].penulis==p)
                cout<<perpustakaan[i].judul<<" stok:"<<perpustakaan[i].jumlah<<endl;
        }
		else if (pil == 4) {
            string j; cout << "Judul: "; getline(cin, j);
            int total=0; 
            for (int i=0;i<n;i++) if (perpustakaan[i].judul==j) total+=perpustakaan[i].jumlah;
            cout<<"Jumlah: "<<total<<endl;
        }
        else if (pil == 5) {
            int total=0;
            for (int i=0;i<n;i++) total+=perpustakaan[i].jumlah;
            cout<<"Total buku: "<<total<<endl;
        }
        else if (pil == 6) {
            int id; cout << "No akses: "; cin >> id;
            for (int i=0;i<n;i++) if (perpustakaan[i].no_akses==id && perpustakaan[i].jumlah>0) perpustakaan[i].jumlah--;
        }	
	}while (pil !=7);
}
