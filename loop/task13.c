#include "../function.h"

void loop_13(){
	printf("\n%s*Sonlar uchburchagi - tartibli varianti*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s1\n22\n333\n4444\n55555\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=1; y<=a; y++){
        for(int x=1; x<=y; x++){
            printf("%d", y);
        } printf("\n");
    }
}