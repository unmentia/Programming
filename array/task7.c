#include "../function.h"

void array_7(){
	printf("\n%s*Array boshiga son qo'shish*\n\n%sMisol sharti:\n%sn, array[] berilgan. Shu massiv boshiga n ni jo'ylashtiring va konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[6, 25, 91, 23, 72, 9, 18, 6], n = 13\n%sOutput: %s[13, 6, 25, 91, 23, 72, 9, 18, 6]\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    printf("Number: ");
    scanf("%d", &c);
	printf("Output: ");
    int d[a+1];
    d[0] = c;
    for(int i=0; i<=a; i++){
        d[i+1]=b[i];
        printf("%d ", d[i]);
    }
}