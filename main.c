#include <stdio.h>
#include <string.h>
#include "functions.h"
#include <stdlib.h>

char* cagan = "					\n\
 ▄████▄   ▄▄▄        ▄████  ▄▄▄       ███▄    █ \n\
▒██▀ ▀█  ▒████▄     ██▒ ▀█▒▒████▄     ██ ▀█   █ \n\
▒▓█    ▄ ▒██  ▀█▄  ▒██░▄▄▄░▒██  ▀█▄  ▓██  ▀█ ██▒\n\
▒▓▓▄ ▄██▒░██▄▄▄▄██ ░▓█  ██▓░██▄▄▄▄██ ▓██▒  ▐▌██▒\n\
▒ ▓███▀ ░ ▓█   ▓██▒░▒▓███▀▒ ▓█   ▓██▒▒██░   ▓██░\n\
░ ░▒ ▒  ░ ▒▒   ▓▒█░ ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ▒ ▒ \n\
  ░  ▒     ▒   ▒▒ ░  ░   ░   ▒   ▒▒ ░░ ░░   ░ ▒░\n\
░          ░   ▒   ░ ░   ░   ░   ▒      ░   ░ ░ \n\
░ ░            ░  ░      ░       ░  ░         ░ \n\
░                                               \n\
						\n\
";
char isim[256];
char cinsiyet[256];
void login();
void giris();
char gir[256];

void main() {
	printf("%s", cagan);
    giris();
}

void login() {
	printf("Cagan'ın mekanı! Adınız nedir? : ");
	scanf("%s", isim);
	printf("Cinsiyet? (Bay/Bayan) : ");
	scanf("%s", cinsiyet);

	hosgeldiniz(isim, cinsiyet);
}

void giris() {

    printf("Karakterimiz girişi gördüğü zaman girip girmemek konusunda kararsız kaldı. Ama saat iyice geç olmuştu ve bir an önce karar vermesi gerekiyordu.");
    printf("\nGirecek misin?(Gir/girme) : ");
    scanf("%s", gir);

    if(strcmp(gir, "gir") == 0 || strcmp(gir, "Gir") == 0) {
        login();
    }
    else if (strcmp(gir, "girme") == 0 || strcmp(gir, "Girme")) {
        printf("Karakterimiz arkasını dönerek oradan uzaklaştı.\n");
        exit(1);
    }
    else {
        printf("Lütfen geçerli bir şey giriniz!");
        exit(1);
    }
}
