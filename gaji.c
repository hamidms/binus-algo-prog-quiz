#include <stdio.h>

int main()
{
	char name[20], pendidikan[3];
	int jabatan, jamKerja, gaji, tunjanganJabatan, tunjanganPendidikan, jamLembur, upahLembur, totalGaji;
    
	gaji = 2000000;
    
	printf("PROGRAM HITUNG GAJI KARYAWAN\n");  
  
	printf("Nama Karyawan: "); 
	scanf("%[^\n]s", &name);
  
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
  
	printf("Pendidikan: ");
	scanf("%s", &pendidikan);
	if(strcmp(pendidikan, "SMA") == 0) {
		tunjanganPendidikan = gaji*25/1000;
	} else if(strcmp(pendidikan, "D3") == 0) {
		tunjanganPendidikan = gaji*5/100;
	} else if(strcmp(pendidikan, "S1") == 0) {
		tunjanganPendidikan = gaji*10/100;
	} else {
		tunjanganPendidikan = 0;
	}
	printf("Jumlah jam kerja: ");
	scanf("%d", &jamKerja);
	
//	Proses Jam Lembur
	jamLembur = jamKerja - 8;
	upahLembur = jamLembur * 3000;
	
//	Total Gaji
	totalGaji = gaji + tunjanganJabatan + tunjanganPendidikan + upahLembur;

//	Form Output
	printf("Nama Karyawan: %s\n",name);
	printf("Tunjangan Jabatan adalah %d\n", tunjanganJabatan) ;
	printf("Tunjangan Pendidikan adalah %d\n", tunjanganPendidikan) ;
	printf("Jumlah Upah Lembur adalah %d\n", upahLembur);
	printf("Total Gaji adalah %d\n", totalGaji);

	return 0;  
}
