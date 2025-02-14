#include "../function.h"

void if_12(){
	printf("\n%s*Katta yoki kichik alfavit*\n\n%sMisol sharti:\n%sc char berilgan. Berilgan char katta alfavit yoki kichik alfavit ekanlini aniqlang. Agar alfavit kichik bo'lsa, 'lowerCase' so'zini konsolga chiqaring. Agar alfavit katta bo'lsa, 'upperCase'ni chiqaring. Agar alfavit bo'lmasa, 'none'ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa\n%sOutput: %slowercase\n\n%sInput: %s2\n%sOutput: %snone\n\n%sInput: %sB\n%sOutput: %supperCase\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);
	
	char a;
	printf("%sInput: ", violet);
	scanf(" %c", &a);
	printf("Output: ");
	if(a>='A' && a<='Z'){
		printf("upperCase\n");
	} else if(a>='a' && a<='z'){
		printf("lowerCase\n");
	} else {
		printf("none\n");
	}
}