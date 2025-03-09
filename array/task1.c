#include "../function.h"

void array_1(){
	printf("\n%s*Eng katta element*\n\n%sMisol sharti:\n%sMassiv (array) berilgan. O'sha massivdagi eng katta elementni toping va konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[12, 21, 36, 71, 24, 85, 12, 30, 25]\n%sOutput: %s85\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    int max = b[0];
    for(int j=0; j<a; j++){
        if(max<b[j]){
            max=b[j];
        }
    } printf("%d\n", max);
}