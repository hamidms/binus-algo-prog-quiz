#include <stdio.h>

int main()
{
    int number1, number2, flag, i, j;
  
    printf("Deret Bilangan Prima diantara Dua Angka\n");
    printf("=======================================\n\n");
    
    printf("Masukkan angka pertama: ");
    scanf("%d", &number1);
 
    printf("Masukkan angka kedua: ");
    scanf("%d", &number2);
 
    printf("\nBilangan prima antara %d dan %d\n", number1, number2);
    for(i = number1+1; i < number2; ++i)
    {
        flag = 0;
        for(j = 2; j <= i/2; ++j)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d\n", i);   
        }
    }
    
    return 0;
}
