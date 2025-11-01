#include<stdio.h>
// 1-n tek sayilarin toplami
main(){
	int i,n, toplam=0;
	printf("n:");
	scanf("%d",&n);
	for(i=1; i<=n; i+=2) //i=1, ... ,n
        toplam=toplam+i;
        // toplam += i;
	printf("toplam=%d\n",toplam);
}