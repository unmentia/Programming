#include "../function.h"

void loop_32(){
	printf("\n%s*a, b sonlari orasidagi palindrom*\n\n%sMisol sharti:\n%sa, b sonlari berilgan. (a, b eng kamida ikki xonali son). a dan b gacha bo'lgan palindrom sonlarni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=12, b=50\n%sOutput: %s22 33 44\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a, b;
	printf("%sInput: ", violet);
	scanf("%d %d", &a, &b);
	printf("Output:\n");
	if(a>9 && b>9){
		for(int i=a; i<b; i++){
			int answer = 0;
			int temp = i;
			for(; temp>0; temp/=10){
				answer = answer*10 + (temp%10);
			}
			if(answer == i){
				printf("%d\n", i);
			}
		}
	}
}