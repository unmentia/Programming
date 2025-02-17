#include "../function.h"

void for_17(){
	printf("\n%s*Tub son*\n\n%sMisol sharti:\n%sn soni berilgan. Shu son tub ekanligini aniqlang. Agar tub bo'lsa, true bo'lmasa false konsolga chiqaring. Tub son 1 ga va o'ziga bo'linadigan sonlar. Masalan: 7. U 1 ga va o'ziga bo'linadi va boshqa songa bo'linmaydi. Uning bo'linuvchilari 2 ta.\n\n%sNamuna:\n%sInput: %s7\n%sOutput: %strue\n\n%sInput: %s25\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=1; i<=a; i++){
        if(a%i==0){
            b++;
        }
    }
    if(b==2){
        printf("true\n");
    } else {
        printf("false\n");
    }
}