#include "../function.h"

void for_11(){
	printf("\n%s*a sonining 5 chi darajasi*\n\n%sMisol sharti:\n%sa soni berilgan. a sonini 5 chi darajasini hisoblab konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s2\n%sOutput: %s32\n\n%sInput: %s4\n%sOutput: %s1024\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 1;
    for(int i=1; i<=5; i++){
        b*=a;
    } printf("%d\n", b);
}