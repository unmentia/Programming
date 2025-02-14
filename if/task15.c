#include "../function.h"

void if_15(){
	printf("\n%s*Uchburchak tomonlari*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. Shu sonlar uchburchakning tomonlari ekanligini aniqlang. Agar sonlar uchburchakning tomonlari bo'lsa, true ni konsolga chiqaring, bo'lmasa false ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=20, b=25, c=30\n%sOutput: %strue\n\n%sInput: %sa=120, b=10, c=20\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	if(a+b>c && a+c>b && b+c>a){
		printf("true\n");
	} else {
		printf("false\n");
	}
}