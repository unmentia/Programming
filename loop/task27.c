#include "../function.h"

void loop_27(){
	printf("\n%s*Yoyma uchburchak*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring. n bu yerda eng uzun yulduzlar (qatori) soni.\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s*\n**\n***\n****\n*****\n****\n***\n**\n*\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<a*2-1; y++){
        for(int x=0; x<a; x++){
            if(x>y || x>a*2-2-y){
                printf(" ");
            } else {
                printf("*");
            }
        } printf("\n");
    }
}