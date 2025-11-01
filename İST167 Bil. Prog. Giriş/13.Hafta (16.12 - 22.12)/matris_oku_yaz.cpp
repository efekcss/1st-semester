#include<stdio.h>
main(){
	// matris oku
	int satir_sayisi, sutun_sayisi; // klavyeden oku
	int satir_indisi, sutun_indisi;
	printf("satir sayisi:"); scanf("%d",&satir_sayisi);
	printf("sutun sayisi:"); scanf("%d",&sutun_sayisi);
	float matris[satir_sayisi][sutun_sayisi];
	// Matrisi oku
	for(satir_indisi=0; satir_indisi<satir_sayisi; satir_indisi++){
		for(sutun_indisi=0; sutun_indisi<sutun_sayisi; sutun_indisi++){
			printf("matris[%d][%d]=",satir_indisi,sutun_indisi);
			scanf("%f",&matris[satir_indisi][sutun_indisi]);
		}
	}
	// Matrisi yaz
	for(satir_indisi=0; satir_indisi<satir_sayisi; satir_indisi++){
		for(sutun_indisi=0; sutun_indisi<sutun_sayisi; sutun_indisi++){
			printf("matris[%d][%d]=%f\n",satir_indisi,sutun_indisi,matris[satir_indisi][sutun_indisi]);
		}
	}
}