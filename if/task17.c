#include "../function.h"

void if_17(){
	printf("\n%s*Nechtasi musbat*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. Berilgan 3 ta sondan nechtasi musbat ekanligini aniqlovchi dastur yozing va musbat sonlar sonini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=1, b=8, c=27\n%sOutput: %s3\n\n%sInput: %sa=-2, b=10, c=-9\n%sOutput: %s1\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
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