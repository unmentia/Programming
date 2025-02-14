#include "../function.h"

void if_2(){
	printf("\n%s*Butun qism*\n\n%sMisol sharti:\n%sBerilgan a sonini 3 ga bo'lgandagi butun qismini b o'zgaruvchiga joylang va b sonini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s7\n%sOutput: %s2\n\n%sInput: %s9\n%sOutput: %s3\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	int b = a/3;
	printf("Output: %d\n", b);
}