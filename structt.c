#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct data_karyawan{
    char nama[50];
    char alamat[50];
    char email [50];
    int usia;
    int telp;
} data;

main(){
    struct data_karyawan data;
    printf("Nama ="); scanf("%s", &data.nama); fflush(stdin);
    printf("Usia ="); scanf("%i", &data.usia); fflush(stdin);
    printf("telp ="); scanf("%i", &data.email); fflush(stdin);
    printf("email ="); scanf("%s", &data.telp); fflush(stdin);
    printf("alamat="); scanf("%s", &data.alamat);fflush(stdin);

    printf("Nama = %s",data.nama);
    printf("Usia = %i",data.usia);
    printf("telp = %i",data.telp);
    printf("email = %s",data.email);
    printf("alamat= %s",data.alamat);
    
}
