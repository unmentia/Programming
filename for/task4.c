#include "../function.h"

void for_4(){
	printf("\n%s*5 ga bo'linadigan sonlar yig'indisi*\n\n%sMisol sharti:\n%sa soni berilgan. 0 dan a gacha bo'lgan 5 ga bo'linadigan sonlar yig'indisini toping va yig'indini konsolga chiqaring. a sonini ham inobatga oling.\n\n%sNamuna:\n%sInput: %s35\n%sOutput: %s140\n\n%sInput: %s18\n%sOutput: %s30\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=0; i<=a; i++){
        if(i%5==0){
            b+=i;
        }
    } printf("%d\n", b);
}