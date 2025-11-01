#include<stdio.h>
// Dizide arama problemi
main(){
	int n,i,aranacak;
	int dizi[100];
	printf("n=");scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("%d. sayi=",i);
		scanf("%d",&dizi[i]);
	}
	printf("Aranacak sayi="); scanf("%d",&aranacak);
	// dizide ara 3
	i=0;
	while(i<n && aranacak!=dizi[i]){
		i++;
	}
	if(i!=n)
		printf("Bulundu");
	else
		printf("Bulunmadi");
	
}