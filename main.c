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

		printf("\n\n%s1. If misollar to'plami\n2. For misollar to'plami\n3. Murakkab sikl\n4. Array misollar to'plami\n\n%sTanlash uchun tartib raqamini kiriting: ", violet, green);
		scanf("%s", inx);
		system("clear");
		
		if(inx[0] == 'q'){
			printf("\n%sDastur yakunlandi!\n\n", red);
			break;
		} else if(inx[0] == 'c'){
			system("clear");
			continue;
		}

		if(sscanf(inx, "%d", &num) != 1 || num > 4 || num <= 0){
			system("clear");
			printf("\n%sXatolik!\n\n", red);
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
		else if(inx[0] == '2'){
			do{
				printf("\n%s1. Sonlar yig'indisi\n2. Juft sonlar yig'indisi\n3. Toq sonlar yig'indisi\n4. 5 ga bo'linadigan sonlar yig'indisi\n5. Juft sonlar soni\n6. a va b sonlar orasidagi sonlar yig'indisi\n7. a va b sonlar orasidagi juft sonlar\n8. a va b sonlar orasida 3 ga bo'linadiganlar\n9. a va b sonlar orasida 2 va 3 ga bo'linadiganlar\n10. a va b sonlar orasida musbat sonlar\n11. a sonining 5 chi darajasi\n12. a sonining n chi darajasi\n13. Ketma-ketlik\n14. Mukammal son\n15. Ketma-ketlik kvadrati\n16. Armstrong raqami\n17. Tub son\n18. Son nechi xonali\n19. Raqamlar yig'indisi\n20. Teskari son\n21. Sonning teskarisi\n22. Faktorial\n23. Fibanachi ketma-ketligi\n\n%sTanlash uchun tartib raqamini kiriting: ", yellow, green);
				scanf("%s", input);

				if(input[0] == 'q'){
					system("clear");
					printf("\n%sDastur yakunlandi!\n\n", red);
					return 0;
				} else if(input[0] == 'c'){
					system("clear");
					continue;
				}

				if(sscanf(input, "%d", &num) != 1 || num > 23 || num <= 0){
					system("clear");
					printf("\n%sXatolik!\n", red);
					continue;
				}

				if(num == 1){
					for_1();
				} else if(num == 2){
					for_2();
				} else if(num == 3){
					for_3();
				} else if(num == 4){
					for_4();
				} else if(num == 5){
					for_5();
				} else if(num == 6){
					for_6();
				} else if(num == 7){
					for_7();
				} else if(num == 8){
					for_8();
				} else if(num == 9){
					for_9();
				} else if(num == 10){
					for_10();
				} else if(num == 11){
					for_11();
				} else if(num == 12){
					for_12();
				} else if(num == 13){
					for_13();
				} else if(num == 14){
					for_14();
				} else if(num == 15){
					for_15();
				} else if(num == 16){
					for_16();
				} else if(num == 17){
					for_17();
				} else if(num == 18){
					for_18();
				} else if(num == 19){
					for_19();
				} else if(num == 20){
					for_20();
				} else if(num == 21){
					for_21();
				} else if(num == 22){
					for_22();
				} else if(num == 23){
					for_23();
				} 
			} while (1);
		}
		else if(inx[0] == '3'){
			do{
				printf("\n%s1. Ketma-ketlik\n2. Geometrik shakl - 'to'rtburchak'\n3. Sonlar juftligi\n4. Sonlar juftligida C harfi\n5. Sonlar juftligida ustunlar\n6. Sonlar ro'yxati\n7. Diagonal\n8. Sonlar diagonali\n9. Teskari diagonal\n10. To'g'ri burchakli uchburchak\n11. Teskari to'g'ri burchakli uchburchak\n12. Sonlar uchburchagi\n13. Sonlar uchburchagi - tartibli varianti\n14. Parallelogram\n15. To'rtburchak qolibi\n16. Diaganal va uchburchaklar\n17. Yulduzli x\n18. Teskari parallelogram\n19. G'alati parallelogram\n20. Uchburchak\n21. Teskari uchburchak\n22. Uchburchak karkazi\n23. Archa\n24. Teskari archa\n25. Archa karkazi\n26. Teskari archa karkazi\n27. Yoyma uchburchak\n28. Romb\n29. Uzunroq romb\n30. Romb qolibi\n31. Yurakcha\n32. a, b sonlari orasidagi palindrom\n33. a va b sonlar orasidagi sonlar darajasi\n34. x va n ketma-ketligi\n35. x ning daraja ketma-ketligi\n%sTanlash uchun tartib raqamini kiriting: ", yellow, green);
				scanf("%s", input);

				if(input[0] == 'q'){
					system("clear");
					printf("\n%sDastur yakunlandi!\n\n", red);
					return 0;
				} else if(input[0] == 'c'){
					system("clear");
					continue;
				}

				if(sscanf(input, "%d", &num) != 1 || num > 35 || num <= 0){
					system("clear");
					printf("\n%sXatolik!\n", red);
					continue;
				}

				if(num == 1){
					loop_1();
				} else if(num == 2){
					loop_2();
				} else if(num == 3){
					loop_3();
				} else if(num == 4){
					loop_4();
				} else if(num == 5){
					loop_5();
				} else if(num == 6){
					loop_6();
				} else if(num == 7){
					loop_7();
				} else if(num == 8){
					loop_8();
				} else if(num == 9){
					loop_9();
				} else if(num == 10){
					loop_10();
				} else if(num == 11){
					loop_11();
				} else if(num == 12){
					loop_12();
				} else if(num == 13){
					loop_13();
				} else if(num == 14){
					loop_14();
				} else if(num == 15){
					loop_15();
				} else if(num == 16){
					loop_16();
				} else if(num == 17){
					loop_17();
				} else if(num == 18){
					loop_18();
				} else if(num == 19){
					loop_19();
				} else if(num == 20){
					loop_20();
				} else if(num == 21){
					loop_21();
				} else if(num == 22){
					loop_22();
				} else if(num == 23){
					loop_23();
				} else if(num == 24){
					loop_24();
				} else if(num == 25){
					loop_25();
				} else if(num == 26){
					loop_26();
				} else if(num == 27){
					loop_27();
				} else if(num == 28){
					loop_28();
				} else if(num == 29){
					loop_29();
				} else if(num == 30){
					loop_30();
				} else if(num == 31){
					loop_31();
				} else if(num == 32){
					loop_32();
				} else if(num == 33){
					loop_33();
				} else if(num == 34){
					loop_34();
				} else if(num == 35){
					loop_35();
				}
			} while (1);	
		}
		else if(inx[0] == '4'){
			do{
				printf("\n%s1. Eng katta element\n2. Eng kichik element\n3. O'rtacha qiymat\n4. Arrayda n bormi\n5. n chi index\n6. Array oxiriga son qo'shish\n7. Array boshiga son qo'shish\n8. a indexga b ni qo'shish\n9. n chi indexni olib tashlash\n10. Teskari array\n11. Arrayda n nechi marta bor\n12. O'xshash elementlar\n13. 2 ta arrayda o'xshash elementlar\n14. O'xshash elementlarni olib tashlash\n15. O'sish bo'yicha tartiblash\n16. Kamayish bo'yicha tartiblash\n17. Eng katta 2 chi element\n18. Elementlar yig'indisi a ga tengmi\n19. O'zaro teng arraylar\n\n%sTanlash uchun tartib raqamini kiriting: ", yellow, green);
				scanf("%s", input);

				if(input[0] == 'q'){
					system("clear");
					printf("\n%sDastur yakunlandi!\n\n", red);
					return 0;
				} else if(input[0] == 'c'){
					system("clear");
					continue;
				}

				if(sscanf(input, "%d", &num) != 1 || num > 19 || num <= 0){
					system("clear");
					printf("\n%sXatolik!\n", red);
					continue;
				}

				if(num == 1){
					array_1();
				} else if(num == 2){
					array_2();
				} else if(num == 3){
					array_3();
				} else if(num == 4){
					array_4();
				} else if(num == 5){
					array_5();
				} else if(num == 6){
					array_6();
				} else if(num == 7){
					array_7();
				} else if(num == 8){
					array_8();
				} else if(num == 9){
					array_9();
				} else if(num == 10){
					array_10();
				} else if(num == 11){
					array_11();
				} else if(num == 12){
					array_12();
				} else if(num == 13){
					array_13();
				} else if(num == 14){
					array_14();
				} else if(num == 15){
					array_15();
				} else if(num == 16){
					array_16();
				} else if(num == 17){
					array_17();
				} else if(num == 18){
					array_18();
				} else if(num == 19){
					array_19();
				} 
			} while (1);
		}
	} while(1); 
	return 0;
}