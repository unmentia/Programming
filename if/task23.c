#include "../function.h"

void if_23(){
	printf("\n*Sonlar o'qidagi a nuqta*\nMisol sharti:\nSonlar o'qida a nuqta berilgan. Shu nuqtadan 0 gacha bo'lgan masofani toping.\nNamuna:\nInput: 20\nOutput: 20\n\nInput: -15\nOutput: 15\nSinab ko'rish: ");
	
	int a;
	scanf("%d", &a);
	if(a>0){
		printf("%d\n", a);
	} else {
		printf("%d\n", a*(-1));
	}
}