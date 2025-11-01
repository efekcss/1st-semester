#include<stdio.h>
/* kendisine kadar sayilarin toplamından
   olusan seri: 100'e kadar
   	1, 3, 6, 10, ... , n 
*/
main(){
	int i=1, toplam=1;
	while(toplam<=100){
	    printf("%d, ",toplam);
		i=i+1;
		toplam += i;
		}
}