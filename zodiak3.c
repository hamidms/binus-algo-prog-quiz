#include <stdio.h>
#include <string.h>
#include <ctype.h>

char nama[30];

void cariZodiak();

int main () {
	char bulan[10];
	int tanggal=0;
	
	printf("Masukkan Nama: "); scanf("%[^\n]s", &nama);
	printf("Masukkan Tanggal Lahir: "); scanf("%d %s", &tanggal, &bulan);
	cariZodiak(tanggal, bulan);
	
	return 0;	
}

void cariZodiak(int tanggal, char *bulan) {
	char *zodiak;
	
	if ((strcmp(bulan, "Januari") == 0) || (strcmp(bulan, "januari") == 0))  {
		if (tanggal > 0 && tanggal < 21) {
			zodiak = "Carpicron";	
		} else if (tanggal > 19 && tanggal < 32) {
			zodiak = "Aquarius";
		}		
	} else if ((strcmp(bulan, "Februari") == 0) || (strcmp(bulan, "februari") == 0)) {
		if (tanggal > 0 && tanggal < 19) {
			zodiak = "Aquarius";	
		} else if (tanggal > 18 && tanggal < 29) {
			zodiak = "Pisces";
		}
	} else if ((strcmp(bulan, "Maret") == 0) || (strcmp(bulan, "maret") == 0))  {
		if (tanggal > 0 && tanggal < 21) {
			zodiak = "Pisces";	
		} else if (tanggal > 20 && tanggal < 32) {
			zodiak = "Aries";
		}
	} else if ((strcmp(bulan, "April") == 0) || (strcmp(bulan, "april") == 0)) {
		if (tanggal > 0 && tanggal < 20) {
			zodiak = "Aries";	
		} else if (tanggal > 20 && tanggal < 31) {
			zodiak = "Taurus";
		}
	} else if ((strcmp(bulan, "Mei") == 0) || (strcmp(bulan, "mei") == 0)) {
		if (tanggal > 0 && tanggal < 21) {
			zodiak = "Taurus";	
		} else if (tanggal > 20 && tanggal < 31) {
			zodiak = "Gemini";
		}
	} else if ((strcmp(bulan, "Juni") == 0) || (strcmp(bulan, "juni") == 0))  {
		if (tanggal > 0 && tanggal < 21) {
			zodiak = "Gemini";	
		} else if (tanggal > 20 && tanggal < 31) {
			zodiak = "Cancer";
		}
	} else {
		zodiak = "okw";
	}
	
	printf("\nNama: %s\n", nama);
	printf("Bintang: %s\n", zodiak);
	printf("Tanggal Lahir: %d %s\n", tanggal, bulan);
}

