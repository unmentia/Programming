#include "../function.h"

void for_19(){
	printf("\n%s*Raqamlar yig'indisi*\n\n%sMisol sharti:\n%sn soni berilgan. Shu son raqamlarining yig'indisini toping.\n\n%sNamuna:\n%sInput: %s35\n%sOutput: %s8\n\n%sInput: %s127\n%sOutput: %s10\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=a; i>0; i/=10){
        b+=i%10;
    } printf("%d\n", b);
}