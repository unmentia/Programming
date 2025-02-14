#include "../function.h"

void if_22(){
	printf("\n%s*Sonlar o'qidagi masofa*\n\n%sMisol sharti:\n%sSonlar o'qida a, b sonlari berilgan. Ular orasidagi masofani toping.\n\n%sNamuna:\n%sInput: %sa=2, b=6\n%sOutput: %s4\n\n%sInput: %sa=-2, b=6\n%sOutput: %s8\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b;
	printf("%sInput: ", violet);
	scanf("%d %d", &a, &b);
	printf("Output: ");
	if(a>b){
		printf("%d\n", a-b);
	} else {
		printf("%d\n", b-a);
	}
}