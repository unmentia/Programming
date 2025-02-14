#include "../function.h"

void if_26(){
	printf("\n%s*3 ta son*\n\n%sMisol sharti:\n%sa, b, c sonlar berilgan (0 emas). Agar 3 ta son ham toq bo'lsa, 1 ni konsolga chiqaring. Agar 3 ta son ham juft bo'lsa, 2 ni konsolga chiqaring. Agar xohlagan bittasi toq bo'lsa, 3 ni konsolga chiqaring. Agar shartlarni qanoatlantirmasa, 0 ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=5, b=7, c=9\n%sOutput: %s1\n\n%sInput: %sa=16, b=20, c=30\n%sOutput: %s2\n\n%sInput: %sa=18, b=7, c=16\n%sOutput: %s3\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	if(a!=0 && b!=0 && c!=0){
		if(a%2!=0 && b%2!=0 && c%2!=0){
			printf("1\n");
		} else if(a%2==0 && b%2==0 && c%2==0){
			printf("2\n");
		} else if((a%2!=0 && b%2==0 && c%2==0) || (b%2!=0 && a%2==0 && c%2==0) || (c%2!=0 && a%2==0 && b%2==0)){
			printf("3\n");
		} else {
			printf("0\n");
		}
	}
}