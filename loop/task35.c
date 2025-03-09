#include "../function.h"

void loop_35(){
	printf("\n%s*x ning daraja ketma-ketligi*\n\n%sMisol sharti:\n%sx, n sonlari berilgan: x^0 + x^1 + x^2 + x^3 +... x^n. n buyerda ketma-ketlikni n chi hadi. Masalan: [2^0 + 2^1 + 2^3 + 2^4 + 2^5 + 2^6 + 2^7].\n\n%sNamuna:\n%sInput: %sx=2, n=7\n%sOutput:%s255\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a, b;
	printf("%sInput: ", violet);
	scanf("%d %d", &a, &b);
	printf("Output: ");
	int answer = 1;
	int res = 0;
	for(int i=0; i<=b; i++){
		answer = 1;
		for(int j=0; j<i; j++){
			answer *= a;
		}
		res += answer;
	}
	printf("%d\n", res);
}