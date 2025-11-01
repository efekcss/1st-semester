// dort islem yapan prg
// iki tane kesirli sayi ve aralarindaki islemi (+ - * /) girin
// sonucu ekranda gosterin
#include<stdio.h>
main(){
	float sayi1, sayi2, sonuc;
	char islem;
	printf("Sayi 1:");
	scanf("%f",&sayi1);
	printf("islem:");
	scanf("%s",&islem);
	printf("Sayi 2:");
	scanf("%f",&sayi2);
	printf("%f %c %f = ",sayi1, islem, sayi2);
	//
	if(islem=='+')
		sonuc=sayi1+sayi2;
	else if(islem=='-')
		sonuc=sayi1-sayi2;
	else if(islem=='*')
		sonuc=sayi1*sayi2;
	else if(islem=='/')
		sonuc=sayi1/sayi2;
	else
		printf("Hatali islem");
	printf("%f",sonuc);
	
}