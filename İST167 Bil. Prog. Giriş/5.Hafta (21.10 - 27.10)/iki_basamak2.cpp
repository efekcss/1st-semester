#include<stdio.h>
main(){
	// Klavyeden iki basamakli pozitif bir tamsayi okuyun
	// Hata kontrolu yapin
	int sayi;
	printf("iki basamakli pozitif tamsayi yazin:");
	scanf("%d",&sayi);
	printf("Sayi=%d\n",sayi);
	// Hata kontrolu
	if(sayi>=10 && sayi<100)
		printf("Dogru veri\n");
	else
		printf("Hatali veri\n");
}