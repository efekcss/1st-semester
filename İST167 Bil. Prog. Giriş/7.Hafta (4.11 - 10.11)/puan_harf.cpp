// 0-100 arasinda girilen puan icin harf notu
// 80-100 arası A (80 dahil)
// 70 - 80 arası B (80 haric)
// 60 - 70 arası C
// 50 - 60 arası D
// 0-50 arası F
#include<stdio.h>
main(){
	int puan;
	printf("0-100 arasinda puan="); scanf("%d",&puan);
	if(puan <0 || puan>100)
		printf("Hatali puan");
	else{ //buyuk parantez gerekli degil
		if(puan>=80)
			printf("Harf notu = A");
		else if(puan>=70 ) //80'den kucuk demektir
			printf("Harf notu = B");
		else if(puan>=60) //70'den kucuk demektir
			printf("Harf notu = C");
		else if(puan>=50) //60'den kucuk demektir
			printf("Harf notu = D");
		else //50'den kucuk demektir
			printf("Harf notu = F");
	}
}