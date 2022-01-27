#include <stdio.h>

struct tanggal_lahir{
	int tanggal;
	int bulan;
	int tahun;
};
 
struct data_mahasiswa{
	char nama[20];
	struct tanggal_lahir tgl;
	float biaya;
	};
	
int main() {
	struct data_mahasiswa data_mhs[2];
	int id_mhs;
	 
	printf("Aplikasi Data Mahasiswa \n\n");
 
	for(id_mhs=0; id_mhs<2; id_mhs++)
	{
		printf("No. %i \n", id_mhs+1);
		printf("Nama = "); 
		scanf("%s", &data_mhs[id_mhs].nama);
		printf("Tanggal Lahir = "); 
		scanf("%i %i %i", 
			&data_mhs[id_mhs].tgl.tanggal, 
			&data_mhs[id_mhs].tgl.bulan,
			&data_mhs[id_mhs].tgl.tahun);
		printf("Biaya = "); 
		scanf("%f", &data_mhs[id_mhs].biaya);
		printf("\n");
	}

	for(id_mhs=0; id_mhs<2; id_mhs++)
	{
		printf("\nNo. %i \n", id_mhs+1);
		printf("Nama = %s \n", &data_mhs[id_mhs].nama); 
		printf("Tanggal Lahir = %i %i %i \n", 
			data_mhs[id_mhs].tgl.tanggal, 
			data_mhs[id_mhs].tgl.bulan,
			data_mhs[id_mhs].tgl.tahun);
		printf("Biaya = Rp. %.2f \n", data_mhs[id_mhs].biaya);\
	}
	
	return(0);
 }
