#include "../function.h"

void array_11(){
	printf("\n%s*Arrayda n nechi marta bor*\n\n%sMisol sharti:\n%sn va array[] berilgan. Shu massivda nechta n soni borligini topib konsolga chiqaring. \n\n%sNamuna:\n%sInput: %s[2, 4, 6, 4], n = 4\n%sOutput: %s2\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput:\n", violet);
    printf("Size: ");
    scanf("%d", &a);
    printf("Elements: ");
    int b[a];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    int c;
    int d = 0;
    printf("Number: ");
    scanf("%d", &c);
	printf("Output: ");
    for(int i=0; i<a; i++){
        if(b[i]==c){
            d++;
        }
    }
    printf("%d\n", d);
}