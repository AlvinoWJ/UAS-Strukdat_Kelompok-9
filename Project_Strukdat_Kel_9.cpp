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

















typedef struct node{
    char materi[50];
    struct node *next;
} node;

typedef struct queue {
    node *front;
    node *rear;
} queue;

void define(queue *q){
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(const char *materi, queue *q){
    node *pNew = (node *)malloc(sizeof(node));

    strcpy(pNew->materi, materi);
    pNew->next = NULL;

    if (q->rear != NULL)
        q->rear->next = pNew;
    else 
        q->front = pNew;

    q->rear = pNew;
}

void dequeue(queue *q){
    if (q->front == NULL){
        printf("tidak ada materi lagi.\n");
        return;
    }

    node *temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;

    printf("materi telah selesai.\n", temp->materi);
    free(temp);
}
