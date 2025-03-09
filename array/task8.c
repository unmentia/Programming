#include "../function.h"

void array_8(){
	printf("\n%s*a indexga b ni qo'shish*\n\n%sMisol sharti:\n%sa, b, array[] berilgan. Shu massivning a indexsiga b sonini joylashtiring va massivni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[4, 5, 6, 7], a = 1, b = 9\n%sOutput: %s[4, 9, 5, 6, 7]\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	printf("%sInput:\n", violet);
	printf("Size: ");
    int a;
    scanf("%d", &a);

    printf("Elements: ");
    int b[a];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }

    int c, d;
    printf("Index: ");
    scanf("%d", &c);
    printf("Number: ");
    scanf("%d", &d);	

    if(c>a || c<0){
        printf("%sXatolik\n", red);
    } else {
        int e[a];
        int t = 0;

        for(int i=0; i<=a; i++){
            if(i==c){
                e[i] = d;
            } else {
                e[i] = b[t];
                t++;
            }
        }

        printf("Output: ");
        for(int i=0; i<=a; i++){
            printf("%d ", e[i]);
        }
    }
}