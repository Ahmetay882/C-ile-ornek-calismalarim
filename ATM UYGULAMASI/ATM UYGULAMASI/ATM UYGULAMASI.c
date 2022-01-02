#include <stdio.h>
#include <stdlib.h>


int main() {

	int islem=8;
	float tutar;
	float bakiye = 1000;


	printf("**ATMMIZDE YABILABILEN ISLEMLER:**");
	printf("\n\n1-Para Cekme\n2-Para Yatirma\n3-Havale Yapma(para gonderme)\n4-Bakiye Sorgulama\n5-Kart Iadesi\nCikis Yapmak Icin 0'ya Basin\n");
	
	
	while (islem != 0) {

		printf("\nYapacaginiz islemi giriniz:");
		scanf("%d", &islem);

		switch (islem) {

		case 1:
			printf("\nyapmak istediginiz islem 'para cekme' islemidir");
			printf("Bakiyeniz %f TL\n", bakiye);
			printf("Ne Kadar Cekmek Istiyorsunuz:");
			scanf("%f", &tutar);
			if (tutar > bakiye) {
				printf("Yetersiz Bakiye..");
				break;
			}
			else {
				bakiye -= tutar;
				printf("Kalan Bakiyeniz:%f dir", bakiye);
				break;
			}

		case 2:
			printf("\nyapmak istediginiz islem 'para yatirma' islemidir\n");
			printf("Bakiyeniz %f TL\n", bakiye);
			printf("yatýrmak istediginiz miktarý giriniz:");
			scanf("%f", &tutar);
			bakiye += tutar;
			printf("guncel bakiyeniz %f TL'dir", bakiye);
			break;

		case 3:
			printf("\nyapmak istediginiz islem 'havale yapma(para gonderme)' islemidir\n");
			printf("Bakiyeniz %f TL\n", bakiye);
			printf("Havale yapmak istediginiz miktarý giriniz");
			scanf("%f", &tutar);
			if (tutar > bakiye) {
				printf("Yetersiz Bakiye..");
				break;
			}
			else {
				bakiye -= tutar;
				printf("Kalan bakiyeniz %f TL\n", bakiye);
				break;
			}

		case 4:
			printf("Yapmak istediginiz islem 'Bakiye sorgulama islemidir'\n");
			printf("Bakiyeniz %2f TL dir\n", bakiye);
			break;

		case 5:
			printf("Kartiniz iade ediliyor lutfen bekleyiniz");
			break;

		}
	}
	return 0;
}