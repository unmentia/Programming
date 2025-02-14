#include "../function.h"

void if_28(){
	printf("\n%s*Son yasash*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. Shu sonlardan uch xonali son yasang. Agar xohlagan son 0 ga teng yoki kichik bo'lsa, 0 ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=3, b=6, c=2\n%sOutput: %s362\n\n%sInput: %sa=8, b=0, c=3\n%sOutput: %s0\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	int d;
	if(a<=0 || b<=0 || c<=0 || a>9 || b>9 || c>9){
		printf("0\n");
	} else {
		d=(a*100)+(b*10)+c;
		printf("%d\n", d);
	}
}