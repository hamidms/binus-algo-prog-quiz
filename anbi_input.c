#include <stdio.h>
  
int main()
{
    char name[10];
  
    printf("Nama: ");
    gets(name);
    printf("Namanya adalah %s\n", name);
  
    return 0;
}
