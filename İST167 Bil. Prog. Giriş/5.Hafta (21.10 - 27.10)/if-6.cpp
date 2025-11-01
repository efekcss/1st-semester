#include<stdio.h>
main(){
	// if ornek buyuk parantez ve ayri if ve sifir kontrolu
	int sayi;
	printf("Bir tamsayi yaziniz:");
	scanf("%d",&sayi);
	if (sayi>0){
	   printf("Sayi sifirdan buyuktur.\n");
	   printf("Sayi=%d\n",sayi);}
	if (sayi<0) {
	   printf("Sayi sifirdan kucuktur.\n");
	   printf("Sayi=%d\n",sayi);}
	else { // YANLiS
	   printf("Sayi sifira esittir.\n");
	   printf("Sayi=%d\n",sayi);}
	
	printf("\nprogram sonu");
}