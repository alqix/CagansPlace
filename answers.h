#include <stdio.h>

char ahmet_cevap[256] = "\n\
1. Merhaba\n\
2. Naber\n\
";

char mehmet_cevap[256] = "\n\
1. Merhaba\n\
2. Naber\n\
";

const char* ahmet_answer(int no) {
    switch(no) {
        case 1:
            return "Nasılsın";
        case 2:
            return "İyi senden naber?";
        default:
            return "Böyle bir değer yok";
    }
}

const char* mehmet_answer(int no) {
    switch(no) {
        case 1:
            return "Nasılsın";
        case 2:
            return "İyi senden naber?";
        default:
            icerigir(primary.Name, primary.money, primary.Cinsiyet);
    }
}
