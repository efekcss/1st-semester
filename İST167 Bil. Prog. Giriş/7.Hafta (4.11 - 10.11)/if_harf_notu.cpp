// Harf notu okunan bir ogrencinin
// gecme kalma durumunu ekranda gosteren prg
// Harf notlari: A, B, C, F
#include<stdio.h>
main(){
	char harf;
	printf("Harf notu:");
	scanf("%c",&harf);
	if(harf=='A' || harf=='a')
		printf("En yuksek notla gectiniz.");
	else if(harf=='B' || harf=='b')
		printf("Yuksek notla gectiniz.");
	else if(harf=='C'|| harf=='c')
		printf("Gectiniz");
	else if(harf=='F'|| harf=='f')
		printf("Kaldiniz.");
	else
		printf("Hata: Gecersiz not");
}