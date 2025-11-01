#include<stdio.h>
// Dizide arama problemi
main(){
	int n,i,aranacak,isaret=0;
	int dizi[100];
	printf("n=");scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("%d. sayi=",i);
		scanf("%d",&dizi[i]);
	}
	printf("Aranacak sayi="); scanf("%d",&aranacak);
	// dizide ara 3
	i=0;
	while(i<n){
		if(aranacak==dizi[i]){
			isaret=1;
			break;}
		i++;
	}
	if(isaret==1)
		printf("Bulundu");
	else
		printf("Bulunmadi");
	
}