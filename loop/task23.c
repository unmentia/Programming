#include "../function.h"

void loop_23(){
	printf("\n%s*Archa*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s    *\n   ***\n  *****\n *******\n*********\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<a; y++){
        for(int x=0; x<a+y; x++){
            if(x<a-1-y){
                printf(" ");
            } else {
                printf("*");
            }
        } printf("\n");
    }
}