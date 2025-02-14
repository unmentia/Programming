#include "../function.h"

void if_5(){
	printf("\n%s*Ikkita sondan kattasi*\n\n%sMisol sharti:\n%sa va b sonlari berilgan. Berilgan ikkita sondan kattasini konsolga chiqaring. Agar ular teng bo'lsa, 'Voy ular teng' yozuvi chiqsin.\n\n%sNamuna:\n%sInput: %sa=4, b=7\n%sOutput: %s'katta son 7'\n\n%sInput: %sa=9, b=3\n%sOutput: %s'katta son 9'\n\n%sInput: %sa=5, b=5\n%sOutput: %s'voy ular teng'\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b;
	printf("%sInput: ", violet);
	scanf("%d %d", &a, &b);
	printf("Output: ");
	if(a>b){
		printf("katta son %d\n", a);
	} else if(a<b){
		printf("katta son %d\n", b);
	} else {
		printf("voy ular teng\n");
	}
}