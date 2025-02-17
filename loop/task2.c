#include "../function.h"

void loop_2(){
	printf("\n%s*Geometrik shakl - 'to'rtburchak'*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s*****\n*****\n*****\n*****\n*****\n\n%sInput: %s3\n%sOutput:\n%s***\n***\n***\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    for(int y=0; y<a; y++){
        for(int x=0; x<a; x++){
            printf("*");
        } printf("\n");
    }
}