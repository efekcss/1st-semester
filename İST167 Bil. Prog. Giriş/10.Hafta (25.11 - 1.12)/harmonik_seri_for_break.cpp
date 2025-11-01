#include<stdio.h>
/* Harmonik seri öğeleri ve toplami

   	1, 1/2, 1/3, .... son terim < 0.10 oluncaya kadar
*/
main(){
	int i;
	float terim, toplam=0;
	for(i=1; i<=1000; i++){ // n'e buyuk sayi verelim
		terim=1.0/i;
		printf("%.3f ",terim);
		toplam=toplam+terim;
		if(terim<0.10)
			break;
	}
	printf("\nToplam=%.3f",toplam);
	printf("\nToplam %d tane terim hesaplandi.",i);
}
