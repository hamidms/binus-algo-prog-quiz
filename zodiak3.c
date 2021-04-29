#include <stdio.h>
#include <string.h>

char nama[30];
char bulan[10];
int tanggal=0;
char *bintang;

void caribintang();

int main () {
	char pilihan = 'y';
	
	do {
		printf("Masukkan Nama: "); scanf(" %[^\n]s", &nama);
		printf("Masukkan Tanggal Lahir: "); scanf(" %d %s", &tanggal, &bulan);
		
		caribintang(tanggal, bulan);
		
		printf("\nApakah  mau mengulang?\n");
	    printf("Jawab (y/t): ");
	    scanf(" %c", &pil);
		printf("\n");	
		
	} while (pilihan == 'y');
	
	return 0;	
}

void caribintang() {
	if ((strcmp(bulan, "Januari") == 0) || (strcmp(bulan, "januari") == 0))  {
		if (tanggal >= 1 && tanggal <= 20) {
			bintang = "Carpicron";	
		} else if (tanggal >= 20 && tanggal <= 31) {
			bintang = "Aquarius";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Februari") == 0) || (strcmp(bulan, "februari") == 0)) {
		if (tanggal > 0 && tanggal < 19) {
			bintang = "Aquarius";	
		} else if (tanggal > 18 && tanggal < 29) {
			bintang = "Pisces";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Maret") == 0) || (strcmp(bulan, "maret") == 0))  {
		if (tanggal > 0 && tanggal < 21) {
			bintang = "Pisces";	
		} else if (tanggal > 20 && tanggal < 32) {
			bintang = "Aries";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "April") == 0) || (strcmp(bulan, "april") == 0)) {
		if (tanggal > 0 && tanggal < 20) {
			bintang = "Aries";	
		} else if (tanggal > 20 && tanggal < 31) {
			bintang = "Taurus";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Mei") == 0) || (strcmp(bulan, "mei") == 0)) {
		if (tanggal > 0 && tanggal < 21) {
			bintang = "Taurus";	
		} else if (tanggal > 20 && tanggal < 31) {
			bintang = "Gemini";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Juni") == 0) || (strcmp(bulan, "juni") == 0))  {
		if (tanggal > 0 && tanggal < 21) {
			bintang = "Gemini";	
		} else if (tanggal > 20 && tanggal < 31) {
			bintang = "Cancer";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Juli") == 0) || (strcmp(bulan, "juli") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Cancer";	
		} else if (tanggal > 22 && tanggal < 32) {
			bintang = "Leo";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Agustus") == 0) || (strcmp(bulan, "agustus") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Leo";	
		} else if (tanggal > 22 && tanggal < 32) {
			bintang = "Virgo";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "September") == 0) || (strcmp(bulan, "september") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Virgo";	
		} else if (tanggal > 22 && tanggal < 31) {
			bintang = "Libra";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Oktober") == 0) || (strcmp(bulan, "oktober") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Libra";	
		} else if (tanggal > 22 && tanggal < 32) {
			bintang = "Scorpio";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "November") == 0) || (strcmp(bulan, "november") == 0))  {
		if (tanggal > 0 && tanggal < 22) {
			bintang = "Scorpio";	
		} else if (tanggal > 22 && tanggal < 31) {
			bintang = "Sagitarius";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Desember") == 0) || (strcmp(bulan, "desember") == 0))  {
		if (tanggal > 0 && tanggal < 22) {
			bintang = "Sagitarius";	
		} else if (tanggal > 21 && tanggal < 32) {
			bintang = "Carpicorn";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else {
		printf("Format Bulan Salah\n");
		bintang = "-";
	}
	
	printf("\nNama: %s\n", nama);
	printf("Bintang: %s\n", bintang);
	printf("Tanggal Lahir: %d %s\n", tanggal, bulan);
}

