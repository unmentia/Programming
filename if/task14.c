#include "../function.h"

void if_14(){
	printf("\n%s*Uchburchakning burchaklari*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. Shu sonlar uchburchakning ichki burchaklari ekanligini aniqlang. Agar berilgan sonlar uchburchakning burchaklari bo'lsa, true konsolga chiqaring, bo'lmasa false konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=30, b=20, c=130\n%sOutput: %strue\n\n%sInput: %sa=10, b=180, c=20\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	if(a>0 && b>0 && c>0 && a+b+c==180){
		printf("true\n");
	} else {
		printf("false\n");
	}
}