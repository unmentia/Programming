#include "../function.h"

void if_18(){
	printf("\n%s*Kichik son*\n\n%sMisol sharti:\n%sa, b sonlari berilgan. Berilgan ikkita sondan kichigini toping va shu sonni konsolga chiqaring. Agar ular teng bo'lsa, 'teng' so'zini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=1, b=8\n%sOutput: %s1\n\n%sInput: %sb=10, c=-9\n%sOutput: %s-9\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b;
	printf("%sInput: ", violet);
	scanf("%d %d", &a, &b);
	printf("Output: ");
	if(a>b){
		printf("%d\n", b);
	} else {
		printf("%d\n", a);
	}
}