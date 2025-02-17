#include "../function.h"

void for_5(){
	printf("\n%s*Juft sonlar soni*\n\n%sMisol sharti:\n%sa soni berilgan. 0 dan a gacha bo'lgan juft sonlar sonini toping va konsolga chiqaring (a sonini inobatga olmaymiz).\n\n%sNamuna:\n%sInput: %s10\n%sOutput: %s5\n\n%sInput: %s18\n%sOutput: %s9\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=0; i<a; i++){
       if(i%2==0){
        b++;
       }
    } printf("%d\n", b);
}