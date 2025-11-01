#include<stdio.h>
main(){
	// if ornek buyuk parantez ve ayri if ve sifir kontrolu
	int sayi;
	printf("Bir tamsayi yaziniz:");
	scanf("%d",&sayi);
	if (sayi>0){
	   printf("Sayi sifirdan buyuktur.\n");
	   printf("Sayi=%d",sayi);}
	if (sayi<0) {
	   printf("Sayi sifirdan kucuktur.\n");
	   printf("Sayi=%d",sayi);}
	if (sayi==0) {
	   printf("Sayi sifira esittir.\n");
	   printf("Sayi=%d",sayi);}
	
	printf("\nprogram sonu");
}