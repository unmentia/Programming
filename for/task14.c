#include "../function.h"

void for_14(){
	printf("\n%s*Mukammal son*\n\n%sMisol sharti:\n%sa soni berilgan. Shu son mukammal son yoki yo'qmi, shuni aniqlang. Agar mukammal son bo'lsa, true bo'lmasa false konsolga chiqaring. Mukammal son deb, bo'linuvchilar yig'indisiga teng bo'ladigan songa (o'zidan tashqari) aytiladi. Masalan: a = 6, uning bo'linuvchilari 1, 2, 3. 6 = 1 + 2 + 3, demak 6 raqami murakkab son hisoblanadi. a = 15, uning bo'linuvchilari: 1, 3, 5. 1 + 3 + 5 = 8, bo'linuvchilari yig'indisi 8 ga teng, 15 ga emas. Shuning uchun bu mukammal son emas.\n\n%sNamuna:\n%sInput: %s6\n%sOutput: %strue\n\n%sInput: %s15\n%sOutput: %sfalse\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, violet, white, violet, white, green);

	int a;
    printf("%sInput: ", violet);
    scanf("%d", &a);
    printf("Output: ");
    int b = 0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            b+=i;
        }
    }
    if(b==a){
        printf("True\n");
    } else {
        printf("False\n");
    }
}