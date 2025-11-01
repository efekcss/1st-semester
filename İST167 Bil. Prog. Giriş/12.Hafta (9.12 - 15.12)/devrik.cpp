#include<stdio.h>
main(){
	int dizi[]={16,34,6,26,27}, yeni[5],i;
	for(i=0; i<5; i++)
	   yeni[i]=dizi[4-i];
	// Ekran
	for(i=0;i<5;i++)
	   printf("%d\n",yeni[i]);
}