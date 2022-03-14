#include <stdio.h>
#include <string.h>

char icecektablosu[512] = "                     \n\
        İçecekler        |          Alkol       \n\
-------------------------|-----------------------\n\
1 - Alp Cola : 5TL       | 4 - Bira : 20TL       \n\
2 - Enginar Suyu : 10TL  | 5 - Şarap : 30TL      \n\
3 - Havuç Suyu : 15TL    | 6 - Şampanya : 50TL   \n\
";

char yiyecektablosu[512] = "                          \n\
    Ana Yemekler        |   Diğer yiyecekler           \n\
------------------------|--------------------           \n\
1 - Kurufasulye : 10TL  | 4 - Hıyar(adanali olan) : 20TL \n\
2 - Izgara Köfte : 25TL | 5 - Domates : 5TL               \n\
3 - Adana Kebap : 20TL  | 6 - Enginar : 30TL               \n\
";

int yiyecek_fiyat(int no) {
    switch(no) {
        case 1:
            return(10);
        case 2:
            return(25);
        case 3:
            return(20);
        case 4:
            return(20);
        case 5:
            return(5);
        case 6:
            return(30);
        default:
            printf("Böyle bir yiyecek yok!");
            return 0;
    }
}

int icecek_fiyat(int no) {
    switch(no) {
        case 1:
            return(5);
        case 2:
            return(10);
        case 3:
            return(15);
        case 4:
            return(20);
        case 5:
            return(30);
        case 6:
            return(50);
        default:
            printf("Böyle bir içecek yok!");
            return 0;
    }
}
