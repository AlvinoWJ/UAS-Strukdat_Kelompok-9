#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk Node Double Linked List (Pemilihan Kelas)
typedef struct Kelas
{
    char nama[50];
    struct Kelas *prev;
    struct Kelas *next;
} Kelas;
