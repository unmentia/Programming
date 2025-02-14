#include "../function.h"

void if_16(){
	printf("\n%s*Uchburchak shakli*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. Bu sonlar uchburchakning 3 ta tomonidir. Uchburchakning shakli qanday ekanligini aniqlang. Agar teng tomonli bo'lsa, 'equilateral' so'zini konsolga chiqaring. Agar teng yonli bo'lsa, 'isosceles' so'zini konsolga chiqaring. Agar ixtiyoriy bo'lsa, 'scalene' so'zini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=10, b=15, c=10\n%sOutput: %sisosceles\n\n%sInput: %sa=23, b=10,c=15\n%sOutput: %sscalene\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	if(a>0 && b>0 && c>0){
		if(a==b && a==c && b==c){
			printf("equilateral\n");
		} else if(a==b || a==c || b==c){
			printf("isosceles\n");
		} else {
			printf("scalsene\n");
		}
	}
}