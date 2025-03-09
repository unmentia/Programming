#include "../function.h"

void array_19(){
	printf("\n%s*O'zaro teng arraylar*\n\n%sMisol sharti:\n%sa[], b[] massivlari berilgan. Shu massivlarni o'zaro teng ekanligini aniqlang. Agar ular teng bo'lsa true, bo'lmasa false konsolga chiqaring. O'zaro teng deganda, ularning barcha elementlari tengligi nazarda tutilyabdi. Arraylarning uzunligi bir xil deb oling.\n\n%sNamuna:\n%sInput: %s a = [1, 2, 3, 7, 4], b = [1, 2, 3, 7, 4]\n%sOutput: %strue\n\n%sInput: %s a = [1, 2, 3, 7, 4], b = [1, 2, 3, 7, 6]\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
	printf("%sInput:\n", violet);
    printf("Size: ");
    scanf("%d", &a);
    printf("Elements: ");
    int b[a];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    printf("Elements: ");
    int c[a];
    int t = 0;
    for(int i=0; i<a; i++){
        scanf("%d", &c[i]);
    }
	printf("Output: ");
    for(int i=0; i<a; i++){
        if(b[i]==c[i]){
            t++;
        }
    }
    if(t==a){
        printf("true\n");
    } else {
        printf("false\n");
    }
}