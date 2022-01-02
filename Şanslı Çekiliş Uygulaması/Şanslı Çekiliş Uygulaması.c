#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	char isim[10], soyisim[10];
	int secim, sayi=100, randomsayi;

	printf("Sansli cekilis uygulamamýza hosgeldiniz\nLutfen kullanici bilgilerinizi giriniz\n\nisminiz:");
	scanf("%s", &isim);
	printf("soyisminiz:");
	scanf("%s", &soyisim);

	printf("\n\nAsagidaki islemlerden birini seciniz\n[1]-Sansli cekilis uygulamasina katil\n[2]-kullanici bilgilerini kontrol et\nseciminiz:");
	scanf("%d", &secim);

	do {
		if (secim == 1) {
			printf("\nSuanda sansli cekilis uygulamsindasiniz..");
			printf("\nSansli cekilis uygulamsindan cikmak icin sifira basiniz");
			printf("\nBir sayi giriniz (Gireceginiz sayi bir ile bes arasinda olmali) :");
			scanf("%d", &sayi);
			
			if (sayi > 5) {
				printf("\nBelirtilen aralikta sayi girilmedi\nTekrar sayi secimine yonlendiriliyorsunuz\n");
				continue;
			}

			srand(time(NULL));
			randomsayi = 1 + rand() % 5;

			if (randomsayi == sayi) {
				printf("\n\nGirdiginiz sayi:%d Cekilisteki sansli sayi:%d", sayi, randomsayi);
				printf("\n\nKazandiniz\n");
			}
			else {
				printf("\n\nGirdiginiz sayi:%d Cekilisteki sansli sayi:%d", sayi, randomsayi);
				printf("\n\nBir dahaki sefere\n");
			}
		}
		else if (secim == 2) {
			printf("\n\nisminiz: %s\nsoyisminiz: %s\n\n", isim, soyisim);
			
			do {
				printf("Sansli cekilis uygulamamýza hosgeldiniz\nLutfen kullanici bilgilerinizi giriniz\n\nisminiz:");
				scanf("%s", &isim);
				printf("soyisminiz:");
				scanf("%s", &soyisim);
				printf("\n\nAsagidaki islemlerden birini seciniz\n[1]-Sansli cekilis uygulamasina katil\n[2]-kullanici bilgilerini kontrol et\nseciminiz:");
				scanf("%d", &secim);

				if (secim == 1) {
					printf("\nSuanda sansli cekilis uygulamsindasiniz..");
					printf("\nSansli cekilis uygulamsindan cikmak icin sifira basiniz");
					printf("\nBir sayi giriniz (Gireceginiz sayi bir ile bes arasinda olmali) :");
					scanf("%d", &sayi);

					if (sayi > 5) {
						printf("\nBelirtilen aralikta sayi girilmedi\nTekrar sayi secimine yonlendiriliyorsunuz\n");
						continue;
					}

					srand(time(NULL));
					randomsayi = 1 + rand() % 5;

					if (randomsayi == sayi) {
						printf("\n\nGirdiginiz sayi:%d Cekilisteki sansli sayi:%d", sayi, randomsayi);
						printf("\n\nKazandiniz\n");
					}
					else {
						printf("\n\nGirdiginiz sayi:%d Cekilisteki sansli sayi:%d", sayi, randomsayi);
						printf("\n\nBir dahaki sefere\n");
					}
				}
				else if (secim == 2) {
					printf("\n\nisminiz: %s\nsoyisminiz: %s\n\n", isim, soyisim);
					break;
				}
			} while (sayi != 0);

		}	
	} while (sayi != 0);
	
	return 0;
}