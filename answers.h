#include <stdio.h>

char ahmet_cevap[256] = "\n\
1. Merhaba\n\
2. Naber\n\
";

char mehmet_cevap[256] = "\n\
1. Merhaba\n\
2. Naber\n\
";

char john_cevap[256] = "\n\
1. Hi!\n\
2. How are you?\n\
";

void answer(char* name) {
    	if (strcmp(name, "Ahmet") == 0 || strcmp(name, "ahmet") == 0) {
    	char *answer1 = "%s : I dont want to talk!", name;
    	char *answer2 = "%s : Hey bro!", name;
    	char *answer3 = "%s : Beautiful place, right?", name;
    	char *answer4 = "%s : A fucking place", name;
    	char *arr[50] = {(answer1[rand()%5]), (answer2[rand() % 5]), (answer3[rand() % 5]), (answer4[rand() % 5])};
	printf("%s", arr);
	konus();
    }
	else {
	     /*Other people will be added*/
	} 
}
