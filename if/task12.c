#include "../function.h"

void if_12(){
	printf("\n*Katta yoki kichik alfavit*\nMisol sharti:\nc char berilgan. Berilgan char katta alfavit yoki kichik alfavit ekanlini aniqlang. Agar alfavit kichik bo'lsa, 'lowerCase' so'zini konsolga chiqaring. Agar alfavit katta bo'lsa, 'upperCase'ni chiqaring. Agar alfavit bo'lmasa, 'none'ni konsolga chiqaring.\nNamuna:\nInput: a\nOutput: lowercase\n\nInput: 2\nOutput: none\n\nInput: B\nOutput: upperCase\nSinab ko'rish: ");
	
	char a;
	scanf(" %c", &a);
	if(a>='A' && a<='Z'){
		printf("upperCase\n");
	} else if(a>='a' && a<='z'){
		printf("lowerCase\n");
	} else {
		printf("none\n");
	}
}