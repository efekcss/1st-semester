// Klavyeden okunan 3 sayidan en buyuk
// olanı bulan ve ekranda gosteren prg
#include<stdio.h>
main(){
	int sayi1,sayi2,sayi3;
	printf("3 tane sayi giriniz:");
	scanf("%d %d %d", &sayi1,&sayi2,&sayi3);
	if(sayi1>=sayi2 && sayi1>=sayi3)
		printf("Sayi 1 buyuktur.");
	else if(sayi2>=sayi1 && sayi2>=sayi3 )
		printf("Sayi 2 buyuktur.");
	else
		printf("Sayi 3 buyuktur.");
}