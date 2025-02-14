#include "../function.h"

void if_19(){
	printf("\n%s*O'rtacha qiymat*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. Berilgan uchta sonning o'rtacha qiymatini  hisoblovchi dastur yozing va shu sonni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=5, b=10, c=15\n%sOutput: %s10\n\n%sInput: %sa=3, b=10, c=8\n%sOutput: %s7\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	int d = a+b+c;
	printf("%d\n", d/3);
}