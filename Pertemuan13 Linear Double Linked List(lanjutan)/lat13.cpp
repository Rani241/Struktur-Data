#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    string gender;
    float nilai;
};

struct Node {
    Mahasiswa data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;

// =============================
// INSERT DATA (TERURUT NIM)
// =============================
void insertData(Mahasiswa mhs) {
    Node* newNode = new Node;
    newNode->data = mhs;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    // Jika list kosong
    if (head == nullptr) {
        head = newNode;
        cout << "Data berhasil ditambahkan.\n";
        return;
    }

    // Jika NIM lebih kecil dari head ? sisip di depan
    if (mhs.nim < head->data.nim) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        cout << "Data berhasil ditambahkan.\n";
        return;
    }

    // Cari posisi yang tepat
    Node* current = head;
    while (current->next != nullptr && current->next->data.nim < mhs.nim) {
        current = current->next;
    }

    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != nullptr) {
        current->next->prev = newNode;
    }

    current->next = newNode;

    cout << "Data berhasil ditambahkan.\n";
}

// =============================
// HAPUS DATA BERDASARKAN NIM
// =============================
void hapusData(int nim) {
    if (head == nullptr) {
        cout << "List kosong!\n";
        return;
    }

    Node* current = head;

    // Jika yang dihapus adalah head
    if (current->data.nim == nim) {
        head = current->next;
        if (head != nullptr)
            head->prev = nullptr;

        delete current;
        cout << "Data berhasil dihapus.\n";
        return;
    }

    // Cari data
    while (current != nullptr && current->data.nim != nim) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Data dengan NIM tersebut tidak ditemukan!\n";
        return;
    }

    // Hapus node
    if (current->next != nullptr)
        current->next->prev = current->prev;
    
    if (current->prev != nullptr)
        current->prev->next = current->next;

    delete current;
    cout << "Data berhasil dihapus.\n";
}

// =============================
// CETAK DATA
// =============================
void cetakData() {
    if (head == nullptr) {
        cout << "List kosong!\n";
        return;
    }

    Node* current = head;
    cout << "\nDATA MAHASISWA (TERURUT NIM)\n";
    cout << "--------------------------------------\n";

    while (current != nullptr) {
        cout << "Nama   : " << current->data.nama << endl;
        cout << "NIM    : " << current->data.nim << endl;
        cout << "Gender : " << current->data.gender << endl;
        cout << "Nilai  : " << current->data.nilai << endl;
        cout << "--------------------------------------\n";
        current = current->next;
    }
}

// =============================
// MAIN PROGRAM – MENU
// =============================
int main() {
    int pilihan;

    do {
        cout << "\nLIN. DOUBLY LINKED LIST\n";
        cout << "==========================\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilihan (1 - 4) : ";
        cin >> pilihan;

        if (pilihan == 1) {
            Mahasiswa mhs;
            cout << "\n=== INPUT DATA MAHASISWA ===\n";
            cin.ignore();  // menghindari bug input getline

            cout << "Nama   : ";
            getline(cin, mhs.nama);

            cout << "NIM    : ";
            cin >> mhs.nim;

            cin.ignore();
            cout << "Gender : ";
            getline(cin, mhs.gender);

            cout << "Nilai  : ";
            cin >> mhs.nilai;

            insertData(mhs);
        }
        else if (pilihan == 2) {
            int nim;
            cout << "Masukkan NIM yang akan dihapus : ";
            cin >> nim;
            hapusData(nim);
        }
        else if (pilihan == 3) {
            cetakData();
        }
        else if (pilihan == 4) {
            cout << "Program selesai.\n";
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 4);

    return 0;
}

