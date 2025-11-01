#include<stdio.h>
main(){
	// klavyeden dizi okumak
	// kac tane?
	int n,i;
	double dizi[500]; //Max oge sayisi
	printf("dizinin kac tane ogesi var:");
	scanf("%d",&n);
	// dizi oku
	for(i=0; i<n; i++){
		printf("dizi[%d]:",i+1);
		scanf("%lf",&dizi[i]);
	}
	// Okunan diziyi ekranda gorelim
	printf("\n");
	for(i=0; i<n; i++)
		printf("dizi[%d]=%f\n",i,dizi[i]);
}