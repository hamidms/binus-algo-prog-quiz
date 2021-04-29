#include <stdio.h>

struct Alamat {
	char NamaJalan[30], NomorRumah[5], Kota[30], Provinsi[30];
};

struct TanggalLahir {
	char Tanggal[2], Bulan[10], Tahun[4];
};

struct Dosen {
	char NoDosen[20], NIDN[20], Nama[30], Tempat[20];
	struct Alamat almt;
	struct TanggalLahir tl;
} dosen[5];

void inputData();
void outputData();
void inputAlamat();
void inputTanggalLahir();

int main() {
	int i;
	

	
	printf("Input Data Dosen\n");
	printf("--------------------\n");
	for(i=0; i<5; i++) {
		inputData(i);	
	}
	
	printf("\nOutput Data Dosen\n");
	printf("--------------------\n");
	for(i=0; i<5; i++) {
		outputData(i);	
	}
	
	return 0;
}

void inputData(int i) {
	printf("No Dosen: "); scanf(" %s", dosen[i].NoDosen);
	printf("NIDN: "); scanf(" %s", dosen[i].NIDN);
	printf("Nama: "); scanf(" %[^\n]s", dosen[i].Nama);
	inputAlamat(i);
	printf("Tempat Lahir: "); scanf(" %[^\n]s", dosen[i].Tempat);
	inputTanggalLahir(i);
}

void inputAlamat(int i) {
	printf("Input Alamat\n");
	printf("NamaJalan: "); scanf(" %[^\n]s", dosen[i].almt.NamaJalan);
	printf("Nomor Rumah: "); scanf(" %s", dosen[i].almt.NomorRumah);
	printf("Kota: "); scanf(" %[^\n]s", dosen[i].almt.Kota);
	printf("Provinsi: "); scanf(" %[^\n]s", dosen[i].almt.Provinsi);
	printf("\n");
}

void inputTanggalLahir(int i) {
	printf("\nInput Tanggal Lahir\n");
	printf("Tanggal: "); scanf(" %s", dosen[i].tl.Tanggal);
	printf("Bulan: "); scanf(" %s", dosen[i].tl.Bulan);
	printf("Tahun: "); scanf(" %s", dosen[i].tl.Tahun);
	printf("\n");
}

void outputData(i) {
	int j = i+1;
	printf("\nDosen ke %d\n", j);
	printf("No Dosen: %s\n", dosen[i].NoDosen);
	printf("NIDN: %s\n", dosen[i].NIDN);
	printf("Nama: %s\n", dosen[i].Nama);
	printf("Alamat: %s, No: %s, Kota: %s, Provinsi: %s", dosen[i].almt.NamaJalan, dosen[i].almt.NomorRumah, dosen[i].almt.Kota, dosen[i].almt.Provinsi);
	printf("Tempat, Tanggal Lahir: %s, %s %s %s\n", dosen[i].Tempat, dosen[i].tl.Tanggal, dosen[i].Tempat, dosen[i].tl.Bulan, dosen[i].Tempat, dosen[i].tl.Tahun);
	printf("\n");
}
