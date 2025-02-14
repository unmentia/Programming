#include "../function.h"

void if_17(){
	printf("\n*Nechtasi musbat*\nMisol sharti:\na, b, c sonlari berilgan. Berilgan 3 ta sondan nechtasi musbat ekanligini aniqlovchi dastur yozing va musbat sonlar sonini konsolga chiqaring.\nNamuna:\nInput: a=1, b=8, c=27\nOutput: 3\n\nInput: a=-2, b=10, c=-9\nOutput: 1\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>0 && b>0 && c>0){
		printf("3\n");
	} else if((a>0 && b>0) || (a>0 && c>0) || (b>0 && c>0)){
		printf("2\n");
	} else if(a>0 || b>0 || c>0){
		printf("1\n");
	} else {
		printf("0\n");
	}
}