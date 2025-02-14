#include "../function.h"

void if_15(){
	printf("\n*Uchburchak tomonlari*\nMisol sharti:\na, b, c sonlari berilgan. Shu sonlar uchburchakning tomonlari ekanligini aniqlang. Agar sonlar uchburchakning tomonlari bo'lsa, true ni konsolga chiqaring, bo'lmasa false ni konsolga chiqaring.\nNamuna:\nInput: a=20, b=25, c=30\nOutput: true\n\nInput: a=120, b=10, c=20\nOutput: false\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a){
		printf("true\n");
	} else {
		printf("false\n");
	}
}