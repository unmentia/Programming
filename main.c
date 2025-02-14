#include "function.h"

char red[] = "\033[31m";
char blue[] = "\033[34m";
char violet[] = "\033[35m";
char green[] = "\033[32m";
char yellow[] = "\033[33m";
char white[] = "\033[37m";

int main(){
	char input[10];
	int num;
	char inx[10];

	do{
		char str[] = "\"Dasturlash.uz\"ga xush kelibsiz!";
		int len = strlen(str);
		char yoho = '-';
		for(int i=0; i<len; i++){
			printf("%s%c", red, yoho);
		}

		printf("\n\n%s\"Dasturlash.uz\"ga xush kelibsiz!\n\n", blue);

		for(int i=0; i<len; i++){
			printf("%s%c", red, yoho);
		}

		printf("\n\n%s1. If misollar to'plami\n2. For misollar to'plami\n\n", violet);
		printf("%sTanlash uchun tartib raqamini kiriting: ", green);
		scanf("%s", inx);
		system("clear");
		
		if(inx[0] == 'q'){
			printf("\n%sDastur yakunlandi!\n\n", red);
			break;
		} else if(inx[0] == 'c'){
			system("clear");
			continue;
		}

		if(inx[0] == '1'){
			do{
				printf("\n%s1. 10 bilan taqqoslash\n2. Butun qism\n3. Qoldig'ini aniqlash\n4. Juft yoki toq son\n5. Ikkita sondan kattasi\n6. a, b, c katta son\n7. Musbat va manfiy\n8. Son 5 ga bo'linadimi\n9. Son 3 va 4 ga bo'linadimi\n10. Kabisa yili\n11. Char sonmi\n12. Katta yoki kichik alfavit\n13. Hafta kuni\n14. Uchburchakning burchaklari\n15. Uchburchak tomonlari\n16. Uchburchak shakli\n17. Nechtasi musbat\n18. Kichik son\n19. O'rtacha qiymat\n20. Sonlarni taqqoslash\n21. O'zaro teng sonlar\n22. Sonlar o'qidagi masofa\n23. Sonlar o'qidagi a nuqta\n24. Sonlar necha xonali\n25. Barchasi musbatmi\n26. 3 ta son\n27. 2 tasini solishtirish\n28. Son yasash\n\n%sTanlash uchun tartib raqamini kiriting: ", yellow, green);
				scanf("%s", input);

				if(input[0] == 'q'){
					system("clear");
					printf("\n%sDastur yakunlandi!\n\n", red);
					return 0;
				} else if(input[0] == 'c'){
					system("clear");
					continue;
				}

				if(sscanf(input, "%d", &num) != 1 || num > 28 || num <= 0){
					system("clear");
					printf("\n%sXatolik!\n", red);
					continue;
				}

				if(num == 1){
					if_1();
				} else if(num == 2){
					if_2();
				} else if(num == 3){
					if_3();
				} else if(num == 4){
					if_4();
				} else if(num == 5){
					if_5();
				} else if(num == 6){
					if_6();
				} else if(num == 7){
					if_7();
				} else if(num == 8){
					if_8();
				} else if(num == 9){
					if_9();
				} else if(num == 10){
					if_10();
				} else if(num == 11){
					if_11();
				} else if(num == 12){
					if_12();
				} else if(num == 13){
					if_13();
				} else if(num == 14){
					if_14();
				} else if(num == 15){
					if_15();
				} else if(num == 16){
					if_16();
				} else if(num == 17){
					if_17();
				} else if(num == 18){
					if_18();
				} else if(num == 19){
					if_19();
				} else if(num == 20){
					if_20();
				} else if(num == 21){
					if_21();
				} else if(num == 22){
					if_22();
				} else if(num == 23){
					if_23();
				} else if(num == 24){
					if_24();
				} else if(num == 25){
					if_25();
				} else if(num == 26){
					if_26();
				} else if(num == 27){
					if_27();
				} else if(num == 28){
					if_28();
				} 
			} while (1);
		} 
	} while (1);
	return 0;
}