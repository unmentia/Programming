#include "../function.h"

void loop_28(){
	printf("\n%s*Romb*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring. n bu yerda eng uzun yulduzlar soni (row number).\n\n%sNamuna:\n%sInput: %s5\n%sOutput:\n%s    *\n   * *\n  * * *\n * * * *\n* * * * *\n * * * *\n  * * *\n   * *\n    *\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    int t = 1;
    for(int y=0; y<a*2-1; y++){
        for(int x=0; x<a-t; x++){
            printf(" ");
        }
        for(int x=0; x<t; x++){
            printf("* ");
        }
        if(y<a-1){
            t++;
        } else {
            t--;
        }
        printf("\n");
    }
}