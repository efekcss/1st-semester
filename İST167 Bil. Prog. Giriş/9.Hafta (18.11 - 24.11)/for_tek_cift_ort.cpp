#include<stdio.h>
// 1-n tek ve cift sayilarin otalamasi
main(){
	int i,n, tek_toplam=0, cift_toplam=0;
	int tek_sayisi=0, cift_sayisi=0;
	printf("n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++) //i=1, ... ,n
        if(i%2 != 0){
          tek_sayisi=tek_sayisi + 1;
		  tek_toplam=tek_toplam + i;}
		else{
 		  cift_sayisi=cift_sayisi + 1;
		  cift_toplam=cift_toplam + i;}
	printf("Tek toplam=%d\n",tek_toplam);
	printf("Cift toplam=%d\n",cift_toplam);
	printf("Tek sayilarin ortalamasi=%f\n",(float)tek_toplam/tek_sayisi);
	printf("Cift sayilarin ortalamasi=%f",(float)cift_toplam/cift_sayisi);
}