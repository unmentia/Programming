#include "../function.h"

void if_18(){
	printf("\n*Kichik son*\nMisol sharti:\na, b sonlari berilgan. Berilgan ikkita sondan kichigini toping va shu sonni konsolga chiqaring. Agar ular teng bo'lsa, 'teng' so'zini konsolga chiqaring.\nNamuna:\nInput: a=1, b=8\nOutput: 1\n\nInput: b=10, c=-9\nOutput: -9\nSinab ko'rish: ");
	
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("%d\n", b);
	} else {
		printf("%d\n", a);
	}
}