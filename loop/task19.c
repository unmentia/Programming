#include "../function.h"

void loop_19(){
	printf("\n%s*G'alati parallelogram*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s    *****\n   *   *\n  *   *\n *   *\n*****\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<a; y++){
        for(int x=a*2-1-y; x>0; x--){
            if(x==a || x==1 || y==a-1 || (y==0 && x<=a)){
                printf("*");
            } else {
                printf(" ");
            }
        } printf("\n");
    }
}