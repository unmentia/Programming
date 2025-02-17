#include "../function.h"

void for_21(){
	printf("\n%s*Sonning teskarisi*\n\n%sMisol sharti:\n%sn soni berilgan. Berilgan son palindrom ekanligini aniqlang. Agar bo'lsa, true bo'lmasa false chiqaring. Masalan: n = 12321, bunda chap tomondan va o'ng tomondan o'qisa ham bir xil bo'lishi kerak.\n\n%sNamuna:\n%sInput: %s12321\n%sOutput: %strue\n\n%sInput: %s57855\n%sOutput: %sfalse\n\n%sInput: %s8402048\n%sOutput: %strue\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=a; i>0; i/=10){
        b = b*10 + i%10;
    }
    if(a==b){
        printf("true\n");
    } else {
        printf("false\n");
    }
}