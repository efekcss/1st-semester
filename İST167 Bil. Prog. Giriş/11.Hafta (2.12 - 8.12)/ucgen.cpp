#include<stdio.h>
// karakter kare nxn
// karakter okunacak
// satir sayisi değişebilsin
main(){
	int i,j,n;
	char k;
	printf("karakter:");
	scanf("%s",&k);
	printf("satir sayisi:");
	scanf("%d",&n);
	// Ucgen yazsın
	for(j=1; j<=n; j++){
	   for(i=1; i<=j; i++)
		  printf("%c ",k);
	   printf("\n");
	}	
}