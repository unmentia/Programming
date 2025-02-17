#include "../function.h"

void loop_8(){
	printf("\n%s*Sonlar diagonali*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n(0,0)\n (1,1)\n  (2,2)\n   (3,3)\n    (4,4)\n     .\n      .\n       (n,n)\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s(0,0)\n (1,1)\n  (2,2)\n   (3,3)\n    (4,4)\n     (5,5)\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<=a; y++){
        for(int x=0; x<=a; x++){
            if(x==y){
                printf("(%d,%d)", y, x);
            } 
            else {
                printf(" ");
            }
        } printf("\n");
    }
}