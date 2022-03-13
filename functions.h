#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char cikis[256];
void icerigir();
void hayirgirme();
void yemek();
void icecek();
void oyun();
static char istek[256];

void hosgeldiniz(char* name, char* cinsiyet) {
	
	printf("\nCagan'ınn mekanına hoş geldiniz %s %s. İçeri buyurmaz mısınız?", cinsiyet, name);
	printf("\n[%s]: ", name);
	scanf("%s", cikis);
	if (strcmp(cikis, "Hayır") == 0 || strcmp(cikis, "hayır") == 0) {
		hayirgirme();
	}
	else if (strcmp(cikis, "Evet") == 0 || strcmp(cikis, "evet") == 0) {
		icerigir(name);
	}
}

void icerigir(char* name) {
	printf("[Cagan]: Size nasıl yardımcı olabilirim? (İçecek/Yemek/Oyun)");
	printf("\n[%s]: ", name);
	scanf("%s", istek);

	if (strcmp(istek, "Yemek") == 0 || strcmp(istek, "yemek") == 0) {
		yemek();
	}
	else if (strcmp(istek, "İçecek") == 0 || strcmp(istek, "içecek") == 0) {
		icecek();
	}
	else {
		oyun();
	}
}

void hayirgirme() {
	printf("\nBir dahaki sefere görüşmek üzere.\n");
	exit(1);
}

void yemek() {
	
}

void icecek() {

}

void oyun() {

}
