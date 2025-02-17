#include "../function.h"

void loop_5(){
	printf("\n%s*Sonlar juftligida ustunlar*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s10\n%sOutput:\n%s(0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7) (0,8) (0,9)\n(1,0)       (1,2)       (1,4)       (1,6)       (1,8)\n(2,0)       (2,2)       (2,4)       (2,6)       (2,8)\n(3,0)       (3,2)       (3,4)       (3,6)       (3,8)\n(4,0)       (4,2)       (4,4)       (4,6)       (4,8)\n(5,0)       (5,2)       (5,4)       (5,6)       (5,8)\n(6,0)       (6,2)       (6,4)       (6,6)       (6,8)\n(7,0)       (7,2)       (7,4)       (7,6)       (7,8)\n(8,0)       (8,2)       (8,4)       (8,6)       (8,8)\n(9,0) (9,1) (9,2) (9,3) (9,4) (9,5) (9,6) (9,7) (9,8) (9,9)\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
    scanf("%d", &a);
    for(int y=0; y<a; y++){
        for(int x=0; x<a; x++){
            if(y==0 || y==a-1 || x==0 || x%2==0){
                printf("(%d,%d) ", y, x);
            } else {
                printf("      ");
            }
        } printf("\n");
    }
}