#include "../function.h"

void if_19(){
	printf("\n*O'rtacha qiymat*\nMisol sharti:\na, b, c sonlari berilgan. Berilgan uchta sonning o'rtacha qiymatini  hisoblovchi dastur yozing va shu sonni konsolga chiqaring.\nNamuna:\nInput: a=5, b=10, c=15\nOutput: 10\n\nInput: a=3, b=10, c=8\nOutput: 7\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int d = a+b+c;
	printf("%d\n", d/3);
}