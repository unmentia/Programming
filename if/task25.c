#include "../function.h"

void if_25(){
	printf("\n*Barchasi musbatmi*\nMisol sharti:\na, b, c, d sonlar berilgan. Agar ularning qiymati barchasi musbat bo'lsa, true ni konsolga chiqaring, bo'lmasa false ni konsolga chiqaring.\nNamuna:\nInput: a=5, b=6, c=4, d=7\nOutput: true\n\nInput: a=-1, b=2, c=3, d=8\nOutput: false\nSinab ko'rish: ");
	
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a>0 && b>0 && c>0 && d>0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}