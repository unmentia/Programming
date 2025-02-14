#include "../function.h"

void if_23(){
	printf("\n%s*Sonlar o'qidagi a nuqta*\n\n\%sMisol sharti:\n%sSonlar o'qida a nuqta berilgan. Shu nuqtadan 0 gacha bo'lgan masofani toping.\n\n%sNamuna:\n%sInput: %s20\n%sOutput: %s20\n\n%sInput: -%s15\n%sOutput: %s15\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a>0){
		printf("%d\n", a);
	} else {
		printf("%d\n", a*(-1));
	}
}