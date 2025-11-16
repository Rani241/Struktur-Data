#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Mahasiswa {
    char NIM[20];
    char nama[50];
    float nilai;
    struct Mahasiswa *next;
} Mahasiswa;

Mahasiswa *head = NULL;

Mahasiswa* buatNode(char NIM[], char nama[], float nilai) {
    Mahasiswa *baru = (Mahasiswa*) malloc(sizeof(Mahasiswa));
    strcpy(baru->NIM, NIM);
    strcpy(baru->nama, nama);
    baru->nilai = nilai;
    baru->next = NULL;
    return baru;
}

void tambahData(char NIM[], char nama[], float nilai) {
    Mahasiswa *baru = buatNode(NIM, nama, nilai);

    if (head == NULL || head->nilai > nilai) {
        baru->next = head;
        head = baru;
    } else {
        Mahasiswa *temp = head;
        while (temp->next != NULL && temp->next->nilai <= nilai)
            temp = temp->next;
        baru->next = temp->next;
        temp->next = baru;
    }
}

void tampilNilai90() {
    Mahasiswa *temp = head;
    int ketemu = 0;
    printf("\nData dengan nilai = 90:\n");
    while (temp != NULL) {
        if (temp->nilai == 90) {
            printf("NIM: %s | Nama: %s | Nilai: %.2f\n", temp->NIM, temp->nama, temp->nilai);
            ketemu = 1;
        }
        temp = temp->next;
    }
    if (!ketemu) printf("Tidak ada data dengan nilai 90.\n");
}

void tampilSemua() {
    Mahasiswa *temp = head;
    printf("\n=== Daftar Mahasiswa ===\n");
    while (temp != NULL) {
        printf("NIM: %s | Nama: %s | Nilai: %.2f\n", temp->NIM, temp->nama, temp->nilai);
        temp = temp->next;
    }
}

void hapusData(char NIM[]) {
    Mahasiswa *temp = head, *prev = NULL;
    while (temp != NULL && strcmp(temp->NIM, NIM) != 0) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Data dengan NIM %s tidak ditemukan.\n", NIM);
        return;
    }
    if (prev == NULL) head = temp->next;
    else prev->next = temp->next;
    free(temp);
    printf("Data dengan NIM %s berhasil dihapus.\n", NIM);
}

void hitungRata() {
    Mahasiswa *temp = head;
    int jumlah = 0;
    float total = 0;
    while (temp != NULL) {
        total += temp->nilai;
        jumlah++;
        temp = temp->next;
    }
    if (jumlah == 0)
        printf("Tidak ada data mahasiswa.\n");
    else
        printf("\nNilai rata-rata kelas: %.2f\n", total / jumlah);
}

int main() {

    tambahData("2007140001", "Anin", 88);
    tambahData("2007140002", "Bito", 90);
    tambahData("2007140003", "Citra", 75);
    tambahData("2007140022", "Damar", 95);
    tambahData("2007140004", "Endra", 90);

    tampilSemua();

    tampilNilai90();

    hapusData("2007140022");

    tampilSemua();

    hitungRata();

    return 0;
}

