#include<stdio.h>
main(){
	//Matris
	//Bildirim, tanım
	int matris_1[15][5]; //once satir sayisi
	int m,n;
	m=15; n=5;
	int matris_2[m][n];  // !!! m ve n'nin degeri onceden verilmeli
	// ilk deger vererek bildirim
	int matris_3[3][2]={{23,45},{65,32},{42,65}};
	// alt parantezler yazilmayabilir
	int matris_4[3][2]={23,45,65,32,42,65};
	//int matris_5[][]={23,45,65,32,42,65}; //Gecersiz
	int i,j;
	for(i=0;i<3;i++){
	   for(j=0;j<2;j++)
	      printf("%d ",matris_3[i][j]);
	   printf("\n")  ;
	}	
	
}