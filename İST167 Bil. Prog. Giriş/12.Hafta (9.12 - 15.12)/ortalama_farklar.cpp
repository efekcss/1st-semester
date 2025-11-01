#include<stdio.h>
main(){
	int n,i, toplam;
	float ortalama;
	printf("n=");scanf("%d",&n);
	int x[n];
	toplam=0;
	for(i=0; i<n; i++){
		printf("%d. sayi=",i+1);
		scanf("%d",&x[i]);
		toplam += x[i];
	}
	ortalama=(float)toplam/n;
	printf("Ortalamadan farklar\n"); //baslik
	for(i=0; i<n; i++)
		printf("%f\n",x[i]-ortalama);
}