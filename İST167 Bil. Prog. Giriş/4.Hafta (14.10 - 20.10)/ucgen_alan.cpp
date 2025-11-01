#include<stdio.h>
main(){
	// ucgen alani
	int a,h;
	float alan;
	printf("taban:"); scanf("%d",&a);
	printf(	"yukseklik:"); scanf("%d",&h);
	//alan=a*h/2; // tamsayi bölmesi, kesri atar
	//alan=a*h/2.0; //veya
	alan=(float)a*h/2;
	printf("alan=%f",alan);
}