#include "../function.h"

void for_3(){
	printf("\n%s*Toq sonlar yig'indisi*\n\n%sMisol sharti:\n%sa soni berilgan. 0 dan a gacha bo'lgan toq sonlar yig'indisini toping va yig'indini konsolga chiqaring. a sonini ham inobatga oling.\n\n%sNamuna:\n%sInput: %s10\n%sOutput: %s25\n\n%sInput: %s7\n%sOutput: %s16\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=1; i<=a; i+=2){
         b+=i;
    } printf("%d\n", b);
}