#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	system("COLOR D");
	srand(time(NULL));
	
	int boyut;
	int i,j;
	char komut;
	char duvar = '#';
	char yol = '.';
	char bilgisayar_secimi;
	int x = 0 , y = 0;
	
	printf("OYUNUN OYNANACAGI ALAN BUYUKLUGU ICIN KENAR UZUNLUGU GIRIN : ");
	scanf("%d" , &boyut);
	if(boyut <= 2){
		printf("!!!GECERSIZ KENAR UZUNLUGU!!!");
		return 0;
	}
	
	char gridMatris[boyut][boyut];
	
	for(i = 0 ; i < boyut ; i++){
		for(j = 0 ; j < boyut ; j++){
			if(j == 0 && i == 0){
				gridMatris[i][j] = 'S';
			}
			else if (j == boyut - 1 && i == boyut - 1){
				gridMatris[i][j] = 'F';
			}
			else{
				if(rand() % 50 == 0){
					bilgisayar_secimi = duvar;
				}
				else{
					bilgisayar_secimi = yol;
				}
				gridMatris[i][j] = bilgisayar_secimi;
			}
			printf("%c\t",gridMatris[i][j]);
		}
		printf("\n");
	}
	
	gridMatris[x][y] = 'S';
	
	for(i = 0 ; i  < 3 * boyut ; i++){
		
		printf("\nKOMUTUNUZU GIRINIZ:");
		scanf(" %c" ,&komut);
		
		if(komut == 'S' || komut == 's'){
			if(y + 1 < boyut && gridMatris[x][y + 1] != duvar){
				y++;
				if(gridMatris[x][y] != 'F'){
				gridMatris[x][y] = 'X';
				}
			}
		}
		else if(komut == 'A' || komut == 'a'){
			if(x + 1 < boyut && gridMatris[x + 1][y] != duvar){
				x++;
				if(gridMatris[x][y] != 'F'){
					gridMatris[x][y] = 'X';
				}
			}
		}
		for(int k = 0 ; k < boyut ; k++) {
        	for(int l = 0 ; l < boyut ; l++) {
        	    printf("%c\t", gridMatris[k][l]);
        	}
        	printf("\n");
    	}
		if(x == boyut - 1 && y == boyut - 1) {
            printf("\nTEBRIKLER! BITISE VARDINIZ!!!\n");
            break;
        }	
	}
}
