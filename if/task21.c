#include "../function.h"

void if_21(){
	printf("\n*O'zaro teng sonlar*\nMisol sharti:\na, b, c sonlar berilgan. Agar shu solarning ikkitasi o'zaro teng bo'lsa, teng bo'lmagan sonni konsolga chiqaring, aks holda 0 ni konsolga chiqaring.\nNamuna:\nInput: a=5, b=10, c=5\nOutput: 10\n\nInput: a=3, b=10, c=8\nOutput: 0\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a!=b && b==c){
		printf("%d\n", a);
	} else if(b!=a && a==c){
		printf("%d\n", b);
	} else if(c!=a && a==b){
		printf("%d\n", c);
	} else {
		printf("0\n");
	}
}