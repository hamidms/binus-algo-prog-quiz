#include <stdio.h>
#include <string.h>

int main(){

    char huruf[100], hasil[100], a[50], b[50];
    int i, jumlahstring, jumlah = 0, jumlah1, jumlah2, totalJumlah, totalPerkalian;
 
    printf("Kalimat 1 = ");
    scanf("%s", a);
    
    printf("Kalimat 2 = ");
    scanf("%s", b);
    
    strcpy(huruf, a);
    strcat(huruf, " ");
    strcat(huruf, b);

    while (huruf[jumlah] != '\0'){
        jumlah++;
    }

    jumlahstring = jumlah - 1;

    for (i = 0; i < jumlah; i++){
        hasil[i] = huruf[jumlahstring];
        jumlahstring--;
    }

    hasil[i] = '\0';
    
    jumlah1 = strlen(a)-1;
    jumlah2 = strlen(b)-1;
    totalJumlah = jumlah1 + jumlah2;
    totalPerkalian = jumlah1 * jumlah2;
    
    printf("Gabungan 2 buah inputan kalimat = %s\n", a);
    printf("Hasil membalik kalimat gabungan: %s\n", hasil);
    printf("Jumlah Huruf kalimat pertama = %d\n", jumlah1);
    printf("Jumlah Huruf kalimat kedua = %d\n", jumlah2);
    printf("Total Jumlah huruf = %d\n", totalJumlah);
    printf("Total Perkalian kalimat = %d\n", totalPerkalian);
    
  return 0;
}
