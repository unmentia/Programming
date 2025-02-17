#include "../function.h"

void loop_6(){
	printf("\n%s*Sonlar ro'yxati*\n\n%sMisol sharti:\n%sn soni berilgan. Geometrik shaklni ekranga chiqaring.\n\n%sNamuna:\n%sInput: %s10\n%sOutput:\n%s0 1 2 3 4 5 6 7 8 9\n10 11 12 13 14 15 16 17 18 19\n20 21 22 23 24 25 26 27 28 29\n30 31 32 33 34 35 36 37 38 39\n40 41 42 43 44 45 46 47 48 49\n50 51 52 53 54 55 56 57 58 59\n60 61 62 63 64 65 66 67 68 69\n70 71 72 73 74 75 76 77 78 79\n80 81 82 83 84 85 86 87 88 89\n90 91 92 93 94 95 96 97 98 99\n\n%sSinab ko'rish!\n\n", yellow, green, white, green, violet, white, violet, white, green);

	int a;
	printf("%sInput: ", violet);
    scanf("%d", &a);
	printf("Output:\n");
    int temp = 0;
    for(int y=0; y<a; y++){
        for(int x=0; x<a; x++){
            printf("%d ", temp);
            temp++;
        } printf("\n");
    }
}