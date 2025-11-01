#include<stdio.h>
// 1-n tek ve cift sayilarin toplami
main(){
	int i,n, tek_toplam=0, cift_toplam=0;
	printf("n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++) //i=1, ... ,n
        if(i%2 != 0)
		  tek_toplam=tek_toplam+i;
		//else (i%2 == 0) // hata
		else if(i%2 == 0) // hata degil fakat gereksiz fazla if kullanimi
		  cift_toplam=cift_toplam+i;
	printf("Tek toplam=%d\n",tek_toplam);
	printf("Cift toplam=%d\n",cift_toplam);
}