#include "../function.h"

void if_24(){
	printf("\n%s*Sonlar nechi xonali*\n\n%sMisol sharti:\n%sa soni berilgan (1-999 sonlar orasida). Agar a soni 1 xonali son bo'lsa, 1 ni return qiling. Agar a soni 2 xonali son bo'lsa, 2 ni return qiling. Agar a soni 3 xonali bo'lsa, 3 ni return qiling.\n\n%sNamuna:\n%sInput: %s20\n%sOutput: %s2\n\n%sInput: %s452\n%sOutput: %s3\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a>0 && a<10){
		printf("1\n");
	} else if(a>9 && a<100){
		printf("2\n");
	} else if(a>99 && a<1000){
		printf("3\n");
	}
}