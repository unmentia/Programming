#include "../function.h"

void for_8(){
	printf("\n%s*a va b sonlar orasida 3 ga bo'linadiganlar*\n\n%sMisol sharti:\n%sa, b sonlar berilgan. a va b sonlar orasidagi 3 ga bo'linadigan sonlarni yig'indisi va sonini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=4, b=15\n%sOutput:\n%s\tyig'indi = 27\n\tsoni = 3\n\n%sInput: %sa=24, b=31\n%sOutput:\n%s\tyig'indi = 81\n\tsoni = 3\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a, b;
    printf("%sInput: ", violet);
    scanf("%d %d", &a, &b);
    printf("Output: ");
    int c = 0;
    int d = 0;
    for(int i=a; i<b; i++){
        if(i%3==0){
            d+=i;
            c++;
        }
    } printf("\n\tyig'indi: %d\n\tsoni: %d\n", d, c);
}