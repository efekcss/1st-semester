#include<stdio.h>
// karakter kare 5x5
// karakter okunacak
// satir sayisi değişebilsin
main(){
	int i,j,n;
	char k;
	printf("karakter:");
	scanf("%s",&k);
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
		printf("Kusura bakma.");
}