#include "../function.h"

void for_20(){
	printf("\n%s*Teskari son*\n\n%sMisol sharti:\n%sn soni berilgan. Shu sonni teskarisini toping va konsolga chiqaring. Masalan: n = 12345, uning teskarisi 54321.\n\n%sNamuna:\n%sInput: %s12345\n%sOutput: %s54321\n\n%sInput: %s6821\n%sOutput: %s1286\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=a; i>0; i/=10){
        b = b*10 + i%10;
    } printf("%d\n", b);
}