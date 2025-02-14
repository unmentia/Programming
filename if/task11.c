#include "../function.h"

void if_11(){
	printf("\n*Char sonmi*\nMisol sharti:\nc char berilgan. Berilgan char alfavit yoki raqam ekanligini aniqlang. Agar alfavit bo'lsa, 'alfa'ni konsolga chiqaring, agar son bo'lsa, 'son'ni konsolga chiqaring.\nNamuna:\nInput: a\nOutput: alfa\n\nInput: 2\nOutput: son\nSinab ko'rish: ");
	
	char a;
	scanf(" %c", &a);
	if(a>='0' && a<='9'){
		printf("son\n");
	} else if((a>='A' && a<='Z') || (a>='a' && a<'z')){
		printf("alfa\n");
	}
}