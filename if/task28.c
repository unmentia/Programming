#include "../function.h"

void if_28(){
	printf("\n*Son yasash*\nMisol sharti:\na, b, c sonlari berilgan. Shu sonlardan uch xonali son yasang. Agar xohlagan son 0 ga teng yoki kichik bo'lsa, 0 ni konsolga chiqaring.\nNamuna:\nInput: a=3, b=6, c=2\nOutput: 362\n\nInput: a=8, b=0, c=3\nOutput: 0\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int d;
	if(a<=0 || b<=0 || c<=0 || a>9 || b>9 || c>9){
		printf("0\n");
	} else {
		d=(a*100)+(b*10)+c;
		printf("%d\n", d);
	}
}