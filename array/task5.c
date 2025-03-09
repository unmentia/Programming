#include "../function.h"

void array_5(){
	printf("\n%s*n chi index*\n\n%sMisol sharti:\n%sn, array[] berilgan. Shu massivda n chi indexdagi elementni konsolga chiqaring. Agar index xato bo'lsa, 0 chiqaring.\n\n%sNamuna:\n%sInput: %s[6, 25, 91, 23, 72, 9, 18, 6], n = 22\n%sOutput: %s0\n%sInput: %s[6, 25, 91, 23, 72, 9, 18, 6], n = 3\n%sOutput: %s23\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

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
	printf("Output: ");
    if(c>=a){
        printf("0\n");
    } else {
        printf("%d\n", b[c]);
    }
}