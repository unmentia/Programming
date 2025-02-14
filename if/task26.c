#include "../function.h"

void if_26(){
	printf("\n*3 ta son*\nMisol sharti:\na, b, c sonlar berilgan (0 emas). Agar 3 ta son ham toq bo'lsa, 1 ni konsolga chiqaring. Agar 3 ta son ham juft bo'lsa, 2 ni konsolga chiqaring. Agar xohlagan bittasi toq bo'lsa, 3 ni konsolga chiqaring. Agar shartlarni qanoatlantirmasa, 0 ni konsolga chiqaring.\nNamuna:\nInput: a=5, b=7, c=9\nOutput: 1\n\nInput: a=16, b=20, c=30\nOutput: 2\n\nInput: a=18, b=7, c=16\nOutput: 3\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
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