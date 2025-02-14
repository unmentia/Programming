#include "../function.h"

void if_4(){
	printf("\n%s*Juft yoki toq son*\n\n%sMisol sharti:\n%sSonning juft yoki toqligini aniqlang. Agar juft bo'lsa, 'juft' so'zini return qiling. Agar toq bo'lsa, 'toq' so'zini return qiling.\n\n%sNamuna:\n%sInput: %s4\n%sOutput: %sjuft\n\n%sInput: %s7\n%sOutput: %stoq\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a==0){
		printf("0\n");
	} else if(a%2==0){
		printf("juft\n");
	} else {
		printf("toq\n");
	}
}