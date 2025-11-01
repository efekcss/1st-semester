#include<stdio.h>
main(){
	int i,j;
	for(j=1; j<=5; j++){
	   printf("%d\t",j);
	   for(i=1; i<=10; i++)
		  printf("i=%d\t",i);
	   printf("\n");
	}	
}