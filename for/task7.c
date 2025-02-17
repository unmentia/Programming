#include "../function.h"

void for_7(){
	printf("\n%s*a va b sonlar orasidagi juft sonlar*\n\n%sMisol sharti:\n%sa, b sonlar berilgan. a va b sonlar orasidagi juft sonlarning sonini toping (a sonini inobatga oling) va natijani konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=4, b=15\n%sOutput: %s6\n\n%sInput: %sa=24, b=31\n%sOutput: %s4\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a, b;
    printf("%sInput: ", violet);
    scanf("%d %d", &a, &b);
    printf("Output: ");
    int c = 0;
    for(int i=a; i<b; i++){
        if(i%2==0){
            c++;
        }
    } printf("%d\n", c);
}