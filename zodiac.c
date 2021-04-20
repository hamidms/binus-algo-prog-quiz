#include <stdio.h>

void cariZodiak();

int main () {
	char nama[30], bulan[10];
	int tanggal=0;
	
	do {
		printf("Masukkan Nama: "); scanf("%[^\n]s", &nama);
		printf("Masukkan Tanggal Lahir: "); scanf("%d %s", &tanggal, &bulan);
		
		cariZodiak(tanggal, bulan);
	} while (tanggal > 31);
	
	return 0;	
}

void cariZodiak(int tanggal, char *bulan) {
	char *zodiak;
	
	if ((bulan == "Januari") && (bulan == "januari")) {
		if (tanggal <= 19) {
			zodiak = "Carpicorn";	
		} else {
			zodiak = "Aquarius";
		}
	} else if ((bulan == "Februari") || (bulan == "februari")) {
		if (tanggal < 19) {
			zodiak = "Aquarius";	
		} else {
			zodiak = "Pisces";
		}
	} else if ((bulan == "Maret") || (bulan == "maret")) {
		if (tanggal < 20) {
			zodiak = "Pisces";	
		} else {
			zodiak = "Aries";
		}
	} else if ((bulan == "April") || (bulan == "april")) {
		if (tanggal < 20) {
			zodiak = "Aries";	
		} else {
			zodiak = "Taurus";
		}
	} else if ((bulan == "Mei") || (bulan == "mei")) {
		if (tanggal < 21) {
			zodiak = "Taurus";	
		} else {
			zodiak = "Gemini";
		}
	} else if ((bulan == "Juni") || (bulan == "juni")) {
		if (tanggal < 21) {
			zodiak = "Gemini";	
		} else {
			zodiak = "Cancer";
		}
	} else if ((bulan == "Juli") || (bulan == "juli")) {
		if (tanggal < 23) {
			zodiak = "Cancer";	
		} else {
			zodiak = "Leo";
		}
	} else if ((bulan == "Agustus") || (bulan == "agustus")) {
		if (tanggal < 23) {
			zodiak = "Leo";	
		} else {
			zodiak = "Virgo";
		}
	} else {
		zodiak = "okw";
	}
	
	printf("\nzodiaknya adlaah %s", zodiak);
}

