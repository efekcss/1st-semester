#include<stdio.h>
// karakter kare 5x5
// karakter okunacak
main(){
	int i,j;
	char k;
	printf("karakter:");
	scanf("%s",&k);
	for(j=1; j<=5; j++){
	   for(i=1; i<=5; i++)
		  printf("%c",k);
	   printf("\n");
	}	
}