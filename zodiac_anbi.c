#include <stdio.h>

char nama[30], bulan[10];
int tanggal;
char *bintang;

void cariZodiak();

int main() { 
 printf("Masukkan Nama: "); scanf(" %[^\n]s", &nama);
 printf("Masukkan Tanggal: "); scanf(" %d %s", &tanggal, &bulan);
 
 cariZodiak();
 
 return 0;
}
void cariZodiak() {
 printf("\nNama: %s\n", nama);
 printf("Bintang: %s\n", bintang);
 printf("Tanggal Lahir: %d %s\n", tanggal, bulan);
}
