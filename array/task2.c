#include "../function.h"

void array_2(){
	printf("\n%s*Eng kichik element*\n\n%sMisol sharti:\n%sMassiv (array) berilgan. O'sha massivdagi eng kichik elementni toping va konsolga chiqaring.\n\n%sNamuna:\n%sInput: %s[12, 21, 36, 71, 24, 85, 1, 30, 25]\n%sOutput: %s1\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

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
    int min = b[0];
    for(int j=0; j<a; j++){
        if(min>b[j]){
            min = b[j];
        }
    } printf("%d\n", min);
}