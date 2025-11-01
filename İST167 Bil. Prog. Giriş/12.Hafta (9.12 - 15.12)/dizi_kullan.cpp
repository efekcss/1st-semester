#include<stdio.h>
main(){
	int c[]={12,18,26,33,98};
	int a;
	a=c[1];
	printf("%d\n",a);
	c[3]=67;
	printf("%d\n",c[3]);
	a=2;
	printf("%d\n",c[a]);
	

}