#include "../function.h"

void for_6(){
	printf("\n%s*a va b sonlar orasidagi sonlar yig'indisi*\n\n%sMisol sharti:\n%sa, b sonlar berilgan. a va b sonlar orasidagi (butun) sonlar yig'indisini toping (a sonini inobatga oling) va yig'indini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sa=2, b=8\n%sOutput: %s27\n\n%sInput: %sa=5, b=15\n%sOutput: %s95\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a, b;
    printf("%sInput: ", violet);
    scanf("%d %d", &a, &b);
    printf("Output: ");
    int c = 0;
    for(int i=a; i<b; i++){
        c+=i;
    } printf("%d\n", c);
}