#include "../function.h"

void if_21(){
	printf("\n%s*O'zaro teng sonlar*\n\n%sMisol sharti:\n%sa, b, c sonlar berilgan. Agar shu solarning ikkitasi o'zaro teng bo'lsa, teng bo'lmagan sonni konsolga chiqaring, aks holda 0 ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=5, b=10, c=5\n%sOutput: %s10\n\n%sInput: %sa=3, b=10, c=8\n%sOutput: %s0\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	if(a!=b && b==c){
		printf("%d\n", a);
	} else if(b!=a && a==c){
		printf("%d\n", b);
	} else if(c!=a && a==b){
		printf("%d\n", c);
	} else {
		printf("0\n");
	}
}