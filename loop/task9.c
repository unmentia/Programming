#include "../function.h"

void loop_9(){
	printf("\n%s*Teskari diagonal*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring. n nechta bo'lsa, diagonaliga chiqadigan yulduzchalar soni ham shuncha bo'lishi kerak.\n\n%sNamuna:\n%sInput: %s6\n%sOutput:\n%s     *\n    *\n   *\n  *\n *\n*\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=1; y<=a; y++){
        for(int x=a; x>0; x--){
            if(x==y){
                printf("*");
            } else {
                printf(" ");
            }
        } printf("\n");
    }
}