#include "../function.h"

void array_10(){
	printf("\n%s*Teskari array*\n\n%sMisol sharti:\n%sarray[] berilgan. Shu massivning teskarisini yangi massivga ko'chirib o'tkazing va konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[1, 2, 3, 4] \n%sOutput: %s[4, 3, 2, 1]\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    for(int i=a-1; i>=0; i--){
        printf("%d ", b[i]);
    }
}