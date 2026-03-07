#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int otomorfikMi(int sayi){

    int orijinal = sayi;
    int kare = sayi * sayi;
    int temp = sayi;
    int basamak = 0;
    int carpan = 1;
    system("COLOR 8");

    while(temp != 0){
        basamak++;
        temp /= 10;
    }
    for(int i = 0; i < basamak; i++){
        carpan *= 10;
    }
    if(kare % carpan == orijinal){
        printf("SAYI OTOMORFIKTIR\n");
    }
    else{
        printf("SAYI OTOMORFIK DEGILDIR\n");
    }
    return sayi;
}
int kaprekarMi(int sayi){
	
	int orijinal = sayi;
	int birinci_sayi = sayi;
	int sonuc,bolen;
	int basamak = 0;
	int kare = sayi * sayi;
	int sag_taraf,sol_taraf;
	system ("COLOR 3");
	
	while (orijinal > 0){
		orijinal /= 10;
		basamak ++;
	}
	
	bolen = pow(10,basamak);
	
	sag_taraf = birinci_sayi % bolen;
	sol_taraf = birinci_sayi / bolen;
	if(kare == (sol_taraf * sol_taraf) + (sag_taraf * sag_taraf)){
		printf("SAYI KAPREKAR SAYIDIR\n");
	}
	else{
		printf("SAYI KAPREKAR SAYI DEGILDIR\n");
	}
	return sayi;
}
//BASAMAK TOPLAMI FONKSIYONU MAIN FONKSIYONDA BULUNMUYOR
int basamakToplami(int n){
    int toplam = 0;
    while(n != 0){
        toplam += n % 10;
        n /= 10;
    }
    return toplam;
}
int smithMi(int sayi){

    int orijinal = sayi;
    int toplam_sayi = basamakToplami(sayi);
    int toplam_carpan = 0;
    int i;
    bool asal = 1;

    for(i = 2; i < sayi; i++){
        if(sayi % i == 0){
            asal = 0;
            break;
        }
    }
    if(asal || sayi == 1){
        printf("SAYI ASAL YA DA 1 E ESITTIR YANI SMITH DEGIL\n");
        return 0;
    }
    for(i = 2; i <= sayi; i++){
        while(sayi % i == 0){
            toplam_carpan += basamakToplami(i);
            sayi /= i;
        }
    }

    if(toplam_sayi == toplam_carpan)
        printf("SAYI SMITH SAYISIDIR\n");
    else
        printf("SAYI SMITH SAYISI DEGILDIR\n");
}
int happyMi(int sayi){

    int toplam, basamak;
	system ("COLOR B");
	
    while(sayi != 1 && sayi != 4){
        toplam = 0;
        while(sayi != 0){
            basamak = sayi % 10;
            toplam += basamak * basamak;
            sayi /= 10;
        }
        sayi = toplam;
    }
    if(sayi == 1){
        printf("SAYI HAPPY SAYIDIR\n");
    }
    else{
        printf("SAYI HAPPY SAYI DEGILDIR\n");
    }
}
int emirpMi(int sayi){
	
	int orijinal = sayi;
	int ters = 0;
	bool asal1 = 1;
	bool asal2 = 1;
	int i,basamak1ler;
	system ("COLOR 6");
	
	for (i = 2 ; i < orijinal ; i++){
		if(orijinal % i == 0){
			asal1 = 0;
			break;
		}
	}
	
	orijinal = sayi;
	
	while(orijinal != 0){
		basamak1ler = orijinal % 10;
		ters = ters * 10 + basamak1ler;
		orijinal /= 10;
	}
	
	for (i = 2 ; i < ters ; i++){
		if(ters % i == 0){
			asal2 = 0;
			break;
		}
	}
	if(ters != sayi && asal1 == 1 && asal2 ==1){
		printf("SAYI EMIRP SAYIDIR\n");
	}
	else{
		printf("SAYI EMIRP SAYI DEGILDIR\n");
	}
}
//EMIRP YAZDIR VE EMIRP MI FONKSIYONLARI MAIN FONKSYIONDA BULUNMUYOR
void emirpYazdir (void){
	
	int i,j;
	int counter = 0;
	int basamak1ler;
	bool asal1 = 1,asal2 = 1;
	
	for(i = 1 ; i <= 1000 ;i ++){
		
		int sayi = i;
		int orijinal = sayi;
		int ters = 0;
		
		for (j = 2 ; j < orijinal ; j++){
			if(orijinal % j == 0){
				asal1 = 0;
				break;
			}
		}
		orijinal = sayi;
		while (orijinal != 0){
			basamak1ler = orijinal % 10;
			ters = ters * 10 + basamak1ler;
			orijinal /= 10;
		}
		for (j = 2 ; j < ters ; j++){
			if(ters % j == 0){
				asal2 = 0;
				break;
			}
		}
		if(ters != sayi && asal1 == 1 && asal2 == 1){
			counter ++;
			printf("%d\n",sayi);
		}
		asal1 = 1;
		asal2 = 1;
	}
	printf("1 ILE 1000 ARASINDA %d KADAR EMIRP SAYI VARDIR",counter);
}
int ebobbul(int a , int b){

    int ebob = 1;
    int kucuk;

    if(a < b){
        kucuk = a;
    }
    else{
        kucuk = b;
    }
    for(int i = 1 ; i <= kucuk ; i++){
        if(a % i == 0 && b % i == 0){
            ebob = i;
        }

    }
    printf("EBOB:%d",ebob);
    return ebob;
}
void merdivenMi(int sayi){
	
	bool merdiven = 1;
	int orijinal = sayi;
	int son_basamak = orijinal % 10;
	int ilk_basamak;
	orijinal /= 10;
	
	while (merdiven != 0 && orijinal != 0){
		ilk_basamak = orijinal % 10;
		orijinal /=10;
		if ((ilk_basamak - son_basamak != 1) && (son_basamak - ilk_basamak != 1)){
			merdiven = 0;
		}
		son_basamak = ilk_basamak;
	}
	if (merdiven == 1){
		printf("SAYI MERDIVENDIR");
	}
	else {
		printf("SAYI MERDIVEN DEGILDIR");
	}
}
int rotateRight(int sayi){
	
	int basamak1ler;
	for (int i = 1 ; i <= 1 ;i++){
		basamak1ler = sayi % 10;
		sayi /= 10;
	}
	printf("%d%d",basamak1ler,sayi);
	return sayi;
}
int basamakCarpimi(int sayi){
	int carpim = 1;
	int basamak;
	int orijinal = sayi;
	while (orijinal != 0){
		basamak = orijinal % 10;
		carpim *= basamak;
		orijinal /= 10;
	}
	printf("BASAMAKLAR CARPIMI:%d",carpim);
	return sayi;
}
int basamaklar_asalMi(int sayi){
	
	bool asal = 1;
	int basamak;
	int i,j;
	system("COLOR 5");
	
	while (sayi != 0){
		basamak = sayi % 10;
		for (j = 2 ; j < basamak ; j++){
			if (basamak % j == 0){
				asal = 0;
			}
		}
		sayi /= 10;
	}
	if (asal){
		printf("SAYININ TUM BASAMAKLARI ASALDIR");
	}
	else {
		printf("SAYININ TUM BASAMAKLARI ASAL DEGILDIR");
	}
}
//ASAL MI FONKSIYONU IKIZ ASAL MI FONKSIYONU ICIN TASARLANMISTIR VE AMINDE KULLANILMAMAKTADIR
int asalMi(int sayi){
	
	bool asal = 1;
	
	for (int i = 2 ; i < sayi ; i++){
		if (sayi % i == 0){
			asal = 0;
		}
	}
	return asal;
}
void ikizAsalMi(void){
	int limit;
	int x,y;
	printf("ARALIK UST SINIRINI GIRINIZ:");
	scanf("%d",&limit);
	if (limit == 0){
		printf("GECERSIZ BIR SINIR DEGERI GIRDINIZ");
	}
	else if (limit < 0){
		limit *= (-1);
	}
	for (int i = 1 ; i <= limit ; i++){
		if (asalMi(x) && asalMi(y) && int(fabs(x-y)) == 2){
			printf("%d %d",x,y);
		}
	}
}
void kosegenliKareCiz(void){
	int i,j;
	for (i = 1 ; i <= 5 ; i++){
		for (j = 1 ; j <= 5 ; j++){
			if ((i == 2 && j == 3) || (i == 4 && j == 3) || (i == 3 && j == 2) || (i == 3 && j == 4)){
				printf ("   ");
			}
			else if (i == 3 && j == 3){
				printf(" X ");
			}
			else {
				printf(" * ");
			}
		}
		printf("\n");
	}
}
int main (){
    int deger1,deger2,deger3,deger4,deger5,deger6,deger7,deger8,deger9,deger10;
	int deger11,deger12,deger13;
	
	kosegenliKareCiz();
	
    printf("OTOMORFIK SAYI ICIN BIR SAYI GIRINIZ: ");
    scanf("%d" , &deger1);

    if(deger1 < 0)
        deger1 *= -1;

    otomorfikMi(deger1);
    
    printf("KAPREKAR SAYI KONTROLU ICIN BIR SAYI GIRINIZ:");
    scanf("%d" , &deger2);
    if(deger2 < 0){
    	deger2 *= (-1);
	}
	kaprekarMi(deger2);
	
	printf("SMITH SAYISI KONTROLU ICIN BIR DEGER GIRINIZ:");
	scanf("%d" , &deger3);
	if(deger3 < 0){
		deger3 *= (-1);
	}
	smithMi(deger3);
	
	printf("HAPPY SAYI KONTROLU ICIN BIR DEGER GIRINIZ:");
	scanf("%d" , &deger4);
	if(deger4 < 0){
		deger4 *= (-1);
	}
	happyMi(deger4);
	
	printf("EBOB ISLEMI ICIN POZITIF 2 DEGER GIRINIZ:");
	scanf("%d %d" , &deger6 , &deger7);
	if (deger6 <= 0 || deger7 <= 0){
		return 0;
	}
	ebobbul(deger6,deger7);
	printf("\n");
	
	printf("MERDIVEN SAYI KONTROLU ICIN BIR DEGER GIRINIZ:");
	scanf("%d" , &deger8);
	if(deger8 < 0){
		deger8 *= (-1);
	}
	merdivenMi(deger8);
	
	printf("\n");
	
	printf("1 KEZ SAGA DONDURMEK ICIN DEGER GIRINIZ:");
	scanf("%d" , &deger9);
	if(deger9 < 0){
		deger9 *= (-1);
	}
	rotateRight(deger9);
	
	printf("\n");
	
	printf("BASAMAKLARI CARPIMI BULUNACAK DEGERI GIRINIZ:");
	scanf("%d" , &deger10);
	if(deger10 < 0){
		deger10 *= (-1);
	}
	basamakCarpimi(deger10);
	
	printf("\n");
	
	printf("BASAMAKLARI ASAL MI KONTROLU ICIN BIR SAYI GIRINIZ:");
	scanf("%d" , &deger11);
	if(deger11 < 0){
		deger11 *= (-1);
	}
	basamaklar_asalMi(deger11);
	
	printf("\n");
	
	ikizAsalMi();
    return 0;
}
