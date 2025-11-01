#include<stdio.h>
/* kendisine kadar sayilarin toplamından
   olusan seri:
   	1, 3, 6, 10, ... , n 
*/
main(){
	int i,n;
	printf("n:");
	scanf("%d",&n);
	int toplam=0;
	for(i=1; i<=n; i++){ //i=1, ... ,n
        toplam += i;
	    printf("%d, ",toplam);}
}