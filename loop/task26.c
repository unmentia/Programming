#include "../function.h"

void loop_26(){
	printf("\n%s*Teskari archa karkazi*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring. n bu yerda qatorlar soni.\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s*********\n *     *\n  *   *\n   * *\n    *\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<a; y++){
        for(int x=0; x<a*2-1-y; x++){
            if(x==y || y==0 || x==a*2-2-y){
                printf("*");
            } else {
                printf(" ");
            }
        } printf("\n");
    }
}