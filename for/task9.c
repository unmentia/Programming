#include "../function.h"

void for_9(){
	printf("\n%s*a va b sonlar orasida 2 va 3 ga bo'linadiganlar*\n\n%sMisol sharti:\n%sa, b sonlar berilgan. a va b sonlar orasidagi 2 va 3 ga bo'linadigan sonlarning sonini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=6, b=16\n%sOutput: %s2\n\n%sInput: %sa=2, b=21\n%sOutput: %s3\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a, b;
    printf("%sInput: ", violet);
    scanf("%d %d", &a, &b);
    printf("Output: ");
    int c = 0;
    for(int i=a; i<b; i++){
        if(i%2==0 && i%3==0){
            c++;
        }
    } printf("%d\n", c);
}