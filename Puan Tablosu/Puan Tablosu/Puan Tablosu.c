#include <stdio.h>
#include <stdlib.h>

int main() {

	int puan = 0, atilan, yenilen, sayi;

	printf("islemin baslamasini ve devam etmesini istiyorsaniz lutfen 1'e basiniz\nislemin sonlanmasini istiyorsaniz 1 haricinde herhangi bir sayiya basabilirsiniz:");
	scanf("%d", &sayi);

	while (sayi == 1) {

		printf("atilan ve yenilen gol sayisini giriniz:");
		scanf("%d %d", &atilan, &yenilen);
		printf("atilan gol sayisi:%d\nyenilen gol sayisi:%d\n", atilan, yenilen);

		if (atilan > yenilen) {
			puan = puan + 3;
			printf("tebrikler\ngalibiyet ald�n�z guzel oyundu..");
			printf("Guncel puan durumu=%d\n", puan);
		}

		else if (atilan < yenilen) {
			puan = puan + 0;
			printf("uzgunuz\nmaglubiyet aldiniz daha iyi haz�rlan�p bir dahaki sefere galibiyetle sonu�landirmanizi umiyoruz..");
			printf("Guncel puan durumu=%d\n", puan);
		}

		else {
			puan = puan + 1;
			printf("tebrikler\nberaberlikle sonu�land� ama olsun iyi oyundu bu oyunun �zerine koyarak galibiyet alabilirisiniz..");
			printf("Guncel puan durumu=%d\n", puan);
		}

		printf("islemin baslamasini ve devam etmesini istiyorsaniz lutfen 1'e basiniz\nislemin sonlanmasini istiyorsaniz 1 haricinde herhangi bir sayiya basabilirsiniz:");
		scanf("%d", &sayi);

	}

	return 0;
}
