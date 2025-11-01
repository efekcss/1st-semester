#include<stdio.h>
// karakter kare nxn
// karakter okunacak
// satir sayisi değişebilsin
// n<=100 degilse tekrar n istesin
main(){
	int i,j,n;
	char k;
	printf("karakter:");
	scanf("%s",&k);
	do{
		printf("satir sayisi:");
		scanf("%d",&n);
		if(n<=100){
			for(j=1; j<=n; j++){
			   for(i=1; i<=n; i++)
				  printf("%c",k);
			   printf("\n");
			}
		}
		else
			printf("Kusura bakma. n<=100 olmali.\n");
	}while(n>100);
}