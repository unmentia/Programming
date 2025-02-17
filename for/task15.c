#include "../function.h"

void for_15(){
	printf("\n%s*Ketma-ketlik kvadrati*\n\n%sMisol sharti:\n%sn soni berilgan. 1 + 4 + 9 + 16 + ... + n*n ketma-ketlik berilgan. Shu ketma-ketlikning yig'indisini hisoblang va natijani konsolga chiqaring. Masalan n = 6. Bunda 1 dan 6 gacha bo'lgan sonlarning kvadrati yig'indisini hisoblash kerak. Ya'ni, 1 + 4 + 9 + 16 + 25 + 36 = 91. To'liq aytadigan bo'lsak: 1*1 + 2*2 + 3*3 + 4*4 + 5*5 + 6*6, ya'ni, 1 + 4 + 9 + 16 + 25 + 36 va bularning yig'indisi 91 bo'ladi. 91 ni konsolga chiqarish kerak.\n\n%sNamuna:\n%sInput: %s6\n%sOutput: %s91\n\n%sInput: %s15\n%sOutput: %s1240\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=1; i<=a; i++){
        b+=i*i;
    } printf("%d\n", b);
}