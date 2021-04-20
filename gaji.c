#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char employeeName[30];
	char employeeEducation[50];
	int wages = 2000000;
	int position; 
	int officeHours;
	int positionAllowance; 
	int educationalAllowance; 
	int overTime;
	int overTimeCompensation;
	int totalWages;
    
    //  Title of Program
	printf("PROGRAM HITUNG GAJI KARYAWAN\n");  
  
    //  Employee's Name Input
	printf("Nama Karyawan: "); 
	scanf("%[^\n]s", employeeName);
  
    //  Employee's Position Input
	printf("\nMasukkan golongan 1, 2 atau 3\n");
	printf("Golongan Jabatan: ");
	scanf("%d", &position);
  
    //	Position Input Validation
	while(position > 3 || position < 1) {
		printf("\nHanya ada golongan 1, 2 dan 3\n");
		printf("Golongan jabatan: ");
		scanf("%d", &position);
	}

    //	Counting Position Allowance Proccess
	switch (position) {
    	case 1 :
        	positionAllowance = wages*0.05;
	        break;
	    case 2 :
	        positionAllowance = wages*0.1;
	        break;      
	    case 3 :
	        positionAllowance = wages*0.15;
	        break;
	    default:
	    	break;
	}
  
    //  Employee's Educational Input
	printf("\nHanya ada jenjang pendidikan SMA, D3 dan S1");
	printf("\nPendidikan: ");
	scanf("%s", employeeEducation);
	strupr(employeeEducation);

    // Educational Validation
    // Feature Under Progress
  
    //	Counting Educational Allowance Proccess
	if(strcmp(employeeEducation, "SMA") == 0) {
    	educationalAllowance = wages*0.025;
	} else if(strcmp(employeeEducation, "D3") == 0) {
		educationalAllowance = wages*0.05;
	} else if(strcmp(employeeEducation, "S1") == 0) {
		educationalAllowance = wages*0.1;
	} else {
		educationalAllowance = 0;
	}
  
    //  Employee Working Hours Input
	printf("\nJumlah jam kerja: ");
	scanf("%d", &officeHours);
  
    //  Working Hours Validation
	if(officeHours < 8) {
    	printf("\nJumlah jam kerja tidak boleh kurang dari 8 jam\n");
    	printf("Jumlah jam kerja: ");
    	scanf("%d", &officeHours);
	}
  
    //  Counting Overtime Compensation
    //  Note: Working hours in a month is 25 Hours
	overTime = officeHours - 8;
	overTimeCompensation = overTime * 3000 * 25;
  
    //  Total Employee's Wages [Final Proccess]
	totalWages = wages + positionAllowance + educationalAllowance + overTimeCompensation;

    //  Output Program
	printf("\nNama Karyawan: %s\n", employeeName);
	printf("    Tunjangan Jabatan Rp %d\n", positionAllowance) ;
	printf("    Tunjangan Pendidikan Rp %d\n", educationalAllowance) ;
	printf("    Honor Lembur Rp %d\n", overTimeCompensation);
	printf("Total Gaji Rp %d\n", totalWages);

	return 0;  
}


