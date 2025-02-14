#include "../function.h"

void if_9(){
	printf("\n*Son 3 va 4 ga bo'linadimi*\nMisol sharti:\nBerilgan son 3 va 4 ga bo'linadimi? Agar bo'linsa, konsolga true, bo'lmasa false chiqaring.\nNamuna:\nInput: 14\nOutput: false\n\nInput: 24\nOutput: true\nSinab ko'rish: ");
	
	int a;
	scanf("%d", &a);
	if(a%3==0 && a%4==0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}