#include "../function.h"

void if_1(){
	printf("\n%s*10 bilan taqqoslash*\n\n%sMisol sharti:\n%sBerilgan son 10 dan katta bo'lsa, unga 3 ni qo'shib konsolga chiqaring. Agar 10 dan kichik bo'lsa, 2 ga ko'paytirib konsolga chiqaring. Agar 10 ga teng bo'lsa, 22 sonini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s15\n%sOutput: %s18\n\n%sInput: %s8\n%sOutput: %s16\n\n%sInput: %s10\n%sOutput: %s22\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a>10){
		printf("%d\n", a+3);
	} else if(a<10){
		printf("%d\n", a*2);
	} else {
		printf("%d\n", 22);
	}
}