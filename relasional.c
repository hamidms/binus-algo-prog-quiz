#include <stdio.h>

int main() {
	int a = 3, b = 5;
	
	printf("%d & %d = %d\n", a, b, a&b);
	printf("%d | %d = %d\n", a, b, a|b);
	printf("%d ^ %d = %d\n", a, b, a^b);
	printf("%d >> 2 = %d\n", b, b>>2);
	printf("%d << 2 = %d\n", a, a<<2);
	
	return 0;
}

