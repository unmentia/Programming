#include "../function.h"

void array_13(){
	printf("\n%s*2 ta arrayda o'xshash elementlar*\n\n%sMisol sharti:\n%sarray1[], array2[] berilgan. Shu ikkita arraydagi o'xshash elementlarni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %sarray1[1, 2, 3], array2[1, 4, 1, 2]\n%sOutput:\n%sarray1[0]: 1 = array2[0]\narray1[0]: 1 = array2[2]\narray1[1]: 2 = array2[3]\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    printf("Size: ");
    scanf("%d", &c);
    printf("Elements: ");
    int d[c];
    for(int i=0; i<c; i++){
        scanf("%d", &d[i]);
    }
	printf("Output:\n");
    for(int i=0; i<a; i++){
        for(int j=0; j<c; j++){
            if(b[i]==d[j]){
                printf("array[%d]: %d = array[%d]\n", i, b[i], j);
            }
        }
    }
}