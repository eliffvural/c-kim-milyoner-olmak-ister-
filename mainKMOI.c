#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hosgeldinizfonksiyonu(){
	printf("*** Kim Milyoner Olmak Ister Yarismasina Hosgeldiniz ***\n");
	printf("========================================================\n");
}
 void bilgilendirmefonksiyonu(){
 	printf("Sorulari cevaplandirmak icin;\n[a] secenegi icin 1'e,\n[b] secenegi icin 2'ye,\n[c] secenegi icin 3'e,\n[d] secenegi icin 4'e basiniz.\n\n Yarismaya baslamak icin lutfen 1'e basiniz.\n=================\n Yarisma basliyor\n=================\n");
 }

int main(int argc, char *argv[]) {
	
	hosgeldinizfonksiyonu();
	bilgilendirmefonksiyonu();
	int cevap, secim, para;
	para=0;
	
	printf("[Soru 1]- Ataturk kac yilinda dogdu?\na=1900\nb=1881\nc=1889\nd=1789");
	scanf("%d", &cevap);
	if(cevap==2){
	    para+=500;
		printf("Tebrikler. Cevabiniz dogru...\nKazandiginiz para: %d TL.\n Devam etmek icin lutfen 1'e basiniz.. Yarismadan cekilmek icin 2'ye basabilirsiniz..\n", para);
		scanf("%d", &secim);
		if(secim==1){
		    printf("Soru 2 ekrana geliyor. Lutfen bekleyiniz.\n\n");
		   	printf("[Soru 2]- Turkiye'nin baskenti neresidir?\na=Istanbul\nb=Ankara\nc=Konya\nd=Samsun");
        	scanf("%d", &cevap);
        	if(cevap==2){
	        printf("Tebrikler. Cevabiniz dogru...\n1.000.000 TL kazandiniz..."); 
        	}
	else{
	    printf("Cevabiniz yanlis. Dogru cevap b secenegiydi. Maalesef yarisma burada bitti. %d TL ile sizi yarismadan ugurluyoruz.", para);
	}
		}
		else if(secim==2){
		    printf("Yarismadan cekildiniz. %d TL ile sizi ugurluyoruz.", para);
		}
	}
	else{
		printf("Cevabiniz yanlis. Dogru cevap b secenegiydi. Maalesef yarisma burada bitti. Sizi 0 TL ile buradan ugurluyoruz.");
	}
	
	return 0;
}
