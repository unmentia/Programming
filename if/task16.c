#include "../function.h"

void if_16(){
	printf("\n*Uchburchak shakli*\nMisol sharti:\na, b, c sonlari berilgan. Bu sonlar uchburchakning 3 ta tomonidir. Uchburchakning shakli qanday ekanligini aniqlang. Agar teng tomonli bo'lsa, 'equilateral' so'zini konsolga chiqaring. Agar teng yonli bo'lsa, 'isosceles' so'zini konsolga chiqaring. Agar ixtiyoriy bo'lsa, 'scalene' so'zini konsolga chiqaring.\nNamuna:\nInput: a=10, b=15, c=10\nOutput: isosceles\n\nInput: a=23, b=10,c=15\nOutput: scalene\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
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