#include "../function.h"

void for_23(){
	printf("\n%s*Fibanachi ketma-ketligi*\n\n%sMisol sharti:\n%sn soni berilgan. Berilgan birinchi n ta fibanachi ketma-ketligining yig'indisini toping. Masalan: fibanachi ketma-ketligi: 0 1 1 2 3 5 8 13... Bunda ketma-ketlikni birinchi raqami f1 = 0, ikkinchi raqami f2 = 1. Ketma-ketlikni n chi xadi fn = f(n-1) + f(n-2) formula bilan topiladi. Ya'ni, xohlagan bitta xadini topish uchun o'zidan bitta va o'zidan ikkita oldingi xadlari yi'gindisiga teng bo'ladi. Namunadagi 13 ga qarang, bunda 13 = 8 + 5.\n\n%sNamuna:\n%sInput: %s15\n%sOutput: %s987\n\n%sInput: %s10\n%sOutput: %s89\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    int c = 1;
    int d = 0;
    for(int i=0; i<a; i++){
        d=b+c;
        b=d;
        c=c+b;
        i++;
    }
    (a%2==0) ? printf("%d\n", c) : printf("%d\n", b);
}