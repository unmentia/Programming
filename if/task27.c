#include "../function.h"

void if_27(){
	printf("\n*2 tasini solishtirish*\nMisol sharti:\na, b, c sonlar berilgan (0 emas). Agar xohlagan 2 tasi juft bo'lsa, 1 ni konsolga chiqaring. Agar xohlagan 2 tasi toq bo'lsa, 2 ni konsolga chiqaring, bo'lmasa 0 ni konsolga chiqaring.\nNamuna:\nInput: a=8, b=2, c=9\nOutput: 1\n\nInput: a=16, b=21, c=17\nOutput: 2\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
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