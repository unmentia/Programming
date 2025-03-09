#include "../function.h"

void array_14(){
	printf("\n%s*O'xshash elementlarni olib tashlash*\n\n%sMisol sharti:\n%sarray[] berilgan. Shu arraydagi o'xshash elementlarni olib tashlang.\n\n%sNamuna:\n%sInput: %s[1, 3, 4, 1, 5, 3]\n%sOutput: %s[1, 3, 4, 5]\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
                for(int k=j; k<a; k++){
                    b[k]=b[k+1];
                }
                a--;
                j--;
            }
        }
    }
    for(int i=0; i<a; i++){
        printf("%d ", b[i]);
    }
}