#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 5
typedef char string[255];
typedef struct{
    string judul;
    string isbn;
    string pengarang;
    int tahun_terbit;
}data_buku;

typedef struct{
    data_buku data[MAX];
}buku;

void init(buku *b);
void insertzifibuku (buku *b);
void displayzifibuku (buku b);

void init(buku *b){
    int i;
    for(i=0;i<MAX;i++){
        strcpy((*b).data[i].judul,"-");
        strcpy((*b).data[i].isbn,"-");
        strcpy((*b).data[i].pengarang,"-");
        (*b).data[i].tahun_terbit=0;
    }
}

void insertzifibuku(buku *b){
    int i;
        printf("Masukan Hingga 5 Data Buku\n");
    for(i=0;i<MAX;i++){
        fflush(stdin);
        printf("\n");
        printf("Judul Buku ke-%d : ",i+1);scanf("%s", &(*b).data[i].judul);
        printf("ISBN Buku ke-%d : ",i+1);scanf("%s", &(*b).data[i].isbn);
        printf("Pengarang Buku ke-%d : ",i+1);scanf("%s", &(*b).data[i].pengarang);
        printf("Tahun Terbit Buku ke-%d : ",i+1);scanf("%d", &(*b).data[i].tahun_terbit);
        printf("\n");
    }
}

void displayzifibuku(buku *b){
    int i;
    for(i=0;i<MAX;i++){
        printf("Judul Buku ke-%d : %s\n", i+1, (*b).data[i].judul);
        printf("ISBN Buku ke-%d : %s\n", i+1, (*b).data[i].isbn);
        printf("Pengarang Buku ke-%d : %s\n", i+1, (*b).data[i].pengarang);
        printf("Tahun Terbit Buku ke-%d : %d\n", i+1, (*b).data[i].tahun_terbit);
        printf("\n");
    }
}

int main(){
    buku b;
    string input;
    init(&b);
    do{
        system("cls");
        puts("Menu Program CRUD Buku by Zifi");
        puts("1. Insert Buku");
        puts("2. Display Buku");
        puts("Esc. Exit");
        puts("Pilih : ");
    switch(getch()){
        case '1' : insertzifibuku(&b);
        break;
        case '2' : displayzifibuku(&b);
        break;
    }
}
while(getch()!=27);
getch();
return 0;
}
