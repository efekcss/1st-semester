#include<stdio.h>
main(){
	/* n tane tansiyon degeri oku.
	   ortalama, en buyuk, en kucuk hesapla.
	   Ekranda goster
	*/
	int n,i;
	float tansiyon, toplam, enb, enk;
	printf("n="); scanf("%d",&n);
	enb=0; enk=100; //olabilecek enk ve enb degerler
	for(i=1; i<=n; i++){
		printf("%d. Tansiyon=",i);
		scanf("%f",&tansiyon);
		toplam += tansiyon;
		if(tansiyon>enb)
		  enb=tansiyon;
		if(tansiyon<enk)
		  enk=tansiyon;
	}
	printf("Ortalama=%0.2f ",toplam);
	printf("En buyuk=%0.2f ",enb);
	printf("En kucuk=%0.2f ",enk);
}