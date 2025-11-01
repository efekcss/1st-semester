// Harf notu okunan bir ogrencinin
// gecme kalma durumunu ekranda gosteren prg
// Harf notlari: A, B, C, F
#include<stdio.h>
main(){
	char harf;
	printf("Harf notu:");
	scanf("%c",&harf);
	switch(harf){
		case 'a':
		case 'A':
			printf("En yuksek notla gectiniz.");
			break;
		case 'b':
		case 'B':
			printf("Yuksek notla gectiniz.");
			break;
		case 'c':
		case 'C':
			printf("Gectiniz.");
			break;
		case 'f':
		case 'F':
			printf("Kaldiniz.");
			break;
		default:
			printf("Hata: Gecersiz not.");
	}
}