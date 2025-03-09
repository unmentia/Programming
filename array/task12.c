#include "../function.h"

void array_12(){
	printf("\n%s*O'xshash elementlar*\n\n%sMisol sharti:\n%sarray[] berilgan. Shu arraydagi o'xshash elementlarni konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[1, 2, 1, 4]\n%sOutput: %sarray[0]: 1 = array[2]: 1\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
        for(int j=i+1; j<a; j++){
            if(b[i]==b[j]){
                printf("array[%d]: %d = array[%d]: %d\n", i, b[i], j, b[j]);
            }
        }
    }
}