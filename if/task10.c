#include "../function.h"

void if_10(){
	printf("\n%s*Kabisa yili*\n\n%sMisol sharti:\n%sBerilgan yil kabisa yili ekanligini aniqlang. Agar kabisa yili bo'lsa, true konsolga chiqsin. Agar bo'lmasa, false konsolga chiqsin. Kabisa yil deb, 4 yilda bir marta keladigan yilga aytiladi. Shu yili kunlar soni 365 emas, 366 ga teng bo'ladi. Bu yili fevral oyida 29 kun bo'ladi.\n\n%sNamuna:\n%sInput: %s2000\n%sOutput: %strue\n\n%sInput: %s2041\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a%4==0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}