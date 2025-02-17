#include "../function.h"

void for_22(){
	printf("\n%s*Faktorial*\n\n%sMisol sharti:\n%sn soni berilgan. Berilgan sonning faktorialini hisoblang. Masalan: 5 ning faktoriali: 1*2*3*4*5 = 120. Ya'ni, 1 dan o'sha songacha bo'lgan sonlarning ko'paytmasi uning faktorialiga teng bo'ladi. 10 ning faktoriali = 1*2*3*4*5*6*7*8*9*10 = 3628800\n\n%sNamuna:\n%sInput: %s5\n%sOutput: %s120\n\n%sInput: %s10\n%sOutput: %s3628800\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 1;
    for(int i=1; i<=a; i++){
        b*=i;
    } printf("%d\n", b);
}