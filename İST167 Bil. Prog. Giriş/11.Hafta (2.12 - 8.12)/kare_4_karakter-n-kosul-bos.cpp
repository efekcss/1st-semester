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
	for(j=1; j<=n; j++){   //satir
	   for(i=1; i<=n; i++) //sutun
		  if(i==1 || i==n)
		    printf("%c ",k);
		  else if(j==1 || j==n) 
		    printf("%c ",k);
		  else
		    printf("%c ",' ');  
	   printf("\n");
	}	
}