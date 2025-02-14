#include "../function.h"

void if_3(){
	printf("\n%s*Qoldiqni aniqlash*\n\n%sMisol sharti:\n%sa soni berilgan. a sonini 3 ga bo'lgandagi qoldig'ini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s7\n%sOutput: %s1\n\n%sInput: %s8\n%sOutput: %s2\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	int b = a%3;
	printf("Output: %d\n", b);
}