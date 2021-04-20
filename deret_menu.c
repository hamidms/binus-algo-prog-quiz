#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int nim;
char nama, matkul;
int nHadir, nTugas, nQuiz, nForum, nUAS, nTotal;

void InputData() {
    
    
    printf("\nInput Data Mahasiswa\n");
    printf("====================\n");
    printf("Masukkan NIM: "); 
	scanf("%d", &nim);
    printf("\nMasukkan Nama: "); 
	scanf("%[^\n]s", nama);
    printf("\nMasukkan Mata Kuliah: "); 
	scanf("%[^\n]s", matkul);
    
    printf("\n\nNIM: %d \n Nama: %s \n Mata Kuliah: %s \n", nim, nama, matkul);
}

void InputNilai() {
    printf("\nInput Nilai Mahasiswa\n");
    printf("====================\n");
    printf("Nilai Hadir: "); scanf("%d", &nHadir);
    printf("Nilai Tugas: "); scanf("%d", &nTugas);
    printf("Nilai Quiz: "); scanf("%d", &nQuiz);
	printf("Nilai Forum: "); scanf("%d", &nForum);
	printf("Nilai UAS: "); scanf("%d", &nUAS);
}

void LihatNilai() {
	nHadir = nHadir*10/100;
	nTugas = nTugas*20/100;
	nQuiz = nQuiz*10/100;
	nForum = nForum*10/100;
	nUAS = nUAS*50/100;
	
	nTotal = nHadir + nTugas + nQuiz + nForum + nUAS;
}

int main()
{
    int pil;
    
    do {
        printf("Menu Nilai Akhir\n");
        printf("===================\n");
        printf("1. Input data mahasiswa\n");
        printf("2. Input nilai\n");
        printf("3. untuk melihat nilai mahasiswa dan status\n");
        printf("4. Keluar\n");
        printf("====================\n");
        
        do {
            printf("Masukkan pilihan (1 - 4) = "); scanf("%d", &pil);

            //Verifikasi pilihan            
            if ((pil < 1) || (pil > 4))
            {
                printf("Pilihan harus 1 sampai 4\n");
            }
        } while ((pil < 1) || (pil > 4));
        
        switch(pil)
        {
            case 1 : {
                InputData();
                break;
            }
            case 2 : {
                InputNilai();
                break;
            }
            case 3 : {
                LihatNilai();
                break;
            }
        }
        
    } while (pil < 4);

    return 0;
}

