#include<stdio.h>
/* Harmonik seri öğeleri ve toplami

   	1, 1/2, 1/3, ....
*/
main(){
	int i,n;
	float terim, toplam=0;
	printf("n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		terim=1.0/i;
		// (float) terim=1/i;
		printf("%.3f ",terim);
		toplam=toplam+terim;
	}
	printf("\nToplam=%.3f",toplam);
}
