#include<stdio.h>
main(){
	// ++ ve -- operatorleri
	// i=i+1 yerine i++ veya ++i yazılabilir
	// i++ yazılırsa: önce i'yi kullan sonra i'yi 1 arttır
	// ++i yazılırsa: önce i'yi arttır sonra i'yi kullan
	int i,j;
	i=3;
	j=i++;
	printf("i=%d j=%d\n",i,j);
	// kesirli olursa
	float m,n;
	m=3.2;
	n=m++;
	printf("i=%f j=%f\n",m,n);
	// çalışıyor
	//++i
	i=3;
	j=++i;
	printf("i=%d j=%d\n",i,j);
	//
	i=3;
	++i;
	printf("i=%d\n",i);
	//
	i=3;
	i++;
	printf("i=%d\n",i);
	//
	i=3;
	printf("i=%d\n",++i);
	//
	i=3;
	printf("i=%d\n",i++);
	printf("i=%d\n",i);	

	
}