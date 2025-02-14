#include "../function.h"

void if_6(){
	printf("\n%s*a, b, c katta son*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. Shu sonlardan eng kattasini toping.\n\n%sNamuna:\n%sInput: %sa=4, b=7, c=5\n%sOutput: %s'katta son b=7'\n\n%sInput: %sa=9, b=3, c=10\n%sOutput: %s'katta son c=10'\n\n%sInput: %sa=5, b=1, c=4\n%sOutput: %s'katta son a=5'\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, violet, white, violet, white, green);
	
	int a, b, c;
	printf("%sInput: ", violet);
	scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
	if(a>b && a>c){
		printf("katta son a = %d\n", a);
	} else if(b>a && b>c){
		printf("katta son b = %d\n", b);
	} else {
		printf("katta son c = %d\n", c);
	}
}