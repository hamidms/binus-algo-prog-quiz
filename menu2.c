#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct nilai { 
	float hadir,tugas,quiz,forum,uas,checker; 
}; 

struct biodata { 
	char nim[15]; 
	char nama[50]; 
	char matkul[50]; 
	struct nilai score; 
} student[10],temp; 

int inputbiodata(int j) { 
	int i; 
	
	strcpy(temp.nama,""); 
	strcpy(temp.nim,""); 
	strcpy(temp.matkul,""); 
	printf("Nama\t\t: ");scanf(" %s",temp.nama); 
	printf("NIM\t\t: ");scanf(" %s",temp.nim); 
	printf("Mata kuliah\t: ");scanf(" %s",temp.matkul); 
	
	for(i=0;i<=9;i++) { 
		if(strcmp(temp.nim,student[i].nim)==0) { 
			printf("\n== Data dengan nim %s sudah terinput! ==\n\n",temp.nim); 
		break; 
		} else if(i==9) { 
			strcpy(student[j].nama,temp.nama); 
			strcpy(student[j].nim,temp.nim); 
			strcpy(student[j].matkul,temp.matkul); 
			printf("\n== Data mahasiswa %s (%s) BERHASIL di-input! ==\n\n",student[j].nama,student[j].nim); 
		} 
	} 
} 

int inputnilai (int number1) { 
	printf("Mahasiswa\t: %s\n",student[number1].nama); 
	printf("Nilai kehadiran\t: "); scanf(" %f",&student[number1].score.hadir); 
	printf("Nilai tugas\t: "); scanf(" %f",&student[number1].score.tugas); 
	printf("Nilai quiz\t: "); scanf(" %f",&student[number1].score.quiz); 
	printf("Nilai forum\t: "); scanf(" %f",&student[number1].score.forum); 
	printf("Nilai UAS\t: "); scanf(" %f",&student[number1].score.uas); 
	student[number1].score.checker=1; 
	printf("\n== Data nilai mahasiswa %s (%s) BERHASIL di-input! ==\n\n", student[number1].nama,student[number1].nim); 
} 

int ceknilai (int number2) { 
	float avg; 
	if (student[number2].score.checker==1){ 
		printf("Mahasiswa\t: %s\n",student[number2].nama); 
		avg = (0.1*student[number2].score.hadir)+(0.2*student[number2].score.tugas)+(0.1*student[number2].score.quiz)+(0.1*student[number2].score.forum)+(0.5*student[number2].score.uas); 
		printf("Kalkulasi nilai\t: %.2f\n", avg); 
		if (avg>=90){ 
			printf("Grade\t\t: A\n"); 
			printf("Status\t\t: LULUS\n\n"); 
		} else if (avg>=80){ 
			printf("Grade\t\t: B\n"); 
			printf("Status\t\t: LULUS\n\n"); 
		} else if (avg>=70){ 
			printf("Grade\t\t: C\n"); 
			printf("Status\t\t: LULUS\n\n"); 
		} else if (avg>=60){ 
			printf("Grade\t\t: D\n"); 
			printf("Status\t\t: LULUS\n\n"); 
		} else{ 
			printf("Grade\t\t: E\n"); 
			printf("Status\t\t: TIDAK LULUS\n\n"); 
		} 
	} else { 
		printf("\n== Data nilai mahasiswa %s (%s) BELUM di-input! ==\n\n",student[number2].nama,student[number2].nim); 
	} 
} 

int main() { 
	int pilihan=0; 
	int n=0; 
	char nomor[10]; 
	int k,x; 
	
	do { 
		printf("PILIHAN MENU\n"); 
		printf("Menu 1 : Input data Mahasiswa\n"); 
		printf("Menu 2 : Input nilai\n"); 
		printf("Menu 3 : Melihat nilai Mahasiswa dan status\n"); 
		printf("Menu 4 : Keluar\n\n"); 
		printf("Menu (1..4)\t: ");scanf(" %d",&pilihan); 
		switch(pilihan) { 
			case 1 : 
				inputbiodata(n); 
				n++; 
				break; 
			case 2 : 
				strcpy(nomor,""); 
				printf("Masukkan NIM\t: ");
				scanf(" %s",nomor); 
				
				for(k=0;k<=9;k++) { 
					if (strcmp(nomor,student[k].nim)==0) { 
						x=k; 
						inputnilai(x); 
						break; 
					} else if (k==9){ 
						printf("\n== Data Mahasiswa dengan nim %s belum di-input! ==\n\n",nomor); 
						break; 
					} 
				} 
				break; 
			case 3 : 
				strcpy(nomor,""); 
				printf("Masukkan NIM\t: ");
				scanf(" %s",nomor); 
				for(k=0;k<=9;k++) { 
					if (strcmp(nomor,student[k].nim)==0) { 
						x=k; 
						ceknilai(x); 
						break; 
					} else if (k==9) { 
						printf("\n== Data Mahasiswa dengan nim %s belum di-input! ==\n\n",nomor); 
						break; 
					} 
				} 
				break; 
			case 4 : 
			break; 
		} 	
	} while (pilihan!=4); 
	
	return(0);	
}
