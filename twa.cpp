#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define n 
using namespace std;

int main()
{
 string golongan[]={"A","B","C","D"};
 int lenght =sizeof(golongan)/sizeof(*golongan);
    string dtCari;
    int hasilCari;
 char nik[20],A,B,C,D,x;
 int keluar =0 ,i=1;
 int gajipokok,tunjangan,gajibersih,pajak;

 
 void gotoxy(int x, int y);
 // no 1
 cout<<"\t  PT BERKAH  "<<endl;
 cout<<"\t  ENTRY DATA PENGGAJIAN KARYAWAN  \t\n"<<endl;
 
 cout<<(" Masukan Nik   : ");gets(nik);
 cout<<(" Nama Karyawan : Indah_permata_sari \n");
 cout<<(" GRADE         : ");scanf("%i",golongan);
 cout<<"\n Tekan [Y/T] ?";
 cout<<"\n Keluar(Tekan X) ";
 x=getch();
 {
  if (x=='X' || x=='x')
  keluar=-1;
  i++;
 }
 keluar++;
 cout<<"\n"<<endl;
 
 //no 2
 cout<<"\t\t\t  PT BERKAH  \t"<<endl;
 cout<<"\t\t\t  INFORMASI PEMBAYARAN GAJI KARYAWAN  \t\n"<<endl;
 
 cout<<"\t--------------------------------------------------------------------------------------------"<<endl;
 cout<<"\tNO  |"<<"\t"<<"NIk    |"<<"\t"<<"NAMA KARYAWAN     |"<<"\t"<<"PAJAK      |"<<"\t"<<"TUNJANGAN   |"<<"\t"<<"GAJI BERSIH"<<endl;
 cout<<"\t-------------------------------------------------------------------------------------------- \n"<<endl;
 cout<<"\t 1  |"<<"\t"<<"2002890|"<<"\t"<<"Indah_permata_sari|"<<"\t"<<"Rp.700000.0|"<<"\t"<<"Rp.1400000.0|"<<"\t"<<"Rp.7700000.00"<<endl;
 cout<<"\t    |"<<"\t"<<"       |"<<"\t"<<" i                |"<<"\t"<<"           |"<<"\t"<<"0           |"<<"\t"<<"             "<<endl;
 cout<<"\tDst.|"<<"\t"<<"Dst.   |"<<"\t"<<"Dst.              |"<<"\t"<<"Dst.       |"<<"\t"<<"Dst.        |"<<"\t"<<"Dst.          "<<endl;
 cout<<"\t    |"<<"\t"<<"       |"<<"\t"<<"                  |"<<"\t"<<"           |"<<"\t"<<" TOTAL:     |"<<"\t"<<"XXXXXXXXXX.00  "<<endl;
 cout<<"\t-------------------------------------------------------------------------------------------- \n\n"<<endl;

//no 3

//void brs() 
//{
// printf("|  |       |            |    |        |    |\n");
//}
//void brs2()
//{
// printf("                       |   |    |\n");
// //  012345678901234567890123456789012345678901234567890
//}

//int main()
//{
//
// float gp,tj,gb,pjk,tpk,tgb,i,x; 
// int byk; 
// for (byk=0;byk<n;byk++)
// {
//  switch(gr[byk])
//  {
//   case 'A':{
//    gp=7000000;
//    pjk=0.1*gp;
//    tj=0.2*gp;
//    break;
//   }
//   case 'B':{
//    gp=7000000;
//    pjk=0.07*gp;
//    tj=0.15/100*gp;
//    break;
//   }
//   case 'C':{
//    gp=3500000;
//    pjk=0.5/100*gp;
//    tj=0.15/100*gp;
//    break;
//   }
//   case 'D':{
//    gp=350000;
//    pjk=0.5/100*gp;
//    tj=0.10/100*gp;
//    break;
//   }
//  }
//  gb=gp+tj-pjk;
//  tpk=tpk+pjk;
//  tgb=tgb+gb;
//  
//  gotoxy(0,8+byk);brs();
//  gotoxy(1,8+byk);printf("%i",byk+1);
//  gotoxy(8,8+byk);printf("%s",nik);
//  gotoxy(19,8+byk);printf("%s",nama);
//  gotoxy(39,8+byk);printf("%.0f",pjk);
//  gotoxy(47,8+byk);printf("%.0f",tj);
//  gotoxy(58,8+byk);printf("%.0f",gb);
// }
// int kunci=79;
// printf("Nilai ");scanf("%c",&gr[byk]);
// return 0;
// int banyak,s=0;
// for (i=0;i<10;i++){
//  if (x==kunci);
//  s++;
// 
// }
//}
// //Melakukan Pencarian searching
// 
// string golongan[]={"A","B","C","D"};
// int length =sizeof(golongan)/sizeof(*golongan);
//    string dtCari;
//    int hasilCari;
//    
//    cout<<"Data Tersedia :"<<endl;
//    for (int a=0;a<length;a++){
//     cout<<"golongan ke-"<<a<<" : "<<golongan[a]<<endl;
// }
// cout<<" Data yang di cari :";
// cin>>dtCari;
// for(int b=0;b<length;b++){
//  if(dtCari==golongan[b]){
//   hasilCari++;
//  }
// }
// if(hasilCari==0){
//  cout<<"Data tidak di Temukan"<<endl;
// }else{
//  cout<<"Data"<<dtCari<<" ditemukan di :"<<endl;
//  for(int c=0;c<length;c++){
//   if(dtCari ==golongan[c]){
//   }
//  }
//}
}
