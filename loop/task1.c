#include "../function.h"

void loop_1(){
	printf("\n%s*Ketma-ketlik*\n\n%sMisol sharti:\n%sn soni berilgan. Quyidagi yig'indini hisoblovchi dastur yozing: (1 + 1/2 + 1/3 + 1/4 ..... 1/n).\n\n%sNamuna:\n%sInput: %s10\n%sOutput: %s2.92...\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
    float result = 0;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output: ");
    for(float i=1; i<=10; i++){
        result+=1/i;
    } printf("%f\n", result);
}