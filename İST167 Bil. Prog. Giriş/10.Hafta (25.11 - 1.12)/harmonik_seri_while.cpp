#include<stdio.h>
/* Harmonik seri öğeleri ve toplami

   	1, 1/2, 1/3, .... son terim < 0.10 oluncaya kadar
   	while dongusu ile
*/
main(){
	int i;
	float terim, toplam=0;
	i=1; terim=1;
	while(!(terim<0.10)){ //değilleme yerine terim>=0.10 kullanılabilir.
		terim=1.0/i;
		printf("%.3f ",terim);
		toplam=toplam+terim;
	 	i=i+1;	
	}
	printf("\nToplam=%.3f",toplam);
	printf("\nToplam %d tane terim hesaplandi.",i-1);
}
