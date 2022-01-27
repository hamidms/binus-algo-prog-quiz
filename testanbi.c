#include <stdio.h>

int main() {
    char pilihan = 'y';
    
    do {
        printf("Apakah ingin mengulang? (y/n): ");
        scanf(" %c", &pilihan);
    } while(pilihan == 'y');
    
    return 0;
}
