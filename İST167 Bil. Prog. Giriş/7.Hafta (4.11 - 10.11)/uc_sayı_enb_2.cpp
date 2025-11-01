// Klavyeden okunan 3 sayidan en buyuk
// olanı bulan ve ekranda gosteren prg
#include<stdio.h>
main(){
	int sayi1,sayi2,sayi3,enb;
	printf("3 tane sayi giriniz:");
	scanf("%d %d %d", &sayi1,&sayi2,&sayi3);
	enb=sayi1;
	if(sayi2>=enb)
		enb=sayi2;
	if(sayi3>=enb)
		enb=sayi3;
	printf("en buyuk=%d",enb); 
}