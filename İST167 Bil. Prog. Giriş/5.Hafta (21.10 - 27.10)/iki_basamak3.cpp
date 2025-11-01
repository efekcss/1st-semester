#include<stdio.h>
main(){
	// Klavyeden iki basamakli pozitif bir tamsayi okuyun
	// Hata kontrolu yapin
	// Basamaklarini toplayin
	int sayi;
	int onlar, birler, toplam;
	printf("iki basamakli pozitif tamsayi yazin:");
	scanf("%d",&sayi);
	printf("Sayi=%d\n",sayi);
	// Hata kontrolu
	if(sayi>=10 && sayi<100){
		printf("Dogru veri\n");
		birler=sayi%10;
		onlar=sayi/10; // TAMSAYI bölmesi yapar
		toplam=onlar + birler;
		printf("Basamaklar toplami=%d",toplam);}
	else
		printf("Hatali veri\n");
}