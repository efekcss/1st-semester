#include<stdio.h>
// n tane musteri, bir urunu 1-10 araliginda puanliyor.
// Puanlarin sayisini hesaplayin ve yazdirin.
main(){
	int n, puan, i, sayac[11];
	printf("musteri sayisi="); scanf("%d",&n);
	for(i=1;i<11;i++)
		sayac[i]=0;
	for(i=0;i<n;i++){
		printf("%d. musteri puani=",i+1);
		scanf("%d",&puan);
		sayac[puan] += 1;
	}
	printf("Puan sayilari\n");
	printf("Puan	Puan sayisi\n");
	printf("____    ___________\n");
	for(i=1; i<11; i++)
	   printf("%d\t%d\n",i,sayac[i]);
}