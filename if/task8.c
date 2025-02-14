#include "../function.h"

void if_8(){
	printf("\n%s*Son 5 ga bo'linadimi*\n\n%sMisol sharti:\n%sa soni berilgan. Berilgan son 5 ga bo'linadimi? Agar bo'linsa, konsolga true, bo'lmasa false chiqaring.\n\n%sNamuna:\n%sInput: %s10\n%sOutput: %strue\n\n%sInput: %s7\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a%5==0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}