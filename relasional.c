#include <stdio.h>

int main() {
	int x = 3, y = 5;
	
	if(x==y) printf("%d sama dengan %d\n", x, y);
	if(x!=y) printf("%d tidak sama dengan %d\n", x, y);
	if(x<y) printf("%d kurang dari %d\n", x, y);
	if(x>y) printf("%d lebih dari %d\n", x, y);
	if(x<=y) printf("%d kurang dari sama dengan %d\n", x, y);
	if(x>=y) printf("%d lebih dari sama dengan %d\n", x, y);
	
	return 0;
}
