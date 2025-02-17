#include "../function.h"

void loop_33(){
	printf("\n%s*a va b sonlar orasidagi sonlar darajasi*\n\n%sMisol sharti:\n%sa, b, c sonlari berilgan. a dan b gacha bo'lgan sonlarni c chi darajasini yig'indisini hisoblovchi dastur yozing. Masalan, a=2, b=10, c=3. Bunda: 2^3 + 3^3 + 4^3 + 5^3 + 6^3 + 7^3 + 8^3 + 9^3 + 10^3 = 3024\n\n%sNamuna:\n%sInput: %sa=2, b=10, c=3\n%sOutput: %s3024\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a, b, c;
	printf("%sInput: ", violet);
    scanf("%d %d %d", &a, &b, &c);
	printf("Output: ");
    int d = 1;
    int e = 0;
    for(int i=a; i<=b; i++){
        d = 1;
        for(int j=0; j<c; j++){
            d*=i;
        }
        e+=d;
    } printf("%d\n", e);
}