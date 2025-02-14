#include "../function.h"

void if_10(){
	printf("\n*Kabisa yili*\nMisol sharti:\nBerilgan yil kabisa yili ekanligini aniqlang. Agar kabisa yili bo'lsa, true konsolga chiqsin. Agar bo'lmasa, false konsolga chiqsin. Kabisa yil deb, 4 yilda bir marta keladigan yilga aytiladi. Shu yili kunlar soni 365 emas, 366 ga teng bo'ladi. Bu yili fevral oyida 29 kun bo'ladi.\nNamuna:\nInput: 2000\nOutput: true\n\nInput: 2041\nOutput: false\nSinab ko'rish: ");
	
	int a;
	scanf("%d", &a);
	if(a%4==0){
		printf("true\n");
	} else {
		printf("false\n");
	}
}