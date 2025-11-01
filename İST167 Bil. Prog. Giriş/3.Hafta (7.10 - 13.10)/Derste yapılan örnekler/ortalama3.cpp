#include<stdio.h>
main(){
	// Bu program üç tane kesirli sayının ortalamasını alır
	float sayi1, sayi2, sayi3, ortalama;
	// 3 sayi oku (tek satir)
	printf("3 tane sayi giriniz:");
	scanf("%f %f %f",&sayi1,&sayi2, &sayi3);
	//printf("sayi 1:"); 	scanf("%f",&sayi1);
	//printf("sayi 2:");	scanf("%f",&sayi2);
	//printf("sayi 3:");	scanf("%f",&sayi3);
	// ortalamayi hesapla
	ortalama=(sayi1 + sayi2 + sayi3) / 3;
	// Ekran
	printf("ortalama=%.3f",ortalama);
}