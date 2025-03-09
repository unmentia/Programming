#include "../function.h"

void array_15(){
	printf("\n%s*O'sish bo'yicha tartiblash*\n\n%sMisol sharti:\n%sarray[] berilgan. Shu massivning elementlarini o'sish tartibida jo'ylashtiring va hosil bo'lgan massivni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[2, 4, 1, 5]\n%sOutput: %s[1, 2, 4, 5]\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    for(int i=0; i<a; i++){
        for(int j=0; j<a-1; j++){
            if(b[j]>b[j+1]){
                int t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    for(int i=0; i<a; i++){
        printf("%d ", b[i]);
    }
}