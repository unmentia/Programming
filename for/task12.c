#include "../function.h"

void for_12(){
	printf("\n%s*a sonining n chi darajasi*\n\n%sMisol sharti:\n%sa soni berilgan. a sonini n chi darajasini hisoblaydigan dastur yozing va hosil bo'lgan sonni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=2, n=6\n%sOutput: %s64\n\n%sInput: %sa=3, n=4\n%sOutput: %s81\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a, b;
    printf("%sInput: ", violet);
    scanf("%d %d", &a, &b);
    printf("Output: ");
    int c = 1;
    for(int i=1; i<=b; i++){
        c*=a;
    } printf("%d\n", c);
}