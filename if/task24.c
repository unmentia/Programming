#include "../function.h"

void if_24(){
	printf("\n*Sonlar nechi xonali*\nMisol sharti:\na soni berilgan (1-999 sonlar orasida). Agar a soni 1 xonali son bo'lsa, 1 ni return qiling. Agar a soni 2 xonali son bo'lsa, 2 ni return qiling. Agar a soni 3 xonali bo'lsa, 3 ni return qiling.\nNamuna:\nInput: 20\nOutput: 2\n\nInput: 452\nOutput: 3\nSinab ko'rish: ");
	
	int a;
	scanf("%d", &a);
	if(a>0 && a<10){
		printf("1\n");
	} else if(a>9 && a<100){
		printf("2\n");
	} else if(a>99 && a<1000){
		printf("3\n");
	}
}