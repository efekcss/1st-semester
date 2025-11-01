#include<stdio.h>
main(){
	//Bir matrisin satir toplamlarini hesapla, dizi olustur
	int matris[3][3]={23,12,25,18,2,15,65,15,10};
	int dizi[3],i,j;
	// dizi elemanlarini sifirla
	for(i=0;i<3;i++)
		dizi[i]=0;
	//Satir toplamlarini hesapla
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		   dizi[i] += matris[i][j];
		}
	}
	//diziyi yazdir
	printf("Satir toplamlari\n");
	for(i=0;i<3;i++)
		printf("%d\n",dizi[i]);
	
}