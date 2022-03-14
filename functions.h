#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tablolar.h"
#include <ctype.h>
#define A1 1
#define A2 2
#define B1 3
#define B2 4
char cikis[256];
void icerigir();
void hayirgirme();
void yemek();
void icecek();
void oyun();
void ps1();

char istek[256];
static int yiyecek_istek;
static int icecek_istek;

typedef struct {
    int money;
    char* Name;
    char* Cinsiyet;
} user;

typedef struct { char *key; int val; } t_symstruct;

user primary;

void hosgeldiniz(char* name, char* cinsiyet) {
	printf("\n\
##################################\n\
# Cagan'ın mekanına hoş geldiniz #\n\
##################################");
    primary.Name = name;
    primary.Cinsiyet = cinsiyet;
    primary.money = 100;

    icerigir(primary.Name, primary.money, primary.Cinsiyet);
}

void icerigir(char* name, int money, char* cinsiyet) {
	printf("\n[Cagan]: Merhaba %s %s Size nasıl yardımcı olabilirim? (İçecek/Yemek/Oyun)", cinsiyet, name);
	printf("\n[$%d] %s : ", money, name);
	scanf("%s", istek);

	if (strcmp(istek, "Yemek") == 0 || strcmp(istek, "yemek") == 0) {
		yemek(name, money);
	}
	else if (strcmp(istek, "İçecek") == 0 || strcmp(istek, "içecek") == 0) {
		icecek(name, money);
	}
	else {
		oyun();
	}
}

void hayirgirme() {
	printf("\nBir dahaki sefere görüşmek üzere.\n");
	exit(1);
}

void yemek(char* name, int money) {
    while(istek != "evet") {
	printf("[Cagan]: Tabiki ne istersiniz ?");
    printf("%s", yiyecektablosu);
    ps1(name, money);
    scanf("%d", &yiyecek_istek);
    if(money >= yiyecek_fiyat(yiyecek_istek)) {
        money -= yiyecek_fiyat(yiyecek_istek);
    }
    else {
        printf("Yeterli paranız yok!");
        icerigir(name, money, primary.Cinsiyet);
    }
    printf("[Cagan]: Hemen geliyor. Başka bir istediğiniz var mıdır?(Menu/Oyun/Yemek/İçecek)\n");
    ps1(name, money);
    scanf("%s", istek);

    if (strcmp(istek, "yemek") == 0 || strcmp(istek, "Yemek") == 0) {
        yemek(name, money);
    }
    else if (strcmp(istek, "oyun") == 0 || strcmp(istek, "Oyun") == 0) {
        oyun();
    }
    else if (strcmp(istek, "içecek") == 0 || strcmp(istek, "İçecek") == 0) {
        icecek(name, money);
    }
    else if (strcmp(istek, "menu") == 0 || strcmp(istek, "Menu") == 0) {
        icerigir(name, money, primary.Cinsiyet);
    }
    else if (strcmp(istek, "Çık") == 0 || strcmp(istek, "çık") == 0) {
        hayirgirme();
    }
    else {
        icerigir(name, money, primary.Cinsiyet);
    }
    }
}

void icecek(char* name, int money) {
    while(istek != "evet") {
        printf("[Cagan]: Tabiki ne istersiniz ?");
    printf("%s", icecektablosu);
    ps1(name, money);
    scanf("%d", &icecek_istek);
    if(money >= icecek_fiyat(icecek_istek)) {
        money -= icecek_fiyat(icecek_istek);
    }
    else {
        printf("Yeterli paranız yok!");
        icerigir(name, money, primary.Cinsiyet);
    }
    printf("[Cagan]: Hemen geliyor. Başka bir istediğiniz var mıdır?(Menu/Oyun/Yemek/İçecek)\n");
    ps1(name, money);
    scanf("%s", istek);

    if (strcmp(istek, "yemek") == 0 || strcmp(istek, "Yemek") == 0) {
        yemek(name, money);
    }
    else if (strcmp(istek, "oyun") == 0 || strcmp(istek, "Oyun") == 0) {
        oyun();
    }
    else if (strcmp(istek, "içecek") == 0 || strcmp(istek, "İçecek") == 0) {
        icecek(name, money);
    }
    else if (strcmp(istek, "menu") == 0 || strcmp(istek, "Menu") == 0) {
        icerigir(name, money, primary.Cinsiyet);
    }
    else if (strcmp(istek, "Çık") == 0 || strcmp(istek, "çık") == 0) {
        hayirgirme();
    }
    else {
        icerigir(name, money, primary.Cinsiyet);
    }
    }
}

void oyun() {

}

void ps1(char* name, int money) {
    printf("[$%d] %s : ", money, name);
}
