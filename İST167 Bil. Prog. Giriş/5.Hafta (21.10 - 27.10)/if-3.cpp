#include<stdio.h>
main(){
	// if ornek else (degilse) kullanimi
	int sayi;
	printf("Bir tamsayi yaziniz:");
	scanf("%d",&sayi);
	if (sayi>0)
	   printf("Sayi sifirdan buyuktur.");
	else
	   printf("Sayi sifirdan buyuk degildir.");	   
	printf("\nprogram sonu");
}