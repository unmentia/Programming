#include "../function.h"

void for_13(){
	printf("\n%s*Ketma-ketlik*\n\n%sMisol sharti:\n%sa, n sonlari berilgan (a soni 1-9 o'rtasida). Ketma-ketlikni hisoblang. a + aa + aaa + ........ n ta a bo'ladi. Yig'indini konsolga chiqarish kerak.\n\n%sNamuna:\n%sInput: %sa=3, n=4\n%sOutput: %s3702\n\n%sInput: %sa=7, n=5\n%sOutput: %s86415\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a, b;
    printf("%sInput: ", violet);
    scanf("%d %d", &a, &b);
    printf("Output: ");
    int c = 0;
    int d = 0;
    for(int i=0; i<b; i++){
        c=c*10+a;
        d+=c;
    } printf("%d\n", d);
}