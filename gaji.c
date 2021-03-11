#include <stdio.h>

int main()
{
	char nama[30];
	char pendidikan[3][50] = {"SMA", "D3", "S1"};
	int jabatan, jamKerja, gaji, tunjanganJabatan, tunjanganPendidikan, jamLembur, honorLembur, totalGaji;
    
	gaji = 2000000;
    
	printf("PROGRAM HITUNG GAJI KARYAWAN\n");  
	
//	Input nama karywan
	printf("Nama Karyawan: "); 
	scanf("%[^\n]s", &nama);
	
//	Input golongan jabatan
	printf("Golongan Jabatan: ");
	scanf("%d", &jabatan);
	
	
	switch (jabatan)
	{
	    case 1 :
	    	tunjanganJabatan = gaji*5/100;
	    	break;
	    case 2 :
	    	tunjanganJabatan = gaji*10/100;
	    	break;      
	    case 3 :
	    	tunjanganJabatan = gaji*15/100;
	    	break;
	}
	
//	Input pendidikan
	printf("Pendidikan: ");
	scanf("%s", &pendidikan);
	strupr(pendidikan);
	
//	Perhitungan Pendidikan
	if(strcmp(pendidikan, "SMA") == 0) {
		tunjanganPendidikan = gaji*25/1000;
	} else if(strcmp(pendidikan, "D3") == 0) {
		tunjanganPendidikan = gaji*5/100;
	} else if(strcmp(pendidikan, "S1") == 0) {
		tunjanganPendidikan = gaji*10/100;
	} else {
		tunjanganPendidikan = 0;
	}
	
//	Input jam kerja
	printf("Jumlah jam kerja: ");
	scanf("%d", &jamKerja);
	
//	Validasi jam kerja
	if(jamKerja < 8) {
		printf("\nJam kerja tidak boleh dibawah 8 jam\n");
		printf("Jumlah jam kerja: ");
		scanf("%d", &jamKerja);
	}
	
//	Perhitungan jam dan honor lembur
	jamLembur = jamKerja - 8;
	honorLembur = jamLembur * 3000;
	
//	Total Gaji
	totalGaji = gaji + tunjanganJabatan + tunjanganPendidikan + honorLembur;

//	Form Output
	printf("\nNama Karyawan: %s\n",nama);
	printf("	Tunjangan Jabatan Rp %d\n", tunjanganJabatan) ;
	printf("	Tunjangan Pendidikan Rp %d\n", tunjanganPendidikan) ;
	printf("	Honor Lembur Rp %d\n", honorLembur);
	printf("Total Gaji Rp %d\n", totalGaji);

	return 0;  
}
