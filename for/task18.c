#include "../function.h"

void for_18(){
	printf("\n%s*Son nechi xonali*\n\n%sMisol sharti:\n%sn soni berilgan. Shu son raqamlarining sonini konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s121\n%sOutput: %s3\n\n%sInput: %s25\n%sOutput: %s2\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=a; i>0; i/=10){
        b++;
    } printf("%d\n", b);
}