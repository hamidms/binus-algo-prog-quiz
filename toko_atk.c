#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>

struct barang{
    int jumlah;
    char nama[30];
    struct barang *next, *prev;
}*head, *tail, *current;

void pushTail(int jumlah, char nama[]){
    current = (struct barang *)malloc(sizeof (struct barang));
    strcpy(current->nama, nama);
    current->jumlah = jumlah;
    current->prev = current->next = NULL;

    if(head==NULL){
        head=tail=current;
    } else {
        current->prev = tail;
        tail->next = current;
        tail = current;
    }
    
 	printf("\nData barang berhasil ditambah\n");
}

void pushHead(int jumlah, char nama[]){
    current = (struct barang *)malloc(sizeof (struct barang));
    strcpy(current->nama, nama);
    current->jumlah = jumlah;
    current->next = current->prev = NULL;
    
    if(head==NULL){
        head=tail=current;
    } else {
        head->prev = current;
        current->next = head;
        head = current;
    }
    
    printf("\nData barang berhasil ditambah\n");
}

void pushData(int jumlah, char nama[]){
	current=head;
	int flag=0;
	
	while(current!=NULL){		
		if(strcmp(current->nama, nama) == 0){
			current->jumlah = current->jumlah + jumlah;
			flag=1;
			break;
		} 
		if(current->next != NULL) {
			current=current->next;	
		} else {
			break;
		}
	}
	
    if(head==NULL){
        pushHead(jumlah, nama);
    } else if(flag==1) {
    	printf("\nData barang berhasil ditambah\n");
	} else {
    	pushTail(jumlah, nama);
    }
}

void deleteData(){
	int jumlah;
    char nama[30];
	current=head;
	
	printf("\nMasukkan nama barang yang ingin dihapus: "); 
	scanf("%s", nama);
	
	printf("Masukkan jumlah barang yang ingin dihapus: "); 
	scanf("%d", &jumlah);
	
	while(current!=NULL){		
		if(strcmp(current->nama, nama) == 0){
			current->jumlah = current->jumlah - jumlah;
			break;
		} else {
			printf("\nNo Data\n");
		}
		
		if(current->next != NULL) {
			current=current->next;	
		} else {
			break;
		}
	}
}

void addData(){
	int jumlah;
    char nama[30];
    
	printf("\nMasukkan nama barang yang ingin ditambah: "); 
	scanf("%s", nama);
	
    printf("Masukkan jumlah barang yang ingin ditambah: "); 
	scanf("%d", &jumlah);
	
	pushData(jumlah, nama);
}

void readData(){
	current=head;
	
	printf("\n=========================\n");
	
	if(current!=NULL){
		while(current!=NULL){
			printf("Nama : %s | Jumlah : %d\n", current->nama, current->jumlah);
			current=current->next;
		}
	} else {
		printf("No Data\n");
	}
	
	printf("\n=========================\n");
}

int main(){
    int menu;
    
    printf("Aplikasi Toko ATK\n");
    printf("Input data menggunakan text tanpa spasi (snake_case, PascalCase atau kebab-case)\n");
    
    while(menu < 4) {
        printf("\nMenu:\n");
        printf("1) Show Data\n");
        printf("2) Input Data\n");
        printf("3) Delete Data\n");
        printf("Tekan tombol lain untuk Keluar dari program\n");
        
        printf("\nPilih Menu: ");
        scanf("%d", &menu);
        
        switch(menu){
            case 1:
                readData();
                break;
            
            case 2:
                addData();
                break;
                
            case 3:
                deleteData();
                break;
            
            default:
                break;
        }
    }
    
    return 0;
}

