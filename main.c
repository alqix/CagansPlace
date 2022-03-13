#include <stdio.h>
#include <string.h>
#include "functions.h"

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
static void login();

void main() {
	printf("%s", cagan);

	login();
}

static void login() {
	printf("Cagan'ın mekanı! Adınız nedir? : ");
	scanf("%s", isim);
	printf("Cinsiyet? (Bay/Bayan) : ");
	scanf("%s", cinsiyet);

	hosgeldiniz(isim, cinsiyet);
}
