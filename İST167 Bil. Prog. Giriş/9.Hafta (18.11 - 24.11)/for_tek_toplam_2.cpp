#include<stdio.h>
// 1-n tek sayilarin toplami
main(){
	int i,n, toplam=0;
	printf("n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++) //i=1, ... ,n
        if(i%2 != 0)
		  toplam=toplam+i;
	printf("toplam=%d\n",toplam);
}