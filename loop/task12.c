#include "../function.h"

void loop_12(){
	printf("\n%s*Sonlar uchburchagi*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s1\n12\n123\n1234\n12345\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=1; y<=a; y++){
        for(int x=1; x<=y; x++){
            printf("%d", x);
        } printf("\n");
    }
}