#include "../function.h"

void array_9(){
	printf("\n%s*n chi indexni olib tashlash*\n\n%sMisol sharti:\n%sarray[] va n soni berilgan. Shu massivning n chi indexsini olib tashlang.\n\n%sNamuna:\n%sInput: %s[4, 5, 6, 7], n = 2\n%sOutput: %s[4, 5, 7]\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    if(c<0 || c>=a){
        printf("%sXatolik\n", red);
    } else {
        printf("Output: ");
        for(int j=0; j<a; j++){
            if(j==c){
                continue;
            } 
            printf("%d ", b[j]);
        }
    }
}