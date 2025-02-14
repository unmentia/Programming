#include "../function.h"

void if_25(){
	printf("\n%s*Barchasi musbatmi*\n\n%sMisol sharti:\n%sa, b, c, d sonlar berilgan. Agar ularning qiymati barchasi musbat bo'lsa, true ni konsolga chiqaring, bo'lmasa false ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=5, b=6, c=4, d=7\n%sOutput: %strue\n\n%sInput: %sa=-1, b=2, c=3, d=8\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c, d;
	printf("%sInput: ", violet);
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("Output: ");
	if(a>0 && b>0 && c>0 && d>0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}