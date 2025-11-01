#include<stdio.h>
main(){
	//Bir matrisin kosegen toplamini hesaplayip yazdirin
	int matris[3][3]={{23,12,25},{18,2,15},{65,15,10}};
	int i,toplam;
	toplam=0;
	for(i=0;i<3;i++)
	   toplam += matris[i][i];
	printf("kosegen toplami=%d",toplam);
}