#include "../function.h"

void for_10(){
	printf("\n%s*a va b sonlar orasida musbat sonlar*\n\n%sMisol sharti:\n%sa va b sonlari orasidagi musbat sonlar sonini toping va shuni konsolga chiqaring. b sonini ham inobatga oling.\n\n%sNamuna:\n%sInput: %sa=-1, b=10\n%sOutput: %s10\n\n%sInput: %sa=-3, b=2\n%sOutput: %s2\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a, b;
    printf("%sInput: ", violet);
    scanf("%d %d", &a, &b);
    printf("Output: ");
    int c = 0;
    for(int i=a; i<=b; i++){
        if(i>0){
            c++;
        }
    } printf("%d\n", c);
}