#include <stdio.h>

int main() {
	char nama[20];
	char tanggal_lahir[20];
	float biaya;
	
	printf("Aplikasi Data Mahasiswa \n\n");
	
	printf("Nama = "); 
	scanf(" %[^\n]s", nama);
	printf("Tanggal Lahir = "); 
	scanf(" %[^\n]s", tanggal_lahir);
	printf("Biaya = "); 
	scanf("%f", &biaya);
		 
	printf("\nNama: %s \n", nama);
	printf("Tanggal Lahir: %s \n", tanggal_lahir);
	printf("Biaya: %.2f \n", biaya);
	
}
