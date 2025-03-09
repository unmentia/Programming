#include "../function.h"

void array_18(){
	printf("\n%s*Elementlar yig'indisi a ga tengmi*\n\n%sMisol sharti:\n%sarray[], n berilgan. Arrayning xohlagan ikkita elementlari yig'indisi a ga teng bo'lishini aniqlang va ularni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[1, 2, 3, 7, 4], n = 5\n%sOutput:\n%s1 + 4 = 5\n2 + 3 = 5\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
	printf("Output:\n");
    for(int i=0; i<a; i++){
        for(int j=i+1; j<a; j++){
            if(b[i]+b[j]==c){
                printf("%d + %d = %d\n", b[i], b[j], c);
            }
        }
    }
}