#include "../function.h"

void if_9(){
	printf("\n%s*Son 3 va 4 ga bo'linadimi*\n\n%sMisol sharti:\n%sBerilgan son 3 va 4 ga bo'linadimi? Agar bo'linsa, konsolga true, bo'lmasa false chiqaring.\n\n%sNamuna:\n%sInput: %s14\n%sOutput: %sfalse\n\n%sInput: %s24\n%sOutput: %strue\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a%3==0 && a%4==0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}