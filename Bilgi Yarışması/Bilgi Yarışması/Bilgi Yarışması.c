#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void HosGeldinizFonksiyonu() {
	printf("Bilgi yarismamiza hosgeldiniz asagidaki kurallari okuyunuz\nYarismamiz puan tabanlidir\nYarismaya baslamadan once kayitli degilseniz kayit olmayi unutmayiniz..\n");
}

int SecimFonksiyonu() {
	int secim;
	printf("\nLutfen asagidaki seceneklerden birini seciniz\n[1]-Giris yap\n[2]-Kayit ol");
	printf("\nseciminiz:");
	scanf("%d", &secim);
	return secim;
}

int GirisYapFonksiyonu(char isim[200],char sifre[200]) {
	char isimveri[200], sifreveri[200];
	bool kontrol = false;
	while (kontrol == false) {
		printf("\nLutfen adinizi giriniz:");
		scanf("%s", &isimveri);
		printf("Lutfen sifrenizi giriniz:");
		scanf("%s", &sifreveri);
		if (strcmp(isim, isimveri) == 0 && strcmp(sifre, sifreveri) == 0) {
			printf("\nSisteme hosgeldiniz\n");
			kontrol = true;
		}
		else printf("\nHatali giris\n");
	}	
}

int KayitOlFonksiyonu() {
	char isim[200], sifre[200];
	printf("\nLutfen sisteme kayitli olacak adinizi giriniz:");
	scanf("%s", &isim);
	printf("Lutfen bir sifre belirleyiniz:");
	scanf("%s", &sifre);
	printf("\nBasarili bir sekilde kayit oldunuz\n\n***Giris ekranina yonlendiriliyorsunuz lutfen bekleyiniz...***\n");
	GirisYapFonksiyonu(isim,sifre);
}

int BilgiYarismasiFonksiyonu() {
	char cevap[2];
	int puan = 0;
	int can = 3;
	while (can != 0) {
		if (puan == 0) {
			printf("Yarisma basladi\nLutfen sorulari dikkatli okuyunuz");
			printf("\nPuaniniz:%d", puan);
			printf("\n\n[soru-1]:Turkiyenin baskenti hangi ildir?\n");
			printf("a.)Istanbul  b.)Ankara  c.)Izmir  d.)Adana");
			printf("\ncevap:");
			scanf("%s", &cevap);
			if (strcmp(cevap, "b") == 0) {
				puan += 10;
				printf("Tebrikler soruyu dogru bildiniz\nPuaniniz:%d", puan);
				printf("\nCaniniz: % d", can);
			}
			else {
				printf("Hatli cevap dogru cevap b sikkidir");
				printf("Puaniniz:%d", puan);
				can -= 1;
				printf("Kalan caniniz:%d", can);
			}
		}
		if (puan == 10) {
			printf("\n\n[soru-2]:Asagidakilerden hangisi digerlerinden daha önce  kurulmustur?\n");
			printf("a.)Fenerbahce  b.)Galatasaray  c.)Besiktas  d.)Trabzon");
			printf("\ncevap:");
			scanf("%s", &cevap);
			if (strcmp(cevap, "c") == 0) {
				puan += 10;
				printf("Tebrikler soruyu dogru bildiniz\nPuaniniz:%d", puan);
				printf("\nCaniniz: % d", can);
			}
			else {
				printf("Hatli cevap dogru cevap c sikkidir");
				printf("Puaniniz:%d", puan);
				can -= 1;
				printf("Kalan caniniz:%d", can);
			}
		}
		if (puan == 20) {
			printf("\n\n[soru-3]:Asagidakilerden hangisi ilkokullarda verilen derslerden biri degildir?\n");
			printf("a.)Hayat Bilgisi  b.)Ýngilizce  c.)Matematik  d.)Ýnkilap");
			printf("\ncevap:");
			scanf("%s", &cevap);
			if (strcmp(cevap, "d") == 0) {
				puan += 10;
				printf("Tebrikler soruyu dogru bildiniz\nPuaniniz:%d", puan);
				can = 0;
			}
			else {
				printf("Hatli cevap dogru cevap d sikkidir");
				printf("Puaniniz:%d", puan);
				can -= 1;
				printf("Kalan caniniz:%d", can);
			}
		}
	}
	return puan;
}

int YarismaSonFonksiyonu(int puan) {
	printf("\n\nYarismamiz sona erdi\nPuaniniz:%d\n",puan);
	if (puan == 30) printf("Tebrikler kazandiniz\n");
	else printf("Tekrar deneyiniz..\n");
}

int main() {
	char isim[200] = "Ahmetay";
	char sifre[200] = "12345";

	HosGeldinizFonksiyonu();
	
	int secim = SecimFonksiyonu();
	
	if (secim == 1) {
		GirisYapFonksiyonu(isim,sifre);
	}
	else if(secim == 2) {
		KayitOlFonksiyonu();
	}

	int skor=BilgiYarismasiFonksiyonu();
	YarismaSonFonksiyonu(skor);

	return 0;
}