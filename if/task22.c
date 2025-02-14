#include "../function.h"

void if_22(){
	printf("\n*Sonlar o'qidagi masofa*\nMisol sharti:\nSonlar o'qida a, b sonlari berilgan. Ular orasidagi masofani toping.\nNamuna:\nInput: a=2, b=6\nOutput: 4\n\nInput: a=-2, b=6\nOutput: 8\nSinab ko'rish: ");
	
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("%d\n", a-b);
	} else {
		printf("%d\n", b-a);
	}
}