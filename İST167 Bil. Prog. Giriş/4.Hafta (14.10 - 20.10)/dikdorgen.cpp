#include <stdio.h>
main(){
	double kenar1, kenar2, cevre, alan;
	// ornek olmasi icin double kullandik
	printf("Dikdortgen icin kenar uzunluklari:");
	scanf("%lf,%lf",&kenar1, &kenar2);
	printf("Kenar uzunluklari %.2f ve %.2f olan dikdortgenin\n", kenar1, kenar2);
	cevre=(kenar1+kenar2)*2;
	alan=kenar1*kenar2;
	printf("Cevresi %6.2f\n",cevre);
	printf("Alani %6.2f dir.", alan);
}