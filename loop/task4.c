#include "../function.h"

void loop_4(){
	printf("\n%s*Sonlar juftligida C harfi*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s10\n%sOutput:\n%s(0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7) (0,8) (0,9)\n(1,0)\n(2,0)\n(3,0)\n(4,0)\n(5,0)\n(6,0)\n(7,0)\n(8,0)\n(9,0) (9,1) (9,2) (9,3) (9,4) (9,5) (9,6) (9,7) (9,8) (9,9)\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<a; y++){
        for(int x=0; x<a; x++){
            if(y==0 || y==a-1 || x== 0){
                printf("(%d,%d) ", y, x);
            }
        } printf("\n");
    }
}