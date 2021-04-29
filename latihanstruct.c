#include <stdio.h>
#include <string.h>

struct student 
{
     int id;
     char name[30];
     float percentage;
} record, rec[2];

int main() 
{
     int i;
//     struct student record[2];

	printf("ID: "); scanf(" %d", record.id);
	printf("Name: "); scanf(" %[^\n]s", record.name);
	printf("Percentage: "); scanf(" %f", record.percentage);
	 
	strcpy(rec[i].id, record.id);
	strcpy(rec[i].name, record.name);
	strcpy(rec[i].percentage, record.percentage);
	
     for(i=0; i<3; i++)
     {
         printf("Records of STUDENT : %d \n", i+1);
         printf("Id is: %d \n", rec[i].id);
         printf("Name is: %s \n", rec[i].name);
         printf("Percentage is: %f\n\n", rec[i].percentage);
     }
     return 0;
}
