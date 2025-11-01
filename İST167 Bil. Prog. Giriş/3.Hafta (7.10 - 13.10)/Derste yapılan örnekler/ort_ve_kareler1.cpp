#include<stdio.h>
main(){
	// Bu program üç tane kesirli sayının ortalamasını ve kareler toplamini
	// hesaplar
	float sayi1, sayi2, sayi3, ortalama, kareler_toplami;
	// 3 sayi oku (tek satir)
	printf("3 tane sayi giriniz:");
	scanf("%f %f %f",&sayi1,&sayi2, &sayi3);
	// ortalamayi hesapla
	ortalama=(sayi1 + sayi2 + sayi3) / 3;
	kareler_toplami=sayi1*sayi1 + sayi2*sayi2 + sayi3*sayi3;
	
	// Ekran
	printf("ortalama=%.3f\n",ortalama);
	printf("kareler toplami=%f",kareler_toplami);
}