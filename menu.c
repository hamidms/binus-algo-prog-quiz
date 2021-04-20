#include <stdio.h>
#include <string.h>
#include <conio.h>

int getOption() {
	int input;
	system("cls");
	printf("Program Menghitung Nilai Akhir\n");
	printf("==============================\n");
	printf("Menu 1 - Input data mahasiswa\n");
	printf("Menu 2 - Input nilai\n");
	printf("Menu 3 - melihat nilai mahasiswa dan status\n");
	printf("Menu 4 - keluar dari program\n");
	printf("==============================\n");
	printf("Pilih [1-4]? : ");	
	scanf("%d", &input);
	
	printf("%d", input);
}

int main() {
	int userOption = getOption();
	char is_continue;
	
	while(userOption != 4) {
		switch(userOption){
			case 1:
				printf("Menambah data mahasiswa");
				break;
			case 2:
				printf("Input nilai mahasiswa");
				break;
			case 3:
				printf("Tampilkan nilai mahasiswa");
				break;
			case 4:
				printf("Keluar");
				break;
			default:
				printf("Menu tidak ditemukan");
				break;
		}
		label_continue:
			
		
		printf("Lanjutkan?(y/n): ");
		scanf("%s", is_continue);
		
		if((is_continue == 'y') | (is_continue == 'Y')){
			userOption = getOption();
		} else if((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}
		
	}
	
	printf("End of Program");
	
	return 0;
}
