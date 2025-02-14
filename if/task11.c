#include "../function.h"

void if_11(){
	printf("\n%s*Char sonmi*\n\n%sMisol sharti:\n%sc char berilgan. Berilgan char alfavit yoki raqam ekanligini aniqlang. Agar alfavit bo'lsa, 'alfa'ni konsolga chiqaring, agar son bo'lsa, 'son'ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa\n%sOutput: %salfa\n\n%sInput: %s2\n%sOutput: %sson\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	char a;
	printf("%sInput: ", violet);
	scanf(" %c", &a);
	printf("Output: ");
	if(a>='0' && a<='9'){
		printf("son\n");
	} else if((a>='A' && a<='Z') || (a>='a' && a<'z')){
		printf("alfa\n");
	}
}