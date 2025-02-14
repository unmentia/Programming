#include "../function.h"

void if_20(){
	printf("\n%s*Sonlarni taqqoslash*\n\n%sMisol sharti:\n%sa, b, c sonlar berilgan. Agar sonlar o'sish tartibida joylashgan bo'lsa, 1 ni konsolga chiqaring. Agar kamayish tartibda bo'lsa, 2 ni konsolga chiqaring. Agar eng kattasi b bo'lsa, b ni konsolga chiqaring. Agar ular teng bo'lsa, 5 ni konsolga chiqaring. Bo'lmasa, 0 ni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=5, b=10, c=15\n%sOutput: %s1\n\n%sInput: %sa=3, b=10, c=8\n%sOutput: %s10\n\n%sInput: %sa=3, b=5, c=3\n%sOutput: %s5\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
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