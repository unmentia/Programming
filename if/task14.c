#include "../function.h"

void if_14(){
	printf("\n*Uchburchakning burchaklari*\nMisol sharti:\na, b, c sonlari berilgan. Shu sonlar uchburchakning ichki burchaklari ekanligini aniqlang. Agar berilgan sonlar uchburchakning burchaklari bo'lsa, true konsolga chiqaring, bo'lmasa false konsolga chiqaring.\nNamuna:\nInput: a=30, b=20, c=130\nOutput: true\n\nInput: a=10, b=180, c=20\nOutput: false\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>0 && b>0 && c>0 && a+b+c==180){
		printf("true\n");
	} else {
		printf("false\n");
	}
}