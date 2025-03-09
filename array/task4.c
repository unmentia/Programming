#include "../function.h"

void array_4(){
	printf("\n%s*Arrayda n bormi*\n\n%sMisol sharti:\n%sn, array[] berilgan. Shu massivda n soni bor yoki yo'qligini aniqlang. n soni bo'lsa true, bo'lmasa false konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[6, 25, 91, 23, 72, 9, 18, 6], n = 23\n%sOutput: %strue\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    int t = 0;
	printf("Number: ");
    scanf("%d", &c);
	printf("Output: ");
    for(int j=0; j<a; j++){
        if(c==b[j]){
            t++;
        }
    }
    if(t>0){
        printf("true\n");
    } else {
        printf("false\n");
    }
}