#include "../function.h"

void for_1(){
	printf("\n%s*Sonlar yig'indisi*\n\n%sMisol sharti:\n%sa soni berilgan. 0 dan a gacha bo'lgan sonlar yig'indisini toping va yig'indini konsolga chiqaring. a sonini ham hisobga oling.\n\n%sNamuna:\n%sInput: %s10\n%sOutput: %s55\n\n%sInput: %s7\n%sOutput: %s28\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=0; i<=a; i++){
        b+=i;
    } printf("%d\n", b);
}