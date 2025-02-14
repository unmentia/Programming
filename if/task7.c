#include "../function.h"

void if_7(){
	printf("\n%s*Musbat va manfiy*\n\n%sMisol sharti:\n%sa soni berilgan. Sonning musbat yoki manfiy ekanligini aniqlang. Son 0 ga teng bo'lsa, 0 ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s4\n%sOutput: %s'musbat'\n\n%sInput: %s-5\n%sOutput: %s'manfiy'\n\n%sInput: %s0\n%sOutput: %s0\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a>0){
		printf("musbat\n");
	} else if(a<0){
		printf("manfiy\n");
	} else {
		printf("0\n");
	}
}