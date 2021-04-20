#include <stdio.h>

int main ()
{
	int angka, i;
	printf ("Masukkan jumlah bilangan: ");
	scanf ("%d", &angka);
	for (i = 1; i <= angka; i++)
    {   
		printf ("%d  ", i * i);
    }

	return 0;
}
