#include "../function.h"

void if_8(){
	printf("\n*Son 5 ga bo'linadimi*\nMisol sharti:\na soni berilgan. Berilgan son 5 ga bo'linadimi? Agar bo'linsa, konsolga true, bo'lmasa false chiqaring.\nNamuna:\nInput: 10\nOutput: true\n\nInput: 7\nOutput: false\nSinab ko'rish: ");
	
	int a;
	scanf("%d", &a);
	if(a%5==0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}