#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

void studentInput();
void studentScore();
void studentStatus();

struct scores {
  float nHadir, nTugas, nQuiz, nForum, nUAS, flag;
};

struct student {
  char nim[10], name[30], course[30];
  struct scores score;
} st, students[5];

int main() {
  int menu, i, j;
  char nim[10];
  
  do {
    printf("Aplikasi Menghitung Nilai Akhir Mahasiswa\n");
    printf("1. Input Data Mahasiswa\n");
    printf("2. Input Nilai Mahasiswa\n");
    printf("3. Status Mahasiswa\n");
    printf("4. Keluar\n");
    printf("\nPilih Menu (1-4): "); scanf("%d", &menu);
    
    switch(menu) {
      case 1:
        studentInput(i);
        i++;
        break;
      case 2:
        printf("Nim: "); scanf("%s", &nim);
        for(j=0; j<=4; j++) {
          if(strcmp(students[j].nim, nim) == 0) {
            studentScore(j);
            break;
          } else if (j == 4) {
            printf("\nData untuk nim %s belum tersedia\n", nim);
            break;
          }
        }
        break;
      case 3:
        printf("Nim: "); scanf("%s", &nim);
        for(j=0; j<=4; j++) {
          if(strcmp(students[j].nim, nim) == 0) {
            studentStatus(j);
            break;
          } else if (j == 4) {
            printf("\nData untuk nim %s belum tersedia\n", nim);
            break;
          }
        }
        break;
      case 4:
        break;  
    }
  } while (menu != 4);
    
  return 0;
}

void studentInput(int i) {
  int j;
  
  printf("Nim: "); scanf(" %s", st.nim);
  printf("Nama: "); scanf(" %[^\n]s", st.name);
  printf("Mata Kuliah: "); scanf(" %[^\n]s", st.course);
  
  for(j=0; j<=4; j++) {
    if(strcmp(students[j].nim, st.nim) == 0) {
      printf("\nData untuk nim %s sudah pernah diinput sebelumnya\n\n", st.nim);
      break;
    } else if (j == 4) {
      strcpy(students[i].nim, st.nim);
      strcpy(students[i].name, st.name);
      strcpy(students[i].course, st.course);
      printf("\nData untuk nim %s berhasil diinput\n\n", st.nim);
    }
  }
}

void studentScore(int i) {
  printf("\nInput nilai %s (dalam range 0-100)\n", students[i].name);
  printf("1. Nilai Hadir: "); scanf("%f", &students[i].score.nHadir);
  printf("2. Nilai Tugas: "); scanf("%f", &students[i].score.nTugas);
  printf("3. Nilai Quiz: "); scanf("%f", &students[i].score.nQuiz);
  printf("4. Nilai Forum: "); scanf("%f", &students[i].score.nForum);
  printf("5. Nilai UAS: "); scanf("%f", &students[i].score.nUAS);
  students[i].score.flag = 1;
  printf("\nNilai dari %s (%s) telah berhasil diinput\n\n", students[i].name, students[i].nim);
}

void studentStatus(int i) {
  float nHadir, nTugas, nQuiz, nForum, nUAS, nTotal;
  char *grade, *status;
  
  if(students[i].score.flag == 1) {
    printf("\nStatus Mahasiswa (%s)\n", students[i].name);
    nHadir = students[i].score.nHadir * 10 / 100;
    nTugas = students[i].score.nTugas * 20 /100;
    nQuiz = students[i].score.nQuiz * 10 /100;
    nForum = students[i].score.nForum * 10 /100;
    nUAS = students[i].score.nUAS * 50 /100;
    nTotal = nHadir + nTugas + nQuiz + nForum + nUAS;
    printf("Hasil Kalkulasi adalah %.2f\n", nTotal);
    
    if (nTotal > 89) {
      grade = "A";
      status = "Lulus";
    } else if (nTotal > 79){
      grade = "B";
      status = "Lulus";
    } else if (nTotal > 69){
      grade = "C";
      status = "Lulus";
    } else if (nTotal > 59){
      grade = "D";
      status = "Lulus";
    } else if (nTotal > 49){
      grade = "E";
      status = "Tidak Lulus";
    } else if (nTotal > 0){
      grade = "F";
      status = "Tidak Lulus";
    } else {
      grade = "-";
      status = "Nilai Tidak Sesuai";
    }
    printf("Status Grade : %s\n", grade);
    printf("Dinyatakan %s\n", status);
  } else {
    printf("Nilai belum diinput\n\n");
  }
}
