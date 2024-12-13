#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// menu utama
void tampilkanMenu();
void menuKelas();
void menuAktivitas();
void menuAntrianBelajar();
void menuTugas();
// Menu kelas (no. 1 dan no. 2)
int isNamaKelasUnik(char* nama);
void tambahKelas();
void hapusKelas();
void editKelas();
void tampilkanKelas();
// menu Aktifitas (no. 4)
void pushAktivitas();
void popAktivitas();
void tampilkanAktivitas();
// antrian belajar (queque) (no. 5)
void enqueue();
void dequeue();
void tampilkanAntrianBelajar();
// menu tugas (no. 6)
void tambahTugas();
void prosesTugas();
void tampilkanTugas();


// Struktur untuk Kelas (Double Linked List)
typedef struct Kelas {
    char nama[50];
    char deskripsi[100];
    struct Kelas* prev;
    struct Kelas* next;
} Kelas;

// Struktur untuk Stack Aktivitas
typedef struct NodeAktivitas {
    char aktivitas[100];
    struct NodeAktivitas* next;
} NodeAktivitas;

// Struktur untuk Queue Belajar
typedef struct NodeQueue {
    char modulBelajar[50];
    struct NodeQueue* next;
} NodeQueue;

// Struktur untuk Tugas (Single Linked List)
typedef struct NodeTugas {
    char namaTugas[50];
    char statusTugas[20];
    struct NodeTugas* next;
} NodeTugas;

// Variabel Global
Kelas* kepalaDaftarKelas = NULL;
NodeAktivitas* tumpukanAktivitas = NULL;
NodeQueue* depanAntrian = NULL;
NodeQueue* belakangAntrian = NULL;
NodeTugas* kepalaDaftarTugas = NULL;


int main() {
    int pilihan;
    
    do {
        tampilkanMenu();
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1: menuKelas(); break;
            case 2: menuAktivitas(); break;
            case 3: menuAntrianBelajar(); break;
            case 4: menuTugas(); break;
        }
    } while (pilihan != 0);
    
    return 0;
}

// Menu Utama
void tampilkanMenu() {
    printf("\n===== SISTEM MANAJEMEN KELAS =====\n");
    printf("1. Manajemen Kelas\n");
    printf("2. Aktivitas\n");
    printf("3. Antrian Belajar\n");
    printf("4. Manajemen Tugas\n");
    printf("0. Keluar\n");
    printf("Pilih menu: ");
}

void menuKelas() {
    int pilihan;
    do {
        printf("\n--- MENU KELAS ---\n");
        printf("1. Tambah Kelas\n");
        printf("2. Hapus Kelas\n");
        printf("3. Edit Kelas\n");
        printf("4. Tampilkan Kelas\n");
        printf("0. Kembali\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1: tambahKelas(); break;
            case 2: hapusKelas(); break;
            case 3: editKelas(); break;
            case 4: tampilkanKelas(); break;
        }
    } while (pilihan != 0);
}

void menuAktivitas() {
    int pilihan;
    do {
        printf("\n--- MENU AKTIVITAS ---\n");
        printf("1. Tambah Aktivitas\n");
        printf("2. Hapus Aktivitas Terakhir\n");
        printf("3. Tampilkan Aktivitas\n");
        printf("0. Kembali\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1: pushAktivitas(); break;
            case 2: popAktivitas(); break;
            case 3: tampilkanAktivitas(); break;
        }
    } while (pilihan != 0);
}

void menuAntrianBelajar() {
    int pilihan;
    do {
        printf("\n--- MENU ANTRIAN BELAJAR ---\n");
        printf("1. Tambah Modul\n");
        printf("2. Proses Modul\n");
        printf("3. Tampilkan Antrian\n");
        printf("0. Kembali\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: tampilkanAntrianBelajar(); break;
        }
    } while (pilihan != 0);
}

void menuTugas() {
    int pilihan;
    do {
        printf("\n--- MENU TUGAS ---\n");
        printf("1. Tambah Tugas\n");
        printf("2. Proses Tugas\n");
        printf("3. Tampilkan Tugas\n");
        printf("0. Kembali\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1: tambahTugas(); break;
            case 2: prosesTugas(); break;
            case 3: tampilkanTugas(); break;
        }
    } while (pilihan != 0);
}


// Menu kelas (no. 1 dan no. 2)
int isNamaKelasUnik(char* nama){}
void tambahKelas(){}
void hapusKelas(){}
void editKelas(){}
void tampilkanKelas(){}

// menu Aktifitas (no. 4)

void pushAktivitas(){}
void popAktivitas(){}
void tampilkanAktivitas(){}

// antrian belajar (queque) (no. 5)

void enqueue(){}
void dequeue(){}
void tampilkanAntrianBelajar(){}

// menu tugas (no. 6)

void tambahTugas(){}
void prosesTugas(){}
void tampilkanTugas(){}