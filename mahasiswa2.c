#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define MAX 10  //batasan jumlah mahasiswa per kelas

struct data_mahasiswa  //struktur data mahasiswa
{
 int nim;
 char nama[20];
 char ttl[20];
 char kelamin[20];
 char no_hp[12];
 char alamat[20];
 char prodi[10];
 char kelas[10];
};

int main()
{
 int i, jml_mhs = 0;
 char tombol;
 struct data_mahasiswa data_uniku[MAX];  //batasan penyimpanan hingga 10t data
 
 printf ("Mendata Hasil Studi Kelas\n\n");
 
 do  //perulangan do-while
 {   //informasi data pribadi mahasiswa
  printf ("Masukan NIM                = "); scanf ("%d", &data_uniku[jml_mhs].nim);
  printf ("Masukan Nama               = "); scanf ("%s", &data_uniku[jml_mhs].nama);
  printf ("Masukan Tempat/ tgl. lahir = "); scanf ("%s", &data_uniku[jml_mhs].ttl);
  printf ("Masukan Jenis Kelamin      = "); scanf ("%s", &data_uniku[jml_mhs].kelamin);
  printf ("Masukan No. HP             = "); scanf ("%s", &data_uniku[jml_mhs].no_hp);
  printf ("Masukan Alamat             = "); scanf ("%s", &data_uniku[jml_mhs].alamat);
  printf ("Masukan Fakultas           = "); scanf ("%s", &data_uniku[jml_mhs].prodi);
  printf ("Masukan Kelas              = "); scanf ("%s", &data_uniku[jml_mhs].kelas);
   
  jml_mhs++;
  //pemilihan melanjutkan atau menghentikan memasukan data
  printf ("\nLanjut masukan data (Y/T)? : ");
  tombol = toupper (getch());
  while (! (tombol == 'T' || tombol == 'Y'))
  tombol = toupper(getch());
  printf ("%c\n\n", tombol); 
 }
 
 while (tombol == 'Y');

 printf ("Data Mahasiswa yang tersimpan\n");
 printf ("===========================================================================\n\n");
 for (i = 0; i < jml_mhs; i++)  //perulangan untuk menampilkan hasil
 {   //hasil tampilan
  printf ("Data Mahasiswa ke %d\n", i + 1);
  printf ("NIM                = %d\n", data_uniku[i].nim);
  printf ("Nama               = %s\n", data_uniku[i].nama);
  printf ("Tempat/ tgl. lahir = %s\n", data_uniku[i].ttl);
  printf ("Jenis Kelamin      = %s\n", data_uniku[i].kelamin);
  printf ("No. HP             = %s\n", data_uniku[i].no_hp);
  printf ("Alamat             = %s\n", data_uniku[i].alamat);
  printf ("Fakultas           = %s\n", data_uniku[i].prodi);
  printf ("Kelas              = %s\n\n", data_uniku[i].kelas);
 }  
}

