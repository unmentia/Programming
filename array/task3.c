#include "../function.h"

void array_3(){
	printf("\n%s*O'rtacha qiymat*\n\n%sMisol sharti:\n%sMassiv (array) berilgan. Massiv elementlarining o'rtacha qiymatini hisoblang va konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[6, 25, 91, 23, 72, 9, 18, 6]\n%sOutput: %s31\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput:\n", violet);
	printf("Size: ");
    scanf("%d", &a);
	printf("Elements: ");
    int b[a];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
	printf("Output: ");
    int plus = 0;;
    int res = 0;
    for(int j=0; j<a; j++){
        plus+=b[j];
    }
    res=plus/a;
    printf("%d\n", res);
}