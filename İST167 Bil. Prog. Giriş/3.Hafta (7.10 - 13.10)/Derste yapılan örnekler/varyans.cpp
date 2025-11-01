#include<stdio.h>
#include<math.h>
main(){
	// Bu program üç tane kesirli sayının ortalamasını ve kareler toplamini
	// varyansini, standart sapmasini hesaplar
	float sayi1, sayi2, sayi3, ortalama, kareler_toplami;
	float varyans, std_sapma;
	// 3 sayi oku (tek satir)
	printf("3 tane sayi giriniz:");
	scanf("%f %f %f",&sayi1,&sayi2, &sayi3);
	// ortalamayi hesapla
	ortalama=(sayi1 + sayi2 + sayi3) / 3;
	//kareler_toplami=sayi1*sayi1 + sayi2*sayi2 + sayi3*sayi3;
	kareler_toplami=pow(sayi1,2) + pow(sayi2,2) + pow(sayi3,2);
	// Varyans
	varyans=(pow(sayi1-ortalama,2)+pow(sayi2-ortalama,2)+pow(sayi3-ortalama,2))/3;
	// std sapma
	std_sapma=sqrt(varyans);
	// Ekran
	printf("ortalama=%.3f\n",ortalama);
	printf("kareler toplami=%f\n",kareler_toplami);
	printf("varyans=%f\n",varyans);
	printf("sandart sapma=%f",std_sapma);
}