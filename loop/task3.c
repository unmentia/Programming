#include "../function.h"

void loop_3(){
	printf("\n%s*Sonlar juftligi*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s10\n%sOutput:\n%s(0,0) (0,1) (0,2)...(0,9)\n(1,0) (1,1) (1,2)...(1,9)\n***\n***\n***\n(9,0) (9,1) (9,2)...(9,9)\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<a; y++){
        for(int x=0; x<a; x++){
            printf("(%d,%d)", y, x);
        } printf("\n");
    }
}