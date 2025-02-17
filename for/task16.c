#include "../function.h"

void for_16(){
	printf("\n%s*Armstrong raqami*\n\n%sMisol sharti:\n%sn soni berilgan (n uch xonali son deb hisoblang). Shu son Armstrong raqami hisoblanadimi yoki yo'qmi? Agar Armsrong raqami bo'lsa, konsolga true, bo'lmasa false chiqaring. Masalan: n = 153, agar (1*1*1) + (5*5*5) + (3*3*3) = 153 bo'lsa, bu Armstrong raqami deyiladi. Bunda son raqamlarining kub (153, 3 xonali bo'lganligi uchun) darajasining yig'indisi o'sha sonning o'ziga teng. Masalan: n = 1634, (1*1*1*1) + (6*6*6*6) + (3*3*3*3 + (4*4*4*4) = 1634, bunda raqamlarinig 4 chi darajasini hisoblaymiz, chunki 1634 to'rt xonali son. Bu son ham Armstrong raqam deyiladi.\n\n%sNamuna:\n%sInput: %s153\n%sOutput: %strue\n\n%sInput: %s256\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    int c = 1;
    int d = 0;
    int temp = a;
    for(int i=a; i>0; i/=10){
        b++;
    }
    for(; a>0; a/=10){
        c = 1;
        for(int i=0; i<b; i++){
            c *= a%10;
        }
        d+=c;
    }
    if(temp==d){
        printf("true\n");
    } else {
        printf("false\n");
    }
}