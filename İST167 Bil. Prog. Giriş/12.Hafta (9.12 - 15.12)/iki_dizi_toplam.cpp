#include<stdio.h>
main(){
	// 2 dizi toplami
	int n,i;
	int a[100],b[100],c[100];
	printf("n<=100 olmak uzere bir tamsayi girin="); scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("a %d. ogesi=",i+1);
		scanf("%d",&a[i]);
		printf("b %d. ogesi=",i+1);
		scanf("%d",&b[i]);
		c[i]=a[i]+b[i];
	}
	printf("Toplam dizisi:\n");
	for(i=0; i<n; i++)
	   printf("%d\n",c[i]);
}