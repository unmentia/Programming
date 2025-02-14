#include "../function.h"

void if_13(){
	printf("\n%s*Hafta kuni*\n\n%sMisol sharti:\n%sBerilgan son hafta kunining qaysi kuniga to'g'ri keladi? Agar kelgan son 1 ga teng bo'lsa, 'Dushanba'ni konsolga chiqaring. Agar kelgan son ikkiga teng bo'lsa, 'Seshanba'ni konsolga chiqaring va hz... Agar hafta kuniga to'g'ri kelmasa, 'none' konsolga chiqsin.\n\n%sNamuna:\n%sInput: %s1\n%sOutput: %sDushanba\n\n%sInput: %s6\n%sOutput: %sShanba\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a;
	printf("%sInput: ", violet);
	scanf("%d", &a);
	printf("Output: ");
	if(a==1){
		printf("Dushanba\n");
	} else if(a==2){
		printf("Seshanba\n");
	} else if(a==3){
		printf("Chorshanba\n");
	} else if(a==4){
		printf("Payshanba\n");
	} else if(a==5){
		printf("Juma\n");
	} else if(a==6){
		printf("Shanba\n");
	} else if(a==7){
		printf("Yakshanba\n");
	} else {
		printf("none\n");
	}
}