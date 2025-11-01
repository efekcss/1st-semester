#include<stdio.h>
main(){
	// if ornek else if kalibi
	int sayi;
	printf("Bir tamsayi yaziniz:");
	scanf("%d",&sayi);
	if (sayi>0){
	   printf("Sayi sifirdan buyuktur.\n");
	   printf("Sayi=%d\n",sayi);}
	else if (sayi<0) {
	   printf("Sayi sifirdan kucuktur.\n");
	   printf("Sayi=%d\n",sayi);}
	else { // DOGRU
	   printf("Sayi sifira esittir.\n");
	   printf("Sayi=%d\n",sayi);}
	
	printf("\nprogram sonu");
}