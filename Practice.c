#include <stdio.h>

int main()
{
	practice();
}


practice()
{
	/*음식 이름, 음식 가격은 모두 변수로 지정해주세요.
		.[마침표], [쉼표]는 변수로 지정해주세요. >> % c
		원, 어치, 합치면, 부족한, 내야만이라는 단어도 변수로 지정해주세요
		총 10명의 사람이 다 함께 음식점에 도착하였다.
		총 10명이 모은 금액은 100000원이다.
		떡볶이는 6470000원 어치,
		감자튀김은 6988000원 어치,
		모듬 튀김은 666777원 어치,
		김말이 튀김은 8900000원 어치,
		계란 튀김은 70000원 어치,
		순대는 438000원 어치,
		우동은 660000원 어치,
		오뎅은 1480000원 어치,
		돈까스는 728000원 어치,
		치즈 돈까스는 889000원 어치,
		김치 돈까스는 1498000원 어치,
		김밥은 158000원 어치,
		참치 김밥은 1690000원 어치,
		김치 김밥은 1275800원 어치,
		아이스 아메리카노는 968000원 어치,
		카페라떼는 178000원 어치,
		카라멜 마끼아또는 9900원 어치,
		믹스 커피는 999999원 어치,
		볶음밥은 690000원 어치,
		김치 볶음밥은 5800080원 어치,
		계란 볶음밥은 4385000원 어치,
		음료수는 190000원 어치,
		과자는 150000원 어치를 사먹게 되었다.
		위 음식의 가격을 모두 합치면 ? 원이고,
		현재 ? 원이 부족한 상태다.
		따라서, ? 명은 ? 원을 더 내야만 한다.*/

	/*int peoplecount = 10;
	int people = 100000;
	int tteok = 6470000, potato = 69988000, denbbura = 666777, gimmali = 8900000, egg = 70000, soondae = 438000; 
	int udong = 660000, odeng = 1480000, donggas = 728000, cheese = 889000, kimchi = 1498000, kimbab = 158000, tunakim = 1690000, kimchikim = 1275800, americano = 968000;
	int cafelatte = 178000, caramel = 9900, mixcoffe = 999999, rice = 690000, kimchirice = 5800080, eggrice = 4385000, drink = 190000, snack = 150000;

	int totalprice = tteok + potato + denbbura + gimmali + egg + soondae + udong + odeng + donggas + cheese + kimchi + kimbab + tunakim + kimchikim + americano + cafelatte +
		caramel + mixcoffe + rice + kimchirice + eggrice + drink + snack;

	int emptyprice = totalprice - people;

	printf("총 10명의 사람이 다 함께 음식점에 도착하였다\n");
	printf("총 10명이 모은 금액은 %d 이다\n", people);

	printf("떡볶이는 %d원 어치\n", tteok);
	printf("감자튀김은 %d원 어치\n", potato);
	printf("모듬 튀김은 %d원 어치\n", denbbura);
	printf("김말이 튀김은 %d 원어치\n", gimmali);
	printf("계란 튀김은 %d원 어치\n", egg);
	printf("순대는 %d 원 어치\n", soondae);
	printf("우동은 %d 원 어치\n", udong);
	printf("오뎅은 %d원 어치\n", odeng);
	printf("돈까스는 %d원 어치\n", donggas);
	printf("치즈 돈까스는 %d원어치\n", cheese);
	printf("김치 돈까스는 %d원어치\n", kimchi);
	printf("김밥은 %d 원어치\n", kimbab);
	printf("참치 김밥은 %d원 어치\n", tunakim);
	printf("김치 김밥은 %d원 어치\n", kimchikim);
	printf("아이스 아메리카노는 %d원 어치\n", americano);
	printf("카페라떼는 %d원 어치\n", cafelatte);
	printf("카라멜 마끼아또는 %d원어치\n", caramel);
	printf("믹스 커피는 %d 원 어치\n", mixcoffe);
	printf("볶음밥은 %d원 어치\n", rice);
	printf("김치 볶음밥은 %d 원어치\n", kimchirice);
	printf("계란 볶음 밥은 %d 원어치\n", eggrice);
	printf("음료수는 %d 원 어치\n", drink);
	printf("과자는 %d원 어치\n", snack);

	printf("위 음식의 가격을 모두 합치면 %d 원 이고 현재 %d 원이 부족한 상태다\n", totalprice, emptyprice);
	printf("따라서 %d명은 %d원을 더 내야만 한다\n", peoplecount , emptyprice);*/

	/*철수와 영희는 함께 음식을 준비했습니다.
		철수는 토마토, 감자, 주스를 샀습니다.
		영희는 떡, 마늘, 양파를 샀습니다.
		토마토는 2000원, 감자는 800원, 주스는 1200원입니다.
		떡은 6200원, 마늘은 2000원, 양파는 3200원입니다.
		총 합은 ? 원이 나왔습니다.
		철수는 ? 원을 지불하고
		영희는 ? 원을 지불하였습니다.
		영희는 철수보다 ? 원을 더 지불했습니다.*/

	/*int tomato = 2000, gamga = 800, juice = 1200;
	int tteok = 6200, maneul = 2000, yangpa = 3200;
	int totalprice = tomato + gamga + juice + tteok + maneul + yangpa;

	int cjftnprice = tomato + gamga + juice;
	int dudgmlprice = tteok + maneul + yangpa;

	int dudgmlcount = dudgmlprice - cjftnprice;


	printf("철수와 영희는 함께 음식을 준비 했습니다\n");
	printf("철수는 토마토, 감자, 주스를 샀습니다\n");
	printf("영희는 떡, 마늘, 양파를 샀습니다\n");

	printf("토마토는 %d원, 감자는 %d원, 주스는 %d원 입니다\n", tomato, gamga, juice);
	printf("떡은 %d원, 마늘은 %d원, 양파는 %d원입니다\n", tteok, maneul, yangpa);
	printf("총 합은 %d 원이 나왔습니다\n", totalprice);
	printf("철수는 %d원을 지불하고\n", cjftnprice);
	printf("영희는 %d원을 지불 했습니다 \n", dudgmlprice);
	printf("영희는 철수보다 %d원을 더 지불했습니다\n", dudgmlcount);*/

	/*scanf에 4개 의 값을 입력받고, 아래와 같은 문장을 만드시오.

	총 두 개의 파생문제를 더 드릴 것입니다.

	1. 이번에는 printf에서 직접적으로 더하는 방식은 사용을 하지 않습니다 . >> printf("%d", a + b);
	2. 이번에는 변수를 5개만 사용해보겠습니다.

	1. 이번에는 printf에서 직접적으로 더하는 방식은 사용을 하지 않습니다 . >> printf("%d", a + b);
	2. 이번에는 변수를 4개만 사용해보겠습니다.

	? [첫번째숫자] + ? [두번째숫자] = ? [합1]
	? [세번째숫자] * ? [네번째숫자] = ? [합2]
	? [합1] + ? [합2] = ?*/


//int a, b, c, d;
//
//printf("첫번째 숫자 : \n");
//scanf("%d", &a);
//printf("두번째 숫자 : \n");
//scanf("%d", &b);
//printf("세번째 숫자 : \n");
//scanf("%d", &c);
//printf("네번째 숫자 : \n");
//scanf("%d", &d);
//
//c = a + b;
//
//printf("%d + %d = %d\n", a, b, c);
//
//a = c + d;
//
//printf("%d + %d = %d\n", c, d, a);
//
//b = c + a;
//
//printf("%d + %d = %d\n", c, a, b);



//다음 세 가지 중 고르시오.
	//1. 감자. 2.옥수수 3. 수박
	//1번을 누를 시
	//1번 감자를 선택하셨습니다.라는 문구가 나오도록.
	//2번을 누를 시
	//2번 옥수수를 선택하셨습니다.
	//3번을 누를 시,
	//3번 수박을 선택하셨습니다.
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//그 뒤 1번 감자에서 1천원어치, 2천원어치 3천원어치.
	//2번을 누를 시 옥수수에서 4천원어치, 5천원어치 6천원어치,
	//3번을 누를 시 수박에서 10000천원어치, 20000천원어치, 30000천원어치.
	//라는 문구가 각각 나오도록 설정하고,
	//그 안에서 또 1번을 누를 시
	//“감자 1천원어치를 선택하셨습니다.” 라는 문구가 나오도록 하고,
	//몇 개를 주문하겠냐고 질문한 뒤 그 개수에 따라 금액이 변동하도록 하시오.

//int gamga, oksusu, subak;
//int a, b, c, d;
//
//
//
//printf("다음 세 가지중 고르시오\n");
//printf("1. 감자, 2. 옥수수, 3. 수박\n");
//scanf("%d", &a);
//
//if (a == 1)
//{
//	printf("감자를 선택하셨습니다\n");
//	printf("몇개를 구매하시겠습니까?\n");
//	scanf("%d", &b);
//	
//
//	if (b == 1)
//	{
//		printf("감자 1천원어치를 선택하셨습니다\n");
//		
//	}
//	if (b == 2)
//	{
//		printf("감자 2천원어치를 선택하셨습니다\n");
//		
//	}
//	if (b == 3)
//	{
//		printf("감자 3천원어치를 선택하셨습니다\n");
//		
//	}
//	
//}
//
//if (a == 2)
//{
//	printf("옥수수를 선택하셨습니다");
//	printf("몇개를 구매하시겠습니까?\n");
//	scanf("%d", &c);
//
//
//	if (c == 1)
//	{
//		printf("옥수수 4천원어치를 선택하셨습니다\n");
//
//	}
//	if (c == 2)
//	{
//		printf("옥수수 5천원어치를 선택하셨습니다\n");
//
//	}
//	if (c == 3)
//	{
//		printf("옥수수 6천원어치를 선택하셨습니다\n");
//
//	}
//}
//
//if (a == 3)
//{
//	printf("수박을 선택하셨습니다");
//	printf("몇개를 구매하시겠습니까?\n");
//	scanf("%d", &d);
//
//
//	if (d == 1)
//	{
//		printf("수박 10000원어치를 선택하셨습니다\n");
//
//	}
//	if (d == 2)
//	{
//		printf("수박 20000원어치를 선택하셨습니다\n");
//
//	}
//	if (d == 3)
//	{
//		printf("수박 30000원어치를 선택하셨습니다\n");
//
//	}


	/*처음에 어떤 숫자를 입력받을지 알 수 없지만, 10과 20이라고 가정한다.
	그렇게 하면 아래처럼 나타난다.
	10 + 20 =
	에서 깜빡이게 되고, 위 예시상으로 정답은 30이지만 30을 적지 않을 수도 있다.
	따라서, 10번동안 오답일 경우 오답이라는 문장과 정답이 몇인지 알려주는 프로그램을 개발하고,
	정답일 경우, 정답입니다 라는 문장과 함께 다음 문제가 나타난다.
	1.10
	2.20
	둘 중에 어떤 숫자가 더 크냐는 질문을 하게 되고,
	위 예시상으로 정답은 2번이지만 1번일 수도 있다.
	정답일 경우 이번에는 숫자가
	1.20
	2.10
	같은식으로 바뀌어서 출력되며 문제가 출제되고, >> 총 5번
	3번 이상 오답일 경우 오답이라는 문구와 함께 몇 번이 정답인지 나타난다.*/


	/*int a, b, c, d, e, f, g, h;
	int total;

	printf("숫자2개를 입력하세요 \n");
	printf("숫자 1 입력 : \n");
	scanf("%d", &a);
	printf("숫자 2 입력 : \n");
	scanf("%d", &b);

	printf("%d + %d = ??\n", a, b);

	printf("정답 입력 : \n");
	scanf("%d", &c);

	total = a + b;

	if (c == total)
	{
		printf("정답입니다\n");
		
	}

	if (c != total)
	{
		printf("오답입니다\n");
		printf("정답을 다시 입력하세요 \n");
		printf("정답은 ? \n");
		scanf("%d", &e);

		if (e == total)
		{
			printf("정답입니다\n");
			

			
		}

		if (e != total)
		{
			printf("오답입니다\n");

			while (e != total)
			{
				printf("정답을 다시 입력하세요\n");
				printf("정답은?\n");
				scanf("%d", &f);

				if (f == total)
				{
					printf("정답입니다\n");
					break;
				}

				if (f != total)
				{
					printf("오답입니다\n");
				}
			}
			
		}

		
	}*/


	/*[1.기본 문제출제 : 누가 보더라도 이해하기 쉽게 코드를 작성하시오.]
	[2.기본 문제출제 : 누가 보더라도 프로그램을 사용할 수 있게 제대로 정의해주시오]
	[3.기본 문제출제 : 아래 문제의 경우 음식이 세 가지로 분류되어 있는데, 본인이 두 가지를 더 추가해서 만든다.]
	[4.기본 문제출제 : 참고로 이 문제는 풀 수 있는 방식이 워낙 많고, 도움이 될 수 있는 문제기 때문에, 본인이 풀었을 경우, 다른 방식으로 또 풀어보겠다.이후 피드백을 드림.]
	2번 기본 문제출제에 대한 예시
		떡볶이 금액 : 10000scanf와 같은 식으로, 숫자만 입력받는 형태가 아닌, 누가 보더라도 이해하고 프로그램을 사용할 수 있게.



		철수와 영희가 있다.
		둘이 가진 금액은 애초에 10000원으로,
		처음에 용돈을 추가적으로 입력받는다.
		추가적으로 입력받으면, 현재 금액이 얼마인지 바로 나타내준 후,
		바로 떡볶이 금액, 우동 금액, 과자 금액을 입력받는다.
		그리고
		바로 떡볶이를 몇 개를 주문하겠냐는 메시지가 나타난다.
		이곳에서 20개를 입력하게 되면 10000원밖에 없기 때문에 10000원이 부족해진다.


		= 문단2 =
		돈이 부족하지 않을 경우에는 떡볶이는 얼마였고, 현재 얼마가 남았다는 문장과 함께
		바로 우동이나 과자로 넘어가면 되지만,
		만약 위처럼 돈이 부족한 경우에는 현재 얼마가 부족한지 나타내고,
		추가적으로 용돈을 입력받을 수 있게 만든다.
		추가적으로 용돈을 받은 경우에는 얼마를 입력받아서 얼마가 되었다.라는 형식으로 나타내면 되고, (if 사용)
		그곳에서 돈이 부족하지 않은 경우에는 떡볶이는 얼마였고, 현재 얼마가 남았다는 문장과 함께
		다음 우동 혹은 과자로 넘어가게 된다.



		위 문단2에서 이미 추가적으로 용돈을 받았기 때문에 더는 용돈을 추가적으로 받을 수 없다.
		이후 우동이나 과자에서 돈이 부족한 경우 주인장에게 쫓겨나게 만드시오.
		단, 이 문제의 경우에는 떡볶이에서 돈이 부족하지 않은 경우의 수도 존재한다.
		만약 떡볶이에서 돈이 부족하지 않았다면, 우동에서 부족했을 경우, 그리고 과자에서도 부족하다면 과자에서 쫓겨났을 것이고,
		만약 돈이 아예 부족하지 않을 만큼 많이 받은 경우에는 셋 다 사먹어도 무난하게 마지막 금액이 나타났을 수 있다.
		즉, 상황에 따라 변화하는 알고리즘을 작성하시오.*/

	int money = 10000;

	int addmoney, nowmoney, nowmoney1, nowmoney2, addmoney1, addmoney2;
	int tteok, udong, snack;
	int tteokprice, udongprice, snackprice;
	int tteokcount, udongcount, snackcount;
	int totalprice;

	printf("철수와 영희가 있다 , 둘이 가진 금액은 애초에 %d원으로 용돈을 추가로 입력 받아야한다\n", money);
	printf("추가로 받을 용돈을 입력하세요 : \n");
	scanf("%d", &addmoney);

	nowmoney = money + addmoney;

	printf("떡볶이 금액 입력 : \n");
	scanf("%d", &tteok);
	printf("우동 금액 입력 : \n");
	scanf("%d", &udong);
	printf("과자 금액 입력 : \n");
	scanf("%d", &snack);

	printf("떡볶이 몇개를 주문 하시겠습니까? \n");
	scanf("%d", &tteokcount);

	printf("떡볶이 %d개를 주문 했습니다 \n", tteokcount);

	tteokprice = tteok * tteokcount;

	nowmoney2 = tteokprice - nowmoney;

	if (nowmoney < tteokprice)
	{
		printf("떡볶이를 구매할 돈이 부족합니다\n");
		printf("추가로 받을 용돈을 입력하세요 \n");
		scanf("%d", &addmoney1);

		printf("%d원을 추가로 받았습니다\n", addmoney1);

		nowmoney1 = nowmoney + addmoney1;

		printf("떡볶이 몇개를 구매하시겠습니까? \n");
		scanf("%d", &tteokcount);

		tteokprice = tteok * tteokcount;
		nowmoney1 = tteokprice - nowmoney1;

		printf("떡볶이의 가격은 %d원 이었고 현재 %d원이 남았습니다\n", tteokprice, nowmoney1);
	}

	printf("떡볶이의 가격은 %d원 이었고 현재 %d원이 남았습니다\n", tteokprice, nowmoney2);



	
	
}


	
	









