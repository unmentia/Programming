#include "../function.h"

void array_17(){
	printf("\n%s*Eng katta 2 chi element*\n\n%sMisol sharti:\n%sarray[] berilgan. O'sha massivdagi eng katta ikkinchi elementni toping. Bunda array elementlari bir-biriga teng emas deb oling.\n\n%sNamuna:\n%sInput: %s[1, 2, 6, 4, 7, 5]\n%sOutput: %s6\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
            if(b[j]<b[j+1]){
                int t=b[j+1];
                b[j+1]=b[j];
                b[j]=t;
            }
        }
    } 
    printf("%d\n", b[1]);
}