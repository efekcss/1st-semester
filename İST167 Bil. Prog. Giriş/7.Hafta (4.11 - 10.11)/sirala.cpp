// Klavyeden okunan 3 sayiyi
// kücükten buyuge sıralayan prg
#include<stdio.h>
main(){
	int sayi1,sayi2,sayi3,gecici;
	printf("3 tane sayi giriniz:");
	scanf("%d %d %d", &sayi1,&sayi2,&sayi3);
	if(sayi1<sayi2){
		gecici=sayi1;
		sayi1=sayi2;
		sayi2=gecici;
	}
	if(sayi1<sayi3){
		gecici=sayi1;
		sayi1=sayi3;
		sayi3=gecici;
	}
	if(sayi2<sayi3){
		gecici=sayi2;
		sayi2=sayi3;
		sayi3=gecici;
	}
	printf("sirali : %d\t%d\t%d",sayi1,sayi2,sayi3);
	// hatayi bulup duzeltin
	
}