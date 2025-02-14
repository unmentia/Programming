#include "../function.h"

void if_20(){
	printf("\n*Sonlarni taqqoslash*\nMisol sharti:\na, b, c sonlar berilgan. Agar sonlar o'sish tartibida joylashgan bo'lsa, 1 ni konsolga chiqaring. Agar kamayish tartibda bo'lsa, 2 ni konsolga chiqaring. Agar eng kattasi b bo'lsa, b ni konsolga chiqaring. Agar ular teng bo'lsa, 5 ni konsolga chiqaring. Bo'lmasa, 0 ni konsolga chiqaring.\nNamuna:\nInput: a=5, b=10, c=15\nOutput: 1\n\nInput: a=3, b=10, c=8\nOutput: 10\n\nInput: a=3, b=5, c=3\nOutput: 5\nSinab ko'rish: ");
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a<b && b<c){
		printf("1\n");
	} else if(a>b && b>c){
		printf("2\n");
	} else if(b>a && b>c){
		printf("%d\n", b);
	} else if(a==b && b==c){
		printf("5\n");
	} else {
		printf("0\n");
	}
}