#include "../function.h"

void if_27(){
	printf("\n%s*2 tasini solishtirish*\n\n%sMisol sharti:\n%sa, b, c sonlar berilgan (0 emas). Agar xohlagan 2 tasi juft bo'lsa, 1 ni konsolga chiqaring. Agar xohlagan 2 tasi toq bo'lsa, 2 ni konsolga chiqaring, bo'lmasa 0 ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=8, b=2, c=9\n%sOutput: %s1\n\n%sInput: %sa=16, b=21, c=17\n%sOutput: %s2\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	if(a!=0 && b!=0 && c!=0){
		if((a%2==0 && b%2==0 && c%2!=0) || (a%2==0 && b%2!=0 && c%2==0) || (a%2!=0 && b%2==0 && c%2==0)){
			printf("1\n");
		} else if((a%2!=0 && b%2!=0 && c%2==0) || (a%2!=0 && b%2==0 && c%2!=0) || (a%2==0 && b%2!=0 && c%2!=0)){
			printf("2\n");
		} else {
			printf("0\n");
		}
	}
}