#include <stdio.h>
#include <string.h>

int main()//실행 함수.
{
  //mytest1();
  //mytest2();
  //mytest3();
  //mytest4();
  //myif();
  //myif_test();
  //mywhile();
  //mywhile_D2();
  //mywhile_D3();
  mywhile_D4();
}



/*
본인이 생각하는 숫자 ?가지를 더하는 프로그램을 개발해보자.

	몇 가지 수를 입력받을 지 알아보자.
	아래 예시의 경우에는, 4개를 입력받은 경우의 수이다.

	처음에 입력받을 숫자 : 1
	두 번째 숫자 : 2
		1[본인이 생각한 숫자] + 2[본인이 생각한 숫자] = 3
		두 번째 숫자 : 5
		3[결과값] + 5[본인이 생각한 숫자] = 8[결과값]
		두 번째 숫자 : 6
		8[결과값] + 6[본인이 생각한 숫자] = 14[결과값]

  int a, b, b1, b2 = 0, b3, b4, b5, b6, b7, b8;

  printf("몇 가지 수를 입력 받으시겠습니까\n");
  scanf("%d", &a);

  printf("숫자 입력 : \n");
  scanf("%d", &b); //저장된 값을 빼서 활용

  while (1)
  {
	printf("두번째 숫자 : \n");
	scanf("%d", &b1);
	b2 = b + b1;
	printf("%d + %d = %d\n", b, b1, b2);
	b = b2;
  }






























	정수 n의 약수는 n을 나누었을 때 나누어 떨어지는 수입니다. 만약 정수 i가 정수 n의 약수라면, n을 i로 나누었을 때 나머지가 0이 나와야 하는 거죠.
	정수 120의 약수를 모두 출력하고, 총 몇개의 약수가 있는지 출력하는 프로그램을 써 보세요. 아래처럼 콘솔에 출력되어야 합니다.

	1
	2
	3
	4
	5
	6
	8
	10
	12
	15
	20
	24
	30
	40
	60
	120
	120의 약수는 총 16개입니다.


  int i = 1, n;

  printf("정수 입력 : \n");
  scanf("%d", &n);

  while (1)
  {
	if (n % i == 0)
	{
	  printf("%d\n",i);
	}
	i++;
  }
  printf("%d의 약수는 총 %d개입니다", n);














	중요문제
	기본적으로 0의 숫자를 가지고 있는 f가 있다.
	f는 10씩 증가하며, 총 1000까지만 늘어난다
	그 다음, f가 500까지 다시 10씩 떨어지는 상황을
	출력하시오.
	단, 풀 수 있는 방식이 두 가지이니 첫 번쨰 방법으로 풀 경우,
	강사가 피드백을 드릴 겁니다.




	  int f = 0, i = 10;

  while (f < 1000)
  {
	f = f + i;
	printf("%d\n", f);
	printf("\n");


	while (f > 500)
	{
	  f = f - i;
	  printf("%d\n", f);
	  //if 문때 했던 기회 (chance += 1 ) 이런거 이용해서 하기
	}
  }
























	

[문제 출제 - 당신은 프로그래머입니다. 지금부터 손님이 원하는 코딩을 설정해주세요. if, else, else if, scanf 필수로 사용]
[문제출제1: 구구단 2단 이상 나오는 것은 모두 변환문자로 표기하시오.]
[문제출제2: 볶음밥, 자장면, 탕수육에 각각 가격을 제시하고 끝까지 금액이 +되는 상황을 재현하시오.]
[문제출제3: 단, 4번에는 종료버튼을 넣어, 4번을 누를 시 코딩이 종료되며 합산된 금액이 산출되도록 하시오.]
[문제출제4: 모든 선택형에는 없는 번호를 누를 시 다시 되돌아가는 코딩을 설정하시오.]
[문제출제5: 음식점에서 탕수육 소,중,대를 각기 다른 금액으로 표현하시오.]
[문제출제6: 이 역시 위와같이 잘못 누를 시 다시 되돌아가 금액이 초기화되지 않은 상태로 지속적으로 번호를 선택할 수 있도록 하시오.]






[1.구구단 2.음식점 3.계산기 4.종료]
1. 2단만 나오는 구구단을 설정해주세요.
1-1 : 2단이 지속적으로 출력된다. 2x1 ~ 2x9
1-2 : 구구단 2단이 끝나면 다시 처음 메뉴[1.구구단 2.음식점 3.계산기 4.종료]로 다시 빠져나간다.
1-3 : 거기서 다시 1번을 누르면 또다시 구구단 2단이 나타난다.





2. 음식점을 차릴 건데, 포스기에서 사용하는 코딩을 설정해주세요. [1.볶음밥 2.자장면 3.탕수육[소`중`대 따로] 4.종료] 금액 본인이 설정.
2-1 : 2번을 누르면 볶음밥, 자장면, 탕수육을 선택할 수 있게 만든다.
2-2 : 그곳에서 탕수육을 누를 시.1.대[?원] 2.중[?원] 3.소[?원] 4.이전 메뉴로가 출력된다. 그리고 그곳에서 4번 이전메뉴를 선택할 시 다시 볶음밥 등을 선택할 수 있는 메뉴판이 나타난다.
2-3 : 마찬가지로 종료버튼을 누르면 이전 메뉴로 빠져나가서 1.구구단 2.중국집 3.계산기 4.종료버튼이 뜨게 한다.
2-4 : 단, 메인메뉴로 빠져나가고, 다시 중국집으로 들어가게 됐을 때 이전에 중국집에서 산 금액이 +되어서 합산되게 하시오.
2-5 : 각 금액은 알아서 추가하시고, 각 메뉴마다 금액을 나타내시오.
[2번 예시 : 볶음밥이 1천원짜리가 있다면 1천원이 추가되어, 종료버튼을 누르면 알아서 추가된 금액이 나오도록.]
1.볶음밥.
볶음밥 5000원이 추가되어 현재 12000[누적금액]원입니다.





3. 계산기가 필요해요. 더하기와 빼기만 있으면 되는데 가능할까요?
3-1 : 1.더하기 2. 빼기를 만든다. 빼기의 경우.
1. 더하기 2.빼기
선택 : 1
첫 번째 숫자 : 10scanf
두 번째 숫자 : 10scanf
10+10=20



선택 : 2
첫 번째 숫자 : 30scanf
두 번째 숫자 : 100scanf
이런 경우
"두 번재 숫자가 더 클 수 없습니다!!"
두 번째 숫자만 다시 입력받는다. 첫 번째 숫자보다 클 때까지.







만약 이미 계산을 한 상태일 경우,
그 전에 계산된 금액이 나타나면서 더하거나 뺄 숫자를 입력할 수 있게 하시오.
예시 =
입력 : 3
계산기입니다.
1번 더하기 2번 빼기
선택 : 1
첫 번째 : 10
두 번째 : 20
10 + 20 = 30
[1.구구단 2.음식점 3.계산기 4.종료]
선택 : 3
1번 더하기, 2번 빼기
선택 : 1
두 번째 숫자 입력 : 50
30 + 50 = 80


4. 종료
4-1:종료버튼울 누를 시, 여태까지 합산된 금액이 얼마인지 알 수 있도록 나타내시오.





*/
mywhile_D4()
{
  /*[1.구구단 2.음식점 3.계산기 4.종료]
  1. 2단만 나오는 구구단을 설정해주세요.
	1 - 1 : 2단이 지속적으로 출력된다. 2x1 ~2x9
	1 - 2 : 구구단 2단이 끝나면 다시 처음 메뉴[1.구구단 2.음식점 3.계산기 4.종료]로 다시 빠져나간다.
	1 - 3 : 거기서 다시 1번을 누르면 또다시 구구단 2단이 나타난다.*/

  /*2. 음식점을 차릴 건데, 포스기에서 사용하는 코딩을 설정해주세요.[1.볶음밥 2.자장면 3.탕수육[소`중`대 따로] 4.종료] 금액 본인이 설정.
	2 - 1 : 2번을 누르면 볶음밥, 자장면, 탕수육을 선택할 수 있게 만든다.
	2 - 2 : 그곳에서 탕수육을 누를 시.1.대[? 원] 2.중[? 원] 3.소[? 원] 4.이전 메뉴로가 출력된다.그리고 그곳에서 4번 이전메뉴를 선택할 시 다시 볶음밥 등을 선택할 수 있는 메뉴판이 나타난다.
	2 - 3 : 마찬가지로 종료버튼을 누르면 이전 메뉴로 빠져나가서 1.구구단 2.중국집 3.계산기 4.종료버튼이 뜨게 한다.
	2 - 4 : 단, 메인메뉴로 빠져나가고, 다시 중국집으로 들어가게 됐을 때 이전에 중국집에서 산 금액이 + 되어서 합산되게 하시오.
	2 - 5 : 각 금액은 알아서 추가하시고, 각 메뉴마다 금액을 나타내시오.
	[2번 예시 : 볶음밥이 1천원짜리가 있다면 1천원이 추가되어, 종료버튼을 누르면 알아서 추가된 금액이 나오도록.]
  1.볶음밥.
	볶음밥 5000원이 추가되어 현재 12000[누적금액]원입니다.*/

  int menu1, menu2, menu3, menu4;
  int menu5, menu6, memu7;
  int a = 2, b = 1;

  while (1)
  {

	printf("메뉴를 선택하세요\n");
	printf("1. 구구단 , 2. 음식점, 3. 계산기, 4. 종료\n");
	scanf("%d", &menu1);
	printf("구구단 선택\n");
	while (b < 10)
	{
	  printf("2 x %d = %d\n", b, 2 * b);
	  b++;
	}
	b = 1;
	printf("\n");

	printf("1. 볶음밥, 2. 자장면, 3.탕수육[소'중'대 따로], 4. 종료\n");
	scanf("%d", &menu5);

	printf("1. 대[12000원], 2. 중[9000원], 3. 소[7000원], 4. 이전 메뉴로 돌아가기\n");
	scanf("%d", &menu6);

	if ()

	
	
  }
}









































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

	/*다시 숙제로 해와야 하는 것.
		2 - 1 - 이전 if문 문제에서 test로 해보았던 문제를
		추가 용돈을 덜 입력받은 경우의 수를 새로 만들게 해보기.
		만약 용돈을 추가받았는데도 돈이 부족한 상황인 경우,
		부족하지 않을 때까지 용돈을 받게 만들어보자.


int firstmoney = 10000, tteok, udong, snack, tteokprice, udongprice, snackprice, tteokcount, udongcount, snackcount;
int add, add1, add2, add3, add4, add5, add6, add7, add8;
int chance = 0;
int pocketmoney, nowmoney, nowmoney1, nowmoney2, emptymoney;
int newadd, newadd1, newadd2, newadd3, newadd4, newadd5;

printf("추가용돈 입력 : \n");
scanf("%d", &add);

printf("%d원을 추가 받았습니다\n", add);

add1 = firstmoney + add;

printf("현재 용돈은 %d원 입니다\n", add1);

printf("떡볶이 가격 입력 : \n");
scanf("%d", &tteok);

printf("우동 가격 입력 :\n");
scanf("%d", &udong);

printf("과자 가격 입력 : \n");
scanf("%d", &snack);



printf("떡볶이 몇개를 주문 하겠습니까 ? \n");
scanf("%d", &tteokcount);

printf("떡볶이 %d 개를 주문 했습니다 \n", tteokcount);

tteokprice = tteok * tteokcount;

pocketmoney = add1 - tteokprice;



if (pocketmoney < tteokprice)
{
  if (chance == 0)
  {

	pocketmoney = tteokprice - add1;
	printf("%d원이 부족합니다\n", pocketmoney);

	printf("추가 용돈 입력 : \n");
	scanf("%d", &add1);
	pocketmoney = pocketmoney + add1;

	while (pocketmoney < tteokprice) {
	  printf("추가 용돈을 입력 받았으나 부족합니다 용돈을 더 받으세요\n");
	  printf("용돈 입력 : \n");
	  scanf("%d", &add1);
	  pocketmoney = pocketmoney + add1;
	}

	printf("%d원을 추가 받았고 현재 금액은 %d 입니다\n", add1, pocketmoney);

	//pocketmoney = pocketmoney - tteokprice;

	chance = chance + 1;

   // while (1)
   // {

	  //if (pocketmoney < tteokprice)
	  //{
	  //  if (pocketmoney == 0)
	  //  {
	  //	break;
	  //  }
	  //  else
	  //  {
	  //	printf("추가 용돈을 입력 받았으나 부족합니다 용돈을 더 받으세요\n");


	  //	//pocketmoney = tteokprice - add2;


	  //	printf("용돈 입력 : \n");
	  //	scanf("%d", &newadd);
	  //	pocketmoney = pocketmoney + newadd;

	  //	printf("%d원을 추가 받았고 부족한 금액은 %d 입니다\n", newadd, pocketmoney);

	  //	//pocketmoney = pocketmoney - tteokprice;

	  //	chance = chance + 1;
	  //  }

	  //}
	  //else if (pocketmoney > tteokprice)
	  //{
	  //  break;
	  //}

   // }



  }
}

printf("떡볶이의 가격은 %d원 이었고 현재 남은 금액은 %d 원 입니다 \n", tteokprice, pocketmoney);




printf("우동 몇개를 주문 하시겠습니까? \n");
scanf("%d", &udongcount);

printf("우동 %d개를 주문 했습니다 \n", udongcount);

udongprice = udong * udongcount;

nowmoney2 = pocketmoney - udongprice;



if (pocketmoney < udongprice)
{
  if (chance != 0)
  {
	printf("이미 용돈을 받아서 주인장에게 쫓겨났습니다\n");
  }

  if (chance == 0)
  {
	pocketmoney = tteokprice - add2;
	printf("%d원이 부족합니다\n", pocketmoney);

	printf("추가 용돈 입력 : \n");
	scanf("%d", &add3);
	pocketmoney = pocketmoney + add3;

	printf("%d원을 추가 받았고 현재 금액은 %d 입니다\n", add3, pocketmoney);

	pocketmoney = pocketmoney - udongprice;

	chance = chance + 1;
  }
}

printf("우동의 가격은 %d 원 이었고 현재 남은 금액은 %d 원 입니다 \n", udongprice, nowmoney2);



printf("과자 몇개를 주문 하시겠습니까 ? \n");
scanf("%d", &snackcount);

printf("과자 %d개를 주문 했습니다 \n", snackcount);

snackprice = snack * snackcount;

pocketmoney = nowmoney2 - snackprice;




if (pocketmoney < snackprice)
{
  if (chance != 0)
  {
	printf("이미 용돈을 받아서 주인장에게 쫓겨났습니다\n");
  }

  if (chance == 0)
  {
	pocketmoney = tteokprice - nowmoney2;
	printf("%d원이 부족합니다\n", pocketmoney);

	printf("추가 용돈 입력 : \n");
	scanf("%d", &add5);
	pocketmoney = pocketmoney + add5;

	printf("%d원을 추가 받았고 현재 금액은 %d 입니다\n", add5, pocketmoney);

	pocketmoney = pocketmoney - snackprice;

	chance = chance + 1;
  }
}

printf("과자의 가격은 %d원 이었고 %d원이 남았습니다\n", snackprice, pocketmoney);



		*/

/*
======================================================================================================
*다시 숙제로 해와야 하는 것.
	2 - 1 - 이전 if문 문제에서 test로 해보았던 문제를
	추가 용돈을 덜 입력받은 경우의 수를 새로 만들게 해보기.
	만약 용돈을 추가받았는데도 돈이 부족한 상황인 경우,
	부족하지 않을 때까지 용돈을 받게 만들어보자.







	몇 가지 수를 입력받을 지 알아보자.
	아래 예시의 경우에는, 4개를 입력받은 경우의 수이다.

	몇 개의 수를 입력할까 : 4

	처음에 입력받을 숫자 : 1
	두 번째 숫자 : 2
		1[본인이 생각한 숫자] + 2[본인이 생각한 숫자] = 3
		while
		두 번째 숫자 : 5
		3[결과값] + 5[본인이 생각한 숫자] = 8[결과값]
		두 번째 숫자 : 6
		8[결과값] + 6[본인이 생각한 숫자] = 14[결과값]




======================================================================================================

*/

mywhile_D2()
{
  /*int a, b, c, d, e, f, g, h, i;

  printf("몇개의 수를 입력할까\n");
  scanf("%d", &a);

  printf("처음 입력 받은 숫자 : %d\n", a);
  printf("두번째 입력 받을 숫자 : \n");
  scanf("%d", &b);

  c = a + b;

  printf("%d + %d = %d", a, b, c);

  while (a <= c)
  {
	  printf("두 번째 숫자 입력 : \n");
	  scanf("%d", &e);

	  f = c + e;
	  printf("%d + %d = %d", c, e, f);

	  printf("두 번째 숫자 입력 : \n");
	  scanf("%d", &g);

	  h = f + g;
	  printf("%d + %d = %d", f, g, h);
	  break;

  }*/
















}

mywhile_D3()
{






}





























/*

	int a = 1;
	while (165) { //wihle문은 조건이 참인 경우에만 실행을 하는데, 지금처럼 조건을 1로 주게 되면, 늘 참으로 인식을하고 계속해서 반복하는 것이다.
		printf("%d\n", a);
		a++;
	}















	int number1 = 112, number2 = 111;

	if (number1 == 1) {
		printf("number1에 1이 들어있습니다.");
	}
	else if (number2 == 1) {
		printf("number2에 1이 들어있습니다.");
	}
	else if (number1 == 1) {
		printf("number1에 1이 들어있습니다.");
	}
	else if (number2 == 1) {
		printf("number2에 1이 들어있습니다.");
	}
	else {
		printf("위 조건에 충족하는 것이 없습니다.");
	}




	int a = 1, b = 1, c, d;
	while (1) {
		while (1)
		{
			printf("\n\n 다음 중 고르시오 1. 1을 더한다. 2. 종료");
			printf("\n\n선택 : ");

			scanf("%d", &a);

			if (a == 1)
			{
				b++;

				printf("b의 현재 숫자 : %d\n", b);

			}
			if (a == 2)
			{
				printf("종료합니다");
				break;
			}

		}
		printf("\n\n\n b는 총 %d라는 숫자가 나왔습니다 \n\n\n", b);
		break;
	}
































		 1.타코야키 : 2000원
	 2.해물찜   : 7000원
	 3.튀김요리 : 5000원
	 4.자동차기름:12000원
	 5. 종료.

	1번째 손님 선택 : 1
	1번째 손님이 타코야키르 주문하셔서 현재 누적금액 2000원입니다.

	2번째 손님 선택 : 1
	2번째 손님이 타코야키르 주문하셔서 현재 누적금액 4000원입니다.

	3번째 손님 선택 : 5
	3번째 손님이 종료를 누르셔서 프로그램을 종료합니다.
	오늘의 매출은 4000원입니다.





	int taco = 0, haemul = 0, xnlrla = 0, caroil = 0, a, b;

	int sum = 0;

	int wnans;

	while (1)
	{
		printf("주문할 요리를 선택하세요 \n");
		printf("1.타코야키\n");
		printf("2.해물찜\n");
		printf("3.튀김요리\n");
		printf("4.자동차기름\n");
		printf("5.종료\n\n");
		printf("선택 : ");
		scanf("%d", &wnans);

		if (wnans == 1)
		{
			taco = taco + 2000;
			printf("1번째 손님이 타코야키를 주문하셔서 현재 누적금액 %d원 입니다\n", taco);

		}

		if (wnans == 2)
		{
			taco = taco + 7000;
			printf("2번째 손님이 해물찜을 주문하셔서 현재 누적금액 %d 입니다\n", taco);
		}
		if (wnans == 3)
		{
			taco = taco + 5000;
			printf("3번째 손님이 튀김요리를 주문하셔서 현재 누적금액 %d 입니다\n", taco);
		}

		if (wnans == 4)
		{
			taco = taco + 12000;
			printf("4번째 손님이 자동차기름을 주문하셔서 현재 누적금액 %d 입니다\n", taco);
		}
		if (wnans == 5)
		{
			printf("3번째 손님이 종료를 누르셔서 프로그램을 종료합니다\n");
			printf("오늘 매출은 %d원 입니다", taco);
			break;
		}






























	}

































	2 - 1 - 이전 if문 문제에서 test로 해보았던 문제를
	추가 용돈을 덜 입력받은 경우의 수를 새로 만들게 해보기.
	만약 용돈을 추가받았는데도 돈이 부족한 상황인 경우,
	부족하지 않을 때까지 용돈을 받게 만들어보자.

	int totaldydehs = 10000, tteok, udong, snack, dydehs, add, add1, add2, add3;
	int tteokcount, udongcount, snackcount;
	int tteokprice, udongprice, snackprice;

	int chance = 0;

	printf("추가 용돈 입력 : \n");
	scanf("%d", &add);

	dydehs = totaldydehs + add;

	printf("현재 용돈은 %d 입니다 \n", dydehs);

	printf("떡볶이 금액 입력 : \n");
	scanf("%d", &tteok);

	printf("우동 금액 입력 : \n");
	scanf("%d", &udong);

	printf("과자 금액 입력 : \n");
	scanf("%d", &snack);

	printf("떡볶이 주문 개수 입력 : \n");
	scanf("%d", &tteokcount);

	tteokprice = tteok * tteokcount;

	totaldydehs = dydehs - tteokprice;

	if (totaldydehs < 0)
	{
		if (chance == 0)
		{
			totaldydehs = tteokprice - dydehs;
			printf("%d원이 부족합니다\n", totaldydehs);

			printf("추가 용돈 입력 : \n");
			scanf("%d", &add1);
			totaldydehs = totaldydehs + add1;
			totaldydehs = totaldydehs + tteok;
			printf("%d원을 추가 받았고 현재 금액은 %d 입니다\n", add1, totaldydehs);

			totaldydehs = totaldydehs - tteok;

			chance = chance + 1;
		}
	}

	2 - 1 - 이전 if문 문제에서 test로 해보았던 문제를
	추가 용돈을 덜 입력받은 경우의 수를 새로 만들게 해보기.
	만약 용돈을 추가받았는데도 돈이 부족한 상황인 경우,
	부족하지 않을 때까지 용돈을 받게 만들어보자.



*/
mywhile()
{
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
	  /*2 - 1 - 이전 if문 문제에서 test로 해보았던 문제를
		  추가 용돈을 덜 입력받은 경우의 수를 새로 만들게 해보기.
		  만약 용돈을 추가받았는데도 돈이 부족한 상황인 경우,
		  부족하지 않을 때까지 용돈을 받게 만들어보자.


	  int firstmoney = 10000, secondmoney, tteok, udong, snack;
	  int tteokprice, udongprice, snackprice, tteokcount, udongcount, snackcount;
	  int add, add1, add2, add3;
	  int chance = 0;

	  printf("추가 용돈 입력 : \n");
	  scanf("%d", &add);

	  secondmoney = add + firstmoney;

	  printf("%d원을 추가로 받았고 현재 용돈은 %d원 입니다\n", add, secondmoney);

	  printf("떡볶이 가격 입력 : \n");
	  scanf("%d", &tteok);

	  printf("우동 가격 입력 : \n");
	  scanf("%d", &udong);

	  printf("과자 가격 입력 : \n");
	  scanf("%d", &snack);

	  printf("떡볶이 주문 개수 입력 : \n");
	  scanf("%d", &tteokcount);



	  tteokprice = tteok * tteokcount;

	  secondmoney = secondmoney - tteokprice;

	  if (secondmoney < 0)
	  {



		  while (add < tteokprice)
		  {
			  if (chance == 0)
			  {
				  printf("용돈이 부족합니다 추가로 받을 용돈을 입력하세요 : \n");
				  scanf("%d", &add1);

				  secondmoney = secondmoney + add1;
				  secondmoney = secondmoney + tteokprice;

				  printf("%d원을 추가받았고 현재 용돈은 %d원입니다 \n", add1, secondmoney);

				  secondmoney = secondmoney - tteokprice;
				  chance += 1;

			  }
			  break;
		  }

	  }

	  printf("떡볶이의 가격은 %d원 이었고 현재 용돈은 %d원 입니다 \n\n", tteokprice, secondmoney);



		  */

}


































/*


	다음 세 가지 중 고르시오.
	1. 감자. 2.옥수수 3. 수박
	1번을 누를 시
	1번 감자를 선택하셨습니다. 라는 문구가 나오도록.
	2번을 누를 시
	2번 옥수수를 선택하셨습니다.
	3번을 누를 시,
	3번 수박을 선택하셨습니다.
	>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	그 뒤 1번 감자에서 1천원어치, 2천원어치 3천원어치.
	2번을 누를 시 옥수수에서 4천원어치, 5천원어치 6천원어치,
	3번을 누를 시 수박에서 10000천원어치, 20000천원어치, 30000천원어치.
	라는 문구가 각각 나오도록 설정하고,
	그 안에서 또 1번을 누를 시
	“감자 1천원어치를 선택하셨습니다.” 라는 문구가 나오도록 하고,
	몇 개를 주문하겠냐고 질문한 뒤 그 개수에 따라 금액이 변동하도록 하시오.





	.





















	*****************새로운 문제.***********************
	학점과 점수를 입력받고, 해당 학점과 점수가 정상적인지 알아내는 프로그램을 만들어보시오.


	점수 : 100
	학점 : A
	올바른 학점입니다. or 올바르지 않은 학점입니다.

	같이 나타나게 한다. 무조건 점수를 먼저 입력받는다.

	A >> 점 100이상
	B >> 점 90이상
	C >> 점 80이상
	D >> 점 70이상
	E >> 점 60이상
	F >> 점 50이상



*/


/*if (a < 100 && a >= 90)
{
	printf("B학점");
}
if (a < 90 && a >= 80)
{
	printf("C학점");
}
if (a < 80 && a >= 70)
{
	printf("D학점");
}
if (a < 70 && a >= 60)
{
	printf("E학점");
}
if (a < 60 && a >= 50)
{
	printf("F학점");

}


















int a;
	char b;

	printf("점수를 입력하세요 : \n");
	scanf("%d", &a);

	printf("학점을 입력하세요 : \n");
	getchar();
	scanf("%c", &b);

	if (a >= 100)
	{
		printf("점수 : %d\n", a);
		printf("학점 : %c\n", b);
		if (b == 'A')
		{
			printf("올바른 학점 입니다\n");
		}
		if (b != 'A')
		{
			printf("올바르지 않은 학점입니다\n");
		}


	}
	if (a < 100 && a >= 90)
	{
		printf("점수 : %d\n", a);
		printf("학점 : %c\n", b);
		if (b == 'B')
		{
			printf("올바른 학점 입니다\n");
		}
		if (b != 'B')
		{
			printf("올바르지 않은 학점입니다\n");
		}
	}
	if (a < 90 && a >= 80)
	{
		printf("점수 : %d\n", a);
		printf("학점 : %c\n", b);
		if (b == 'C')
		{
			printf("올바른 학점 입니다\n");
		}
		if (b != 'C')
		{
			printf("올바르지 않은 학점입니다\n");
		}
	}
	if (a < 80 && a >= 70)
	{
		printf("점수 : %d\n", a);
		printf("학점 : %c\n", b);
		if (b == 'D')
		{
			printf("올바른 학점 입니다\n");
		}
		if (b != 'D')
		{
			printf("올바르지 않은 학점입니다\n");
		}
	}
	if (a < 70 && a >= 60)
	{
		printf("점수 : %d\n", a);
		printf("학점 : %c\n", b);
		if (b == 'E')
		{
			printf("올바른 학점 입니다\n");
		}
		if (b != 'E')
		{
			printf("올바르지 않은 학점 입니다\n");
		}
	}
	if (a < 60 && a >= 50)
	{
		printf("점수 : %d\n", a);
		printf("학점 : %c\n", b);
		if (b == 'F')
		{
			printf("올바른 학점 입니다\n");
		}
		if (b != 'F')
		{
			printf("올바르지 않은 학점 입니다\n");
		}
	}
















	int firstmoney = 10000;
	//int a, b, c, d, e, f, g;
	int addmoney;
	int secondmoney;
	int tteok;
	int udong;
	int snack;
	int tteokcount;

	int tteokbokkiprice;


	int emptymoney;

	int secondmoney1;

	int addmoney1;

	int forthmoney;

	int udongcount;


	int udongprice;

	int thirdmoney;

	int emptymoney1;


	int addmoney2;

	int fivemoney;

	int snackcount;

	int snackprice;

	int sixmoney;

	int emptymoney2;

	int addmoney3;

	int sevenmoney;



	int addmoney4;

	int eightmoney;


	int udong2;

	int udongprice1;

	int snack2;

	int snackprice2;



	printf("철수와 영희가 있습니다\n");

	printf("철수와 영희는 %d원의 용돈을 받았습니다\n\n", firstmoney);

	printf("추가로 받을 용돈을 입력하세요 : \n");

	scanf("%d", &addmoney);

	secondmoney = firstmoney + addmoney;

	printf("현재 철수와 영희가 가진 금액은 %d 입니다 \n\n", secondmoney);

	printf("떡볶이 금액 입력 : \n");



	scanf("%d", &tteok);



	printf("떡볶이의 가격은 %d 입니다\n\n", tteok);
	printf("우동 금액 입력 : \n");
	scanf("%d", &udong);
	printf("우동의 가격은 %d 입니다\n\n", udong);
	printf("과자 금액 입력 : \n");
	scanf("%d", &snack);
	printf("과자의 금액은 %d 입니다\n\n", snack);






	printf("떡볶이를 몇 개 주문 하시겠습니까 ? \n");
	scanf("%d", &tteokcount);

	printf("%d개를 주문 했습니다\n\n", tteokcount);

	tteokbokkiprice = tteok * tteokcount;

	printf("떡볶이의 총 가격은 %d원 입니다\n\n", tteokbokkiprice);

	secondmoney1 = secondmoney - tteokbokkiprice;

	if (secondmoney > tteokbokkiprice)
	{
		printf("떡볶이는 %d원 이었고, 현재 %d원이 남았습니다 \n\n", tteokbokkiprice, secondmoney1);
	}

	emptymoney = tteokbokkiprice - secondmoney;


	if (tteokbokkiprice > secondmoney)
	{
		printf("현재 %d원이 부족합니다\n\n", emptymoney);
		printf("추가로 받을 용돈 금액을 입력하세요 \n");
		scanf("%d", &addmoney1);
		forthmoney = emptymoney + addmoney1;
		printf("%d원을 추가로 받았고, 현재 용돈은 %d원 입니다\n", addmoney1, forthmoney);
	}










	printf("우동 몇 개를 주문 하시겠습니까?\n");
	scanf("%d", &udongcount);
	printf("우동 %d 개를 주문 했습니다\n\n", udongcount);

	udongprice = udong * udongcount;
	printf("우동의 총 가격은 %d원 입니다\n\n", udongprice);

	thirdmoney = secondmoney1 - udongprice;


	if (secondmoney1 > udongprice)
	{
		printf("우동의 가격은 %d원 이었고, 현재 %d원이 남았습니다\n\n", udongprice, thirdmoney);
	}

	emptymoney1 = udongprice - secondmoney1;



	if (secondmoney1 < udongprice)
	{
		printf("현재 %d원이 부족합니다\n", emptymoney1);
		printf("추가로 받을 용돈을 입력하세요 \n");
		scanf("%d", &addmoney2);
		fivemoney = emptymoney1 + addmoney2;
		printf("%d원을 추가로 받았고, 현재 용돈은 %d원 입니다\n", addmoney2, fivemoney);
	}




	printf("과자 몇 개를 주문 하시겠습니까?\n");
	scanf("%d", &snackcount);

	printf("과자 %d 개를 주문 했습니다\n\n", snackcount);

	snackprice = snack * snackcount;

	printf("과자의 총 가격은 %d원 입니다\n\n", snackprice);

	sixmoney = thirdmoney - snackprice;

	if (thirdmoney > snackprice)
	{
		printf("과자의 가격은 %d원 이었고, 현재 %d원이 남았습니다\n\n", snackprice, sixmoney);
	}

	emptymoney2 = thirdmoney % snackprice;



	if (thirdmoney < snackprice)
	{


		printf("현재 %d원이 부족합니다\n\n", emptymoney2);
		printf("추가로 받을 용돈을 입력하세요 \n");
		scanf("%d", &addmoney3);
		sevenmoney = emptymoney2 + addmoney3;
		printf("%d원을 추가로 받았고, 현재 용돈은 %d원 입니다\n\n", addmoney3, sevenmoney);

	}




	printf("추가로 받을 용돈을 입력하세요 \n");
	scanf("%d", &addmoney4);

	eightmoney = sixmoney + addmoney4;
	printf("%d원을 추가로 받았고, 현재 용돈은 %d원 입니다\n\n", addmoney4, eightmoney);
	printf("우동을 재 구매 합니다\n\n");
	printf("우동 몇개를 주문 하시겠습니까? \n\n");
	scanf("%d", &udong2);
	printf("우동 %d 개를 주문 했습니다 \n\n", udong2);

	udongprice1 = udong * udong2;


	if (eightmoney > udongprice1)
	{
		printf("우동의 가격은 %d원 이었고 , 무사히 구매했습니다\n\n", udongprice1);
	}
	if (eightmoney < udongprice1)
	{
		printf("돈이 부족합니다 주인장에게 쫓겨나니 도망가세요 !\n\n");
	}

	printf("과자를 재 구매 합니다 \n\n");
	printf("과자 몇 개를 주문 하시겠습니까?\n\n");
	scanf("%d", &snack2);
	printf("과자 %d개를 주문 했습니다\n\n", snack2);

	snackprice2 = snack * snack2;


	if (eightmoney > snackprice2)
	{
		printf("과자의 가격은 %d원 이었고, 무사히 구매했습니다\n\n", snackprice2);
	}

	if (eightmoney < snackprice2)
	{
		printf("돈이 부족합니다 주인장에게 쫓겨나니 도망가세요 ! \n\n");
	}




























	[1.기본 문제출제 : 누가 보더라도 이해하기 쉽게 코드를 작성하시오.]
	[2.기본 문제출제 : 누가 보더라도 프로그램을 사용할 수 있게 제대로 정의해주시오]
	[3.기본 문제출제 : 아래 문제의 경우 음식이 세 가지로 분류되어 있는데, 본인이 두 가지를 더 추가해서 만든다.]
	[4.기본 문제출제 : 참고로 이 문제는 풀 수 있는 방식이 워낙 많고, 도움이 될 수 있는 문제기 때문에, 본인이 풀었을 경우, 다른 방식으로 또 풀어보겠다. 이후 피드백을 드림.]
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


	=문단2=
	돈이 부족하지 않을 경우에는 떡볶이는 얼마였고, 현재 얼마가 남았다는 문장과 함께
	바로 우동이나 과자로 넘어가면 되지만,
	만약 위처럼 돈이 부족한 경우에는 현재 얼마가 부족한지 나타내고,
	추가적으로 용돈을 입력받을 수 있게 만든다.
	추가적으로 용돈을 받은 경우에는 얼마를 입력받아서 얼마가 되었다. 라는 형식으로 나타내면 되고,    (if 사용)
	그곳에서 돈이 부족하지 않은 경우에는 떡볶이는 얼마였고, 현재 얼마가 남았다는 문장과 함께
	다음 우동 혹은 과자로 넘어가게 된다.



	위 문단2에서 이미 추가적으로 용돈을 받았기 때문에 더는 용돈을 추가적으로 받을 수 없다.
	이후 우동이나 과자에서 돈이 부족한 경우 주인장에게 쫓겨나게 만드시오.
	단, 이 문제의 경우에는 떡볶이에서 돈이 부족하지 않은 경우의 수도 존재한다.
	만약 떡볶이에서 돈이 부족하지 않았다면, 우동에서 부족했을 경우, 그리고 과자에서도 부족하다면 과자에서 쫓겨났을 것이고,
	만약 돈이 아예 부족하지 않을 만큼 많이 받은 경우에는 셋 다 사먹어도 무난하게 마지막 금액이 나타났을 수 있다.
	즉, 상황에 따라 변화하는 알고리즘을 작성하시오.


*/




myif_test()
{
  /*int totaldydehs = 10000, tteok, udong, snack, dydehs, add, add1, add2, add3;
  int tteokcount, udongcount, snackcount;
  int tteokprice, udongprice, snackprice;

  int chance = 0;

  printf("추가 용돈 입력 : \n");
  scanf("%d", &add);

  dydehs = totaldydehs + add;

  printf("현재 용돈은 %d 입니다 \n", dydehs);

  printf("떡볶이 금액 입력 : \n");
  scanf("%d", &tteok);

  printf("우동 금액 입력 : \n");
  scanf("%d", &udong);

  printf("과자 금액 입력 : \n");
  scanf("%d", &snack);

  printf("떡볶이 주문 개수 입력 : \n");
  scanf("%d", &tteokcount);

  tteokprice = tteok * tteokcount;

  totaldydehs = dydehs - tteokprice;

  if (totaldydehs < 0)
  {
	  if (chance == 0)
	  {
		  totaldydehs = tteokprice - dydehs;
		  printf("%d원이 부족합니다\n", totaldydehs);

		  printf("추가 용돈 입력 : \n");
		  scanf("%d", &add1);
		  totaldydehs = totaldydehs + add1;
		  totaldydehs = totaldydehs + tteok;
		  printf("%d원을 추가 받았고 현재 금액은 %d 입니다\n", add1, totaldydehs);

		  totaldydehs = totaldydehs - tteok;

		  chance = chance + 1;
	  }
  }

  printf("떡볶이의 가격은 %d 였고, %d원이 남았습니다\n\n", tteokprice, totaldydehs);



  printf("우동 주문 개수 입력 : \n");
  scanf("%d", &udongcount);


  udongprice = udong * udongcount;
  totaldydehs = totaldydehs - udongprice;


  if (totaldydehs < 0)
  {
	  if (chance != 0)
	  {
		  printf("이미 용돈을 받아서 쫓겨났습니다\n");
		  return 0;
	  }
	  if (chance == 0)
	  {
		  totaldydehs = udongprice - totaldydehs;
		  printf("%d원이 부족합니다\n", totaldydehs);

		  printf("추가 용돈 입력 : \n");
		  scanf("%d", &add2);
		  totaldydehs = totaldydehs + add2;
		  totaldydehs = totaldydehs + udong;
		  printf("%d원을 추가 받았고 현재 금액은 &d 입니다\n", add2, totaldydehs);

		  totaldydehs = totaldydehs - udong;
		  chance = chance + 1;
	  }
  }

  printf("우동의 가격은 %d 였고, %d원이 남았습니다\n\n", udongprice, totaldydehs);


  printf("과자 주문 개수 입력 : \n");
  scanf("%d", &snackcount);


  snackprice = snack * snackcount;

  totaldydehs = totaldydehs - snackprice;

  if (totaldydehs < 0)
  {
	  if (chance != 0)
	  {
		  printf("이미 용돈을 받아서 쫓겨났습니다\n");
		  return 0;
	  }

	  if (chance == 0)
	  {
		  totaldydehs = snackprice - totaldydehs;
		  printf("%d원이 부족합니다\n", totaldydehs);

		  printf("추가 용돈 입력 : \n");
		  scanf("%d", &add3);
		  totaldydehs = totaldydehs + add3;
		  totaldydehs = totaldydehs + snack;

		  printf("%d원을 추가 받았고 현재 금액은 &d 입니다\n", add3, totaldydehs);
		  totaldydehs = totaldydehs - snack;
		  chance = chance + 1;
	  }
  }

  printf("과자의 가격은 %d 였고, %d원이 남았습니다\n\n", snackprice, totaldydehs);*/






















































  //int 떡, 과자, 우동, 기회 = 0, 용돈_합 = 10000, 용돈, 개수;

  //printf("추가 용돈 : ");
  //scanf("%d", &용돈);
  //용돈_합 = 용돈_합 + 용돈;
  //printf("\n\n용돈을 추가받고 %d원이 되었다.\n\n", 용돈_합);

  //printf("떡볶이 가격 : ");
  //scanf("%d", &떡);
  //printf("우동 가격 : ");
  //scanf("%d", &우동);
  //printf("과자 가격 : ");
  //scanf("%d", &과자);

  //printf("\n\n떡볶이 개수 : ");
  //scanf("%d", &개수);
  //떡 = 떡 * 개수;
  //용돈_합 = 용돈_합 - 떡;

  //if (용돈_합 < 0) 
  //{ // 용돈_합 >> 0보다 작다는 의미. (-1 이하)
  //	if (기회 == 1) 
  //	{
  //		printf("\n\n이미 추가적으로 용돈을 받으셨기 떄문에 쫓겨납니다.\n");
  //		return 0;//프로그램을 종료하는 함수.
  //	}
  //	if (기회 == 0) 
  //	{
  //		printf("\n\n현재 용돈이 %d원 부족합니다.\n추가적으로 용돈을 받습니다.\n용돈 입력 : ", abs(용돈_합));
  //		scanf("%d", &용돈);
  //		용돈_합 = 용돈_합 + 용돈; 
  //		용돈_합 = 용돈_합 + 떡;
  //		printf("\n\n용돈을 추가받고 %d원이 되었다.\n", 용돈_합);
  //		용돈_합 = 용돈_합 - 떡;
  //		기회 = 기회 + 1;
  //	}
  //}
  //printf("\n\n떡볶이를 구매하고 %d원이 남았다.\n", 용돈_합);












  //printf("\n\n우동 개수 : ");
  //scanf("%d", &개수);
  //우동 = 우동 * 개수;
  //용돈_합 = 용돈_합 - 우동;

  //if (용돈_합 < 0) {
  //	if (기회 != 0) //떡볶이에서 돈이 부족할경우 추가 용돈을 받고 떡볶이를 구매했으니깐 기회가 1이 된 상태, 기회는1 이므로 0이랑 다르기때문에 더이상 구매못함 
  //	{
  //		printf("\n\n이미 추가적으로 용돈을 받으셨기 떄문에 쫓겨납니다.\n");
  //		return 0;//프로그램을 종료하는 함수.
  //	}
  //	if (기회 == 0)
  //	{
  //		printf("\n\n현재 용돈이 %d원 부족합니다.\n추가적으로 용돈을 받습니다.\n용돈 입력 : ", abs(용돈_합));
  //		scanf("%d", &용돈);
  //		용돈_합 = 용돈_합 + 용돈;
  //		용돈_합 = 용돈_합 + 우동;
  //		printf("\n\n용돈을 추가받고 %d원이 되었다.\n", 용돈_합);
  //		용돈_합 = 용돈_합 - 우동;
  //		기회 = 기회 + 1;
  //	}
  //}
  //printf("\n\n우동을 구매하고 %d원이 남았다.\n", 용돈_합);












  //printf("\n\n과자 개수 : ");
  //scanf("%d", &개수);
  //과자 = 과자 * 개수;
  //용돈_합 = 용돈_합 - 과자;

  //if (용돈_합 < 0) {
  //	if (기회 != 0) {
  //		printf("\n\n이미 추가적으로 용돈을 받으셨기 떄문에 쫓겨납니다.\n");
  //		return 0;//프로그램을 종료하는 함수.
  //	}
  //	if (기회 == 0) {
  //		printf("\n\n현재 용돈이 %d원 부족합니다.\n추가적으로 용돈을 받습니다.\n용돈 입력 : ", abs(용돈_합));
  //		scanf("%d", &용돈);
  //		용돈_합 = 용돈_합 + 용돈;
  //		용돈_합 = 용돈_합 + 과자;
  //		printf("\n\n용돈을 추가받고 %d원이 되었다.\n", 용돈_합);
  //		용돈_합 = 용돈_합 - 과자;
  //		기회 = 기회 + 1;
  //	}
  //}

  //printf("\n\n과자를 구매하고 %d원이 남았다.\n", 용돈_합);



}











































/*
	int a = 1, b = 1;

	if (a == 1) {
		printf("a에 1이 들어있습니다.");
	}




	&& >> AND >> 양쪽 값이 모두 참이어야 참으로 인식

	|| >> OR >> 둘 중 하나라도 참인 경우에 참으로 인식





	int a = 131, b = 13;

	if (a == 1 && b == 1) {
		printf("a에 1이 들어있고, b에도 1이 들어있습니다.");
	}
	if (a != 1 || b != 1) {
		printf("a에 1이 들지않았거나, b에 1이 들지 않았습니다.");
	}

















	아래 문장을 그대로 if문을 통해서 나타내세요.

	a에 1이 들어있습니다.

	or

	a에 1이 들어있지 않습니다.


































	int a = 1, b = 2;

	if (a == 1)
	{
		printf("a에 1이 들어 있습니다");
	}
	if (b != 1)
	{
		printf("a에 1이 들어 있지 않습니다");
	}












	아래 문장을 그대로 if문을 통해서 나타내세요.

	a에 1000이상이 들어있을 수도 있고, 300이 들어있을 수도 있습니다. b는 a보다 크고, c보다는 작지만, 5000미만입니다. c는 a와 b를 합친 숫자입니다.

		만약 위 문장이 나타날 수 없는 경우,

	변수가 잘못되었습니다.





































	사람 이름, km수, 답:은 scanf로 입력받고 아래문장을 완성시켜보자.


	규민과 철수와 민영이 있다.
	셋의 집은 각각 10km마다 떨어져 있는 거리에 존재한다.
	세 명의 집을 차례대로 방문하려면 몇 km를 걸어가야 하는가.
	답 :

	정답인 경우
		정답입니다.

	오답인 경우
		오답입니다.
		답은 30km입니다.





	char a[100], a1[100], a2[100];
	int home = 30;
	int km, km1, km2;

	printf("규민과 철수와 민영이 있다\n");
	printf("셋의 집은 각각 10km마다 떨어져 있는 거리에 존재한다\n");
	printf("세 명의 집을 차례대로 방문하려면 몇 km를 걸어가야 하는가\n");
	printf("답 : \n\n");

	printf("사람 이름 입력 : ");
	scanf("%s", &a);

	printf("km 입력 : ");
	scanf("%d", &km);

	printf("사람 이름 입력 : ");
	scanf("%s", &a1);

	printf("km 입력 : ");
	scanf("%d", &km1);

	printf("사람 이름 입력 : ");
	scanf("%s", &a2);

	printf("km 입력 : ");
	scanf("%d", &km2);

	int total = km + km1 + km2;

	if (home == total)
	{
		printf("규민 %dkm, 철수 %dkm 민영 %dkm 정답 입니다", km, km1, km2);
	}
	if (home != total)
	{
		printf("규민 %dkm, 철수 %dkm, 민영 %dkm 오답입니다 답은 30km 입니다", km, km1, km2);
	}



















	처음에 어떤 숫자를 입력받을지 알 수 없지만, 10과 20이라고 가정한다.
	그렇게 하면 아래처럼 나타난다.
	10 + 20 =
	에서 깜빡이게 되고, 위 예시상으로 정답은 30이지만 30을 적지 않을 수도 있다.
	따라서, 오답일 경우 오답이라는 문장과 정답이 몇인지 알려주는 프로그램을 개발하고,
	정답일 경우, 정답입니다 라는 문장과 함께 다음 문제가 나타난다.

	1.10
	2.20

	둘 중에 어떤 숫자가 더 크냐는 질문을 하게 되고,
	위 예시상으로 정답은 2번이지만 1번일 수도 있다.
	정답일 경우 바로 정답이라는 문장과 함께 프로그램을 종료하고,
	오답일 경우 오답이라는 문구와 함께 몇 번이 정답인지 나타난다.







	int a, b, c, d;


	printf("숫자 입력 : \n");
	scanf("%d %d", &a, &b);
	printf("%d + %d = \n", a, b);
	printf("정답 입력 : \n");
	scanf("%d", &c);

	int total = a + b;

	if (total == c)
	{
		printf("정답\n");
	}
	else
	{
		printf("오답입니다 정답은 %d + %d = %d입니다\n", a, b, total);
	}

	printf("1.%d\n", a);
	printf("2.%d\n", b);

	printf("둘중에 더 큰 수는?\n");
	scanf("%d", &d);


	if (d == 1)
	{
		if (a > b)
		{
			printf("정답");
		}

		if (a < b)
		{
			printf("오답입니다 정답은 2번 입니다");
		}
	}
	if (d == 2)
	{
		if (a < b)
		{
			printf("정답");
		}
		if (a > b)
		{
			printf("오답입니다 정답은 1번 입니다");
		}


	}



	처음에 어떤 숫자를 입력받을지 알 수 없지만, 10과 20이라고 가정한다.
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
	3번 이상 오답일 경우 오답이라는 문구와 함께 몇 번이 정답인지 나타난다.








	다음 세 가지 중 고르시오.
	1. 감자. 2.옥수수 3. 수박
	1번을 누를 시
	1번 감자를 선택하셨습니다. 라는 문구가 나오도록.
	2번을 누를 시
	2번 옥수수를 선택하셨습니다.
	3번을 누를 시,
	3번 수박을 선택하셨습니다.
	>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	그 뒤 1번 감자에서 1천원어치, 2천원어치 3천원어치.
	2번을 누를 시 옥수수에서 4천원어치, 5천원어치 6천원어치,
	3번을 누를 시 수박에서 10000천원어치, 20000천원어치, 30000천원어치.
	라는 문구가 각각 나오도록 설정하고,
	그 안에서 또 1번을 누를 시
	“감자 1천원어치를 선택하셨습니다.” 라는 문구가 나오도록 하고,
	몇 개를 주문하겠냐고 질문한 뒤 그 개수에 따라 금액이 변동하도록 하시오.






















*/
myif()
{
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

  /*int a, b, c, d;


  printf("숫자 입력 : \n");
  scanf("%d %d", &a, &b);

  int total = a + b;

  printf("%d + %d = \n", a, b);
  printf("정답 입력 : \n");
  scanf("%d", &c);


  if (total == c)
  {
	  printf("정답!\n\n");
  }*/
















  /*printf("더 큰 수를 비교하세요\n\n");

  printf("1번 숫자 : \n");
  scanf("%d", &a);
  printf("2번 숫자 : \n");
  scanf("%d", &b);

  printf("둘중에 더 큰 숫자는 몇번인가요?? : \n\n");
  scanf("%d", &d);

  if (d == 1)
  {
	  if (a > b)
	  {
		  printf("정답");
	  }
	  if (a < b)
	  {
		  printf("틀렸습니다 더 큰 수는 %d 입니다", b);
	  }
  }
  if (d == 2)
  {
	  if (a < b)
	  {
		  printf("정답");
	  }
	  if (a > b)
	  {
		  printf("틀렸습니다 더 큰 수는 %d 입니다", a);
	  }
  }*/





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


/*int a1, a2, a3, a4, a5;
char b[5] = "감자", b1[7] = "옥수수", b2[5] = "수박";
char b3[10] = "1천원어치", b4[10] = "2천원어치", b5[10] = "3천원어치", b6[10] = "4천원어치", b7[10] = "5천원어치", b8[10] = "6천원어치";
char b9[14] = "10000천원어치", b10[14] = "20000천원어치", b11[14] = "30000천원어치";
int c;

printf("다음 세 가지 중 고르시오\n");
printf("1. 감자, 2. 옥수수, 3, 수박\n");
scanf("%d", &c);


if (c == 1)
{
	if (c == b)
	{
		printf("1번 감자를 선택하셨습니다");
	}
}
if (c == 2)
{
	if (c == b1)
	{
		printf("2번 옥수수를 선택하셨습니다");
	}
}
if (c == 3)
{
	if (c == b2)
	{
		printf("3번 수박을 선택하셨습니다");
	}
}*/























}






























/*
이름 :
주소 :
나이 :
성별 :
--------출력--------
이름 : 홍길동
주소 : 충청북도
나이 : 15
성별 : 남자





*/

/*
	gets 사용법
	gets문 오류 해결 방법
	1. gets문을 두  번 쓰는 것.
	2.getchar();함수를 사용해주는 방법.char a[100];
	char a1[100];
	char a2[100];
	int a3;


	printf("이름 : ");
	scanf("%s", &a);
	printf("주소 : ");
	getchar();
	gets(a1);

	printf("나이 : ");
	scanf("%d", &a3);

	printf("성별 : ");
	scanf("%s", &a2);

	printf("------------출력------------\n");
	printf("이름 : %s\n", a);
	printf("주소 : %s\n", a1);
	printf("나이 : %d\n", a3);
	printf("성별 : %s\n", a2);


	int a, b, c, d, e;



	printf("첫번째 숫자 : ");
	scanf("%d", &a);

	printf("두번째 숫자 : ");
	scanf("%d", &b);

	printf("세번째 숫자 : ");
	scanf("%d", &c);

	printf("네번째 숫자 : ");
	scanf("%d", &d);

	e = a + b;

	printf("%d + %d = %d\n", a, b, e);

	a = c * d;

	printf("%d * %d = %d\n", c, d, a);

	b = e + a;

	printf("%d + %d = %d", e, a, b);






	scanf에 4개 의 값을 입력받고, 아래와 같은 문장을 만드시오.

	총 두 개의 파생문제를 더 드릴 것입니다.

		1. 이번에는 printf에서 직접적으로 더하는 방식은 사용을 하지 않습니다 . >> printf("%d",a+b);
		2. 이번에는 변수를 5개만 사용해보겠습니다.

		1. 이번에는 printf에서 직접적으로 더하는 방식은 사용을 하지 않습니다 . >> printf("%d",a+b);
		2. 이번에는 변수를 4개만 사용해보겠습니다.

	?[첫번째숫자] + ?[두번째숫자] = ?[합1]
	?[세번째숫자] * ?[네번째숫자] = ?[합2]
	?[합1] + ?[합2] = ?



*/

mytest4()
{
  // 변수 5개 사용
  /*int a, b, c, d, e;

  printf("변수 5개 사용\n\n");
  printf("첫번째 숫자 : ");
  scanf("%d", &a);

  printf("두번째 숫자 : ");
  scanf("%d", &b);

  printf("세번째 숫자 : ");
  scanf("%d", &c);

  printf("네번째 숫자 : ");
  printf("\n\n");
  scanf("%d", &d);

  e = a + b;
  printf("첫번째 숫자 + 두번째 숫자\n\n");
  printf("%d + %d = %d\n\n", a, b, e);
  a = c * d;

  printf("세번째 숫자 x 네번째 숫자\n\n");
  printf("%d * %d = %d\n\n", c, d, a);

  d = e + a;
  printf("1,2번째 숫자 합 + 3,4번째 숫자\n\n");
  printf("%d + %d = %d\n\n\n", e, a, d);*/


  //변수 4개 사용

  //int a1, b1, c1, d1;

  //printf("변수 4개 사용\n\n");
  //printf("첫번째 숫자 : ");
  //scanf("%d", &a1);

  //printf("두번째 숫자 : ");
  //scanf("%d", &b1);

  //printf("세번째 숫자 : ");
  //scanf("%d", &c1);

  //printf("네번째 숫자 : ");
  //printf("\n\n");
  //scanf("%d", &d1);

  ////a1 = a1 + b1;
  //printf("첫번째 숫자 + 두번째 숫자\n\n");
  //printf("%d + ", a1);
  //printf("%d = ", b1);
  //a1 += b1;
  //printf("%d\n\n", a1);

  //b1 = c1 * d1;
  //printf("세번째 숫자 x 네번째 숫자\n\n");
  //printf("%d * %d = %d\n\n", c1, d1, b1);

  //c1 = a1 + b1;
  //printf("1,2번째 숫자 합 + 3,4번째 숫자\n\n");
  //printf("%d + %d = %d", a1, b1, c1);








}



























/*


	음식 이름, 음식 가격은 모두 변수로 지정해주세요.
	.[마침표] ,[쉼표]는 변수로 지정해주세요. >> %c
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

위 음식의 가격을 모두 합치면 ?원이고,
현재 ?원이 부족한 상태다.
따라서, ?명은 ?원을 더 내야만 한다.













사람 이름, 음식 이름, 음식 가격은 변수로 지정해주시고,
은,는,을,를,샀습,지불이라는 단어도 변수로 지정해주세요
.마침표와 ,쉼표는 변수로지정해주세요.  - %c

	철수와 영희는 함께 음식을 준비했습니다.
	철수는 토마토, 감자, 주스를 샀습니다.
	영희는 떡, 마늘, 양파를 샀습니다.
	토마토는 2000원, 감자는 800원, 주스는 1200원입니다.
	떡은 6200원, 마늘은 2000원, 양파는 3200원입니다.
	총 합은 ?원이 나왔습니다.
	철수는 ?원을 지불하고
	영희는 ?원을 지불하였습니다.
	영희는 철수보다 ?원을 더 지불했습니다.



	char a[5] = "철수", a1[5] = "영희";
	char b[7] = "토마토", b1[5] = "감자", b2[5] = "주스", b3[3] = "떡", b4[5] = "마늘", b5[5] = "양파";
	char d[3] = "은", d1[3] = "는", d2[3] = "을", d3[3] = "를", d4[5] = "샀습", d5[5] = "지불";

	int c = 2000, c1 = 800, c2 = 1200, c3 = 6200, c4 = 2000, c5 = 3200;

	char e = '.', e1 = ',';

	int total = c + c1 + c2 + c3 + c4 + c5;
	int f = 9000;
	int f1 = total - 9000;



	printf("%s 와 %s%s 함께 음식을 준비 했습니다\n", a, a1, d1);
	printf("%s%s %s%c %s%c %s%s %s니다\n", a, d1, b, e1, b1, e1, b2, d3, d4);
	printf("%s%s %s%c %s%c %s%s %s니다\n", a1, d1, b3, e1, b4, e1, b5, d3, d4);
	printf("%s%s %d원%c %s%s %d%c %s%s %d원 입니다\n", b, d1, c, e1, b1, d1, c1, e1, b2, d1, c2);
	printf("%s%s %d원%c %s%s %d원%c %s%s %d원 입니다\n", b3, d, c3, e1, b4, d, c4, e1, b5, d1, c5);
	printf("총 합%s %d원이 나왔습니다\n", d, total);
	printf("%s%s %d원%s %s하고\n", a, d1, f1, d2, d5);
	printf("%s%s %d원%s %s하였습니다\n", a1, d1, f, d2, d5);
	printf("%s%s %s보다 %d원%s 더 %s했습니다", a1, d1, a, f1, d2, d5);







































	&란 뭘까? > 무슨 연산자?

	쉽게 말해서

	보현학생이 인터넷에서 뭔가를 주문했어요.

	택배기사가 보현학생 집으로 배송을 시작.

	이 때 택비기사한테 필요한 data가 뭐가 있을까요?

	주소.

	& >> 주소다.










	b[6] = "happy";

	b[0], b[1], b[2], b[3], b[4], b[5];
	 h     a     p     p      y   null;

	int a;
	char b[100];

	printf("숫자 입력 : ");
	scanf("%d", a);

	printf("문자 입력 : ");
	scanf("%s", &b);

	printf("입력 된 숫자는 %d이고, 입력 된 문자는 %s입니다.", a, b);








	자기소개서 프로그램을 만들어보자.

	이름, 나이, 성별, 주소를 입력받고 아래 문장을 만들어보자.

	제 이름은 ?입니다.
	제 나이는 ?입니다.
	제 성별은 ?입니다.
	제 주소는 경기도 입니다.








	char a[100];
	int b;
	char a1[10];
	char a2[100];

	printf("이름 입력 : ");
	scanf("%s", &a);

	printf("나이 입력: ");
	scanf("%d", &b);

	printf("성별 입력: ");
	scanf("%s", &a1);

	printf("주소 입력 : ");
	scanf("%s", &a2);

	printf("제 이름은 %s 입니다\n", a);
	printf("제 나이는 %d 입니다\n", b);
	printf("제 성별은 %s 입니다\n", a1);
	printf("제 주소는 %s 입니다\n", a2);








































	음식 이름, 음식 가격은 scanf로 입력 받아보세요.

	.[마침표] ,[쉼표]는 변수로 지정해주세요. >> %c

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

위 음식의 가격을 모두 합치면 ?원이고,
현재 ?원이 부족한 상태다.
따라서, ?명은 ?원을 더 내야만 한다.



*/


mytest3()
{





  //음식 이름 
  //char a[7] = "떡볶이";
  //char a1[9] = "감자튀김", a2[10] = "모듬 튀김", a3[12] = "김말이 튀김", a4[10] = "계란 튀김", a5[5] = "순대", a6[5] = "우동";
  //char a7[5] = "오뎅", a8[7] = "돈까스", a9[12] = "치즈 돈까스", a10[12] = "김치 돈까스", a11[5] = "김밥", a12[10] = "참치 김밥", a13[10] = "김치 김밥";
  //char a14[18] = "아이스 아메리카노", a15[9] = "카페라떼", a16[16] = "카라멜 마끼아또", a17[10] = "믹스 커피", a18[7] = "볶음밥", a19[12] = "김치 볶음밥";
  //char a20[12] = "계란 볶음밥", a21[7] = "음료수", a22[5] = "과자";

  //////음식 가격 
  //int b = 6470000;
  //int b1 = 6988000, b2 = 666777, b3 = 8900000, b4 = 70000, b5 = 438000, b6 = 660000, b7 = 1480000, b8 = 728000, b9 = 889000;
  //int b10 = 1498000, b11 = 158000, b12 = 1690000, b13 = 1275800, b14 = 968000, b15 = 178000, b16 = 9900, b17 = 999999, b18 = 690000;
  //int b19 = 5800080, b20 = 4385000, b21 = 190000, b22 = 150000;

  ////int b, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20, b21, b22;

  //int total = b + b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10 + b11 + b12 + b13 + b14 + b15 + b16 + b17 + b18 + b19 + b20 + b21 + b22;

  //int people = 100000;

  //int minus = total - people;



  //////사람 수 , 마침표 , 쉼표, 보현학생 잠시만요 ^^ 
  //int c = 10;
  //int c1 = 100000;
  //char c2 = '.';
  //char c3 = ',';


  ////단어 변수
  //char d[3] = "원", d1[5] = "어치", d2[7] = "합치면", d3[7] = "부족한", d4[7] = "내야만";


  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a1);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a1);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a2);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a2);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a3);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a3);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a4);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a4);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a5);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a5);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a6);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a6);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a7);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a7);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a8);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a8);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a9);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a9);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a10);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a10);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a11);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a11);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a12);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a12);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a13);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a13);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a14);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a14);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a15);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a15);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a16);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a16);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a17);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a17);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a18);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a18);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a19);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a19);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a20);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a20);

  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a21);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a21);


  //printf("음식 이름 입력 : \n");
  //scanf("%s", &a22);
  //printf("입력 받은 음식 이름은 %s 입니다\n\n", a22);


  //printf("떡볶이 가격 입력 : \n");
  //scanf("%d", &b);
  //printf("떡볶이의 가격은 %d%s 입니다\n\n", b, d);

  //printf("감자 튀김 가격 입력 : \n");
  //scanf("%d", &b1);
  //printf("감자 튀김의 가격은 %d%s 입니다\n\n", b1, d);

  //printf("모듬 튀김 가격 입력 : \n");
  //scanf("%d", &b2);
  //printf("모듬 튀김의 가격은 %d%s 입니다\n\n", b2, d);

  //printf("김말이 튀김 가격 입력 : \n");
  //scanf("%d", &b3);
  //printf("김말이 튀김의 가격은 %d%s 입니다\n\n", b3, d);

  //printf("계란 튀김 가격 입력 : \n");
  //scanf("%d", &b4);
  //printf("계란 튀김의 가격은 %d%s 입니다\n\n", b4, d);

  //printf("순대 가격 입력 : \n");
  //scanf("%d", &b5);
  //printf("순대의 가격은 %d%s 입니다\n\n", b5, d);

  //printf("우동 가격 입력 : \n");
  //scanf("%d", &b6);
  //printf("우동의 가격은 %d%s 입니다\n\n", b6, d);

  //printf("오뎅 가격 입력 : \n");
  //scanf("%d", &b7);
  //printf("오뎅의 가격은 %d%s 입니다\n\n", b7, d);

  //printf("돈까스 가격 입력 : \n");
  //scanf("%d", &b8);
  //printf("돈까스의 가격은 %d%s 입니다\n\n", b8, d);

  //printf("치즈 돈까스 가격 입력 : \n");
  //scanf("%d", &b9);
  //printf("치즈 돈까스의 가격은 %d%s 입니다\n\n", b9, d);

  //printf("김치 돈까스 가격 입력 : \n");
  //scanf("%d", &b10);
  //printf("김치 돈까스의 가격은 %d%s 입니다\n\n", b10, d);

  //printf("김밥 가격 입력 : \n");
  //scanf("%d", &b11);
  //printf("김밥의 가격은 %d%s 입니다\n\n", b11, d);

  //printf("참치 김밥 가격 입력 : \n");
  //scanf("%d", &b12);
  //printf("참치 김밥의 가격은 %d%s 입니다\n\n", b12, d);

  //printf("김치 김밥 가격 입력 : \n");
  //scanf("%d", &b13);
  //printf("김치 김밥의 가격은 %d%s 입니다\n\n", b13, d);

  //printf("아이스 아메리카노 가격 입력 : \n");
  //scanf("%d", &b14);
  //printf("아이스 아메리카노의 가격은 %d%s 입니다\n\n", b14, d);

  //printf("카페라떼 가격 입력 : \n");
  //scanf("%d", &b15);
  //printf("카페라떼의 가격은 %d%s 입니다\n\n", b15, d);

  //printf("카라멜 마끼아또 가격 입력 : \n");
  //scanf("%d", &b16);
  //printf("카라멜 마끼아또의 가격은 %d%s 입니다\n\n", b16, d);

  //printf("믹스 커피 가격 입력 : \n");
  //scanf("%d", &b17);
  //printf("믹스 커피의 가격은 %d%s 입니다\n\n", b17, d);

  //printf("볶음밥 가격 입력 : \n");
  //scanf("%d", &b18);
  //printf("볶음밥의 가격은 %d%s 입니다\n\n", b18, d);

  //printf("김치 볶음밥 가격 입력 : \n");
  //scanf("%d", &b19);
  //printf("김치 볶음밥의 가격은 %d%s 입니다\n\n", b19, d);

  //printf("계란 볶음밥 가격 입력 : \n");
  //scanf("%d", &b20);
  //printf("계란 볶음밥의 가격은 %d%s 입니다\n\n", b20, d);

  //printf("음료수 가격 입력 : \n");
  //scanf("%d", &b21);
  //printf("음료수의 가격은 %d%s 입니다\n\n", b21, d);

  //printf("과자 가격 입력 : \n");
  //scanf("%d", &b22);
  //printf("과자의 가격은 %d%s 입니다\n\n", b22, d);


  //printf("총 %d명의 사람이 다 함께 음식점에 도착하였다\n\n", c);
  //printf("총 %d명이 모은 금액은 %d%s이다", c, c1, d);

  //printf("%s는 %d%s %s%s\n\n", a, b, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a1, b1, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a2, b2, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a3, b3, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a4, b4, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a5, b5, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a6, b6, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a7, b7, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a8, b8, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a9, b9, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a10, b10, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a11, b11, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a12, b12, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a13, b13, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a14, b14, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a15, b15, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a16, b16, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a17, b17, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a18, b18, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a19, b19, d, d1, c3);
  //printf("%s은 %d%s %s%s\n\n", a20, b20, d, d1, c3);
  //printf("%s는 %d%s %s%s\n\n", a21, b21, d, d1, c3);
  //printf("%s는 %d%s %s를 사먹게 되었다\n\n", a22, b22, d, d1);

  //printf("위 음식의 가격을 모두 %s %d%s이고%s\n\n", d2, total, d, c3);
  //printf("현재 %d%s이 %s상태다\n\n", minus, d, d3);
  //printf("따라서%s %d명은 %d%s을 더 %s한다", c3, c, minus, d, d4);





}





















/*
*
*
	int a = 10;

	printf("a에 든 숫자 : %d",a);




































	아래 문장을 그대로 나타내시고,
	숫자는 모두 변수로 지정해보자.

	a에는 1000이 들어있고, 그 외에는 30 40 50 60 70 1000이 들어있습니다.



	int a = 1000;
	int b = 30;
	int c = 40;
	int d = 50;
	int e = 60;
	int f = 70;

	printf("a에는 1000이 들어있고 그 외에는 30 40 50 60 70 1000이 들어있습니다",)


	printf("a에는 100이 들어있고 그 외에는 30 40 50 60 70 1000이 들어 있습니다",)






















	int a = 1000;
	int b = 30;
	int c = 40;
	int d = 50;
	int e = 60;
	int f = 70;
	printf("a에는 %d가 들어있고 그 외에는 %d %d %d %d %d %d가 들어 있습니다", a, b, c, d, e, f, a);.



























	아래 자기소개서 프로그램을 개발해보자.
	숫자만 변수를 지정해서 만들어주세요.

	오늘의 날짜는 ?월 ?일입니다.
	제 이름은 ?이고,
	제 나이는 ?이고,
	제 목표는 ?입니다.




	int a = 4;
	int b = 3;
	int c = 33;

	printf("오늘의 날짜는 %d월 %d일 입니다\n", a, b);
	printf("제 이름은 서보현이고\n");
	printf("제 나이는%d이고\n", c);
	printf("제 목표는 개발자가 되는것 입니다.");

















	숫자는 모두 변수로 지정해주세요.


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


위 음식의 가격을 모두 합치면 ?원이고,
현재 ?원이 부족한 상태다.
따라서, ?명은 ?원을 더 내야만 한다.





	int a = 647000;
	int b = 6988000;
	int c = 666777;
	int d = 8900000;
	int e = 70000;
	int f = 438000;
	int g = 660000;
	int h = 1480000;
	int i = 728000;
	int y = 889000;
	int u = 1498000;
	int r = 158000;
	int t = 1690000;
	int p = 1275800;
	int n = 968000;
	int m = 178000;
	int q = 9900;
	int w = 999999;
	int v = 690000;
	int z = 5800080;
	int x = 4385000;
	int num = 190000;
	int sum = 150000;

	int total = a + b + c + d + e + f + g + h + i + y + u + r + t + p + n + m + q + w + v + z + x + num + sum;
	int people = 4;
	int you = 100000;




	printf("떡볶이는 %d 어치\n", a);
	printf("감자튀김은 %d 어치\n", b);
	printf("모듬 튀김은 %d 어치\n", c);
	printf("김말이 튀김은 %d 어치\n", d);
	printf("계란 튀김은 %d 어치\n", e);
	printf("순대는 %d 어치\n", f);
	printf("우동은 %d 어치\n", g);
	printf("오뎅은 %d 어치\n", h);
	printf("돈까스는 %d 어치\n", i);
	printf("치즈 돈까스는 %d 어치\n", y);
	printf("김치 돈까스는 %d 어치\n", u);
	printf("김밥은 %d 어치\n", r);
	printf("참치 김밥은 %d 어치\n", t);
	printf("김치 김밥은 %d 어치\n", p);
	printf("아이스 아메리카노는 &d 어치\n", n);
	printf("카페라떼는 %d 어치\n", m);
	printf("카라멜 마끼아또 %d 어치\n", q);
	printf("믹스 커피는 %d 어치\n", w);
	printf("볶음밥은 %d 어치\n", v);
	printf("김치 볶음밥은 %d 어치\n", z);
	printf("계란 볶음밥은 %d 어치\n", x);
	printf("음료수는 %d 어치\n", num);
	printf("과자는 %d어치를 사먹게 되었다\n\n", sum);

	printf("위 음식의 가격을 모두 합치면 %d원 이고\n", total);
	printf("현재 100000만원이 부족한 상태다\n");
	printf("따라서 %d명은 %d원을 더 내야한다", people, total - you);




		float a = 10.5;


	printf("%.0f", a);



































		 문제출제 - 숫자는 모두 변환문자로 나타내시고, int형은 int형으로 나타내시고,
	float는 float형으로 나타내세요.
	문제출제 - 아래 문장 전체 나타내야 하고, printf 1줄로만 작성해보세요.
	문제출제 - 이 문제에서만 복사 붙여넣기를 사용하지 않습니다.
	10 + 11 + 12 + 13 + 14 + 15 + 16 + 17 + 18 + 19 + 20.1 + 21 + 22 + 23.1 + 24 + 25 + 26 + 27.1 +
	28 + 29 + 30 + 31.1 + 32 + 33 + 34.1 + 35 + 36 + 37 + 38.1 + 39.1 + 40 + 41 + 42 + 43 + 44 + 45 +
	46 + 47.1 + 48.1 + 49 + 50.1 + 51 + 52 + 53 + 54 + 55 = ?





	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	int e = 14;
	int f = 15;
	int g = 16;
	int h = 17;
	int i = 18;
	int j = 19;
	float k = 20.1;
	int l = 21;
	int m = 22;
	float n = 23.1;
	int v = 24;
	int x = 25;
	int z = 26;
	float q = 27.1;
	int w = 28;
	int r = 29;
	int t = 30;
	float y = 31.1;
	int o = 32;
	int ab = 33;
	float bc = 34.1;
	int cd = 35;
	int df = 36;
	int fg = 37;
	float gh = 38.1;
	float hi = 39.1;
	int ij = 40;
	int jk = 41;
	int kl = 42;
	int lm = 43;
	int mn = 44;
	int nv = 45;
	int vx = 46;
	float xz = 47.1;
	float zq = 48.1;
	int qw = 49;
	float wr = 50.1;
	int rt = 51;
	int ty = 52;
	int yo = 53;
	int abc = 54;
	int cde = 55;

	int total = a + b + c + d + e + f + g + h + i + j + k + l + m + n + v + x + z + q + w + r + t + y + o + ab + bc + cd + df + fg + gh + hi + ij + jk + kl + lm + mn + nv + vx + xz + zq + qw + wr + rt + ty + yo + abc + cde;



	printf("%d + %d + %d + %d + %d + %d + %d + %d + %d + %d + %.1f + %d + %d + %.1f + %d + %d + %d + %.1f + %d + %d + %d + %.1f + %d + %d + %.1f + %d + %d + %d + %.1f + %.1f + %d + %d + %d + %d + %d + %d + %d + %.1f + %.1f + %d + %.1f + %d + %d + %d + %d + %d", a , b , c , d , e , f , g , h , i , j , k , l , m , n , v , x , z , q , w , r , t , y , o , ab , bc , cd , df , fg , gh , hi , ij , jk , kl , lm , mn ,


































		nv , vx , xz , zq , qw , wr , rt , ty , yo , abc , cde = total );
































	문제출제 - 이번에는 본문에 들어있는 숫자를 제외하고 변수로 지정할 수 없습니다.
	문제출제 - 숫자는 모두 변수로 나타내어주세요.
	문제출제 - 오늘의 날짜나, 오늘의 회차, 이번달 날짜나 다음달 날짜를 바꾸어도 모두 정상 처리 되어야합니다.
	실행 결과는 위 날짜, 회차에 대한 변경에 대한 변수는 직접 test진행하여 제출해주세요.

	오늘의 날짜는 4월 10일입니다.
	오늘의 과외는 2회차입니다.
	한 주는 7일입니다.
	이번달은 30일까지 존재하고,
	다음달은 31일까지 존재합니다.
	다음달 14일까지는 ?일이 남았고, 과외는 ?회차일 것입니다.
	다음달 16일까지는 ?일이 남았고, 과외는 ?회차일 것입니다.
	다음달 21일까지는 ?일이 남았고, 과외는 ?회차일 것입니다.
	다음달 23일까지는 ?일이 남았고, 과외는 ?회차일 것입니다.
	다음달 28일까지는 ?일이 남았고, 과외는 ?회차일 것입니다.
	다음달 30일까지는 ?일이 남았고, 과외는 ?회차일 것입니다.




	int a = 4, b = 10, b1 = 2, c = 7, d = 30, e = 31, f = 14, g = 16;
	int a1 = 21, a2 = 23, a3 = 28, a4 = 30;
	//몇회차
	int d1 = b1 + 1, d2 = d1 + 1, d3 = d2 + 1, d4 = d3 + 1, d5 = d4 + 1, d6 = d5 + 1;
	//몇일 남음
	//이번달 최대 날짜에서 오늘 날짜 빼고 (30 - 10 = 20 ) 31 - 14 = 17
	int c1 =

	printf("오늘의 날짜는 %d월 %d일 입니다\n",a , b);
	printf("오늘의 과외는 %d회차 입니다\n",b1);
	printf("한 주는 %d일 입니다\n",c);
	printf("이번달은 %d일 까지 존재하고\n");
	printf("다음달은 %d일 까지 존재합니다\n");
	printf("다음달은 %d일 까지 %d일이 남았고, 과외는 %d회차 일것입니다\n");
	printf("다음달은 %d일 까지 %d일이 남았고, 과외는 %d회차 일것입니다\n");
	printf("다음달은 %d일 까지 %d일이 남았고, 과외는 %d회차 일것입니다\n");
	printf("다음달은 %d일 까지 %d일이 남았고, 과외는 %d회차 일것입니다\n");
	printf("다음달은 %d일 까지 %d일이 남았고, 과외는 %d회차 일것입니다\n");






































	printf("다음달은 %d일 까지 %d일이 남았고, 과외는 %d회차 일것입니다\n");



































	byte를 쉽게 제공하는 방법 3가지.

	1. byte를 그냥 크게 주는 방법.
	순위 : 3
	이유 : 그냥 크게 주게 되면 char에 선언된 byte 남는 값이 많아서 메모리를 많이 쓰게 됨

	강사 입장 :1
	학생 입장 : 2
	이유 : 이름 : 20byte  > 주소 : 50byte

	2. 마우스를 올려서, 사람이 직접 byte를 체크한 후 제공하는 방법.
	순위 : 2
	이유 : 정확한 byte수를 알수 있어서 메모리 낭비가 없음

	강사 입장 :2
	학생 입장 :1
	이유 : 강사는 어느 정도 틀이란 게 있어서. 학생분은 아직 byte개념이 많이 없기 떄문에.

	3. byte를 기입하지 않고, 컴퓨터가 직접 계산하게 하여 제공하게 하는 방법.
	순위 : 1
	이유 : byte를 신경 쓰지 않고 컴퓨터가 알아서 계산하게 만들기 때문에 작업 속도가 빠름

	강사 입장 :3
	학생 입장 :3
	이유 : 100% 오류가 난다.



	char a[] = "안녕하세요ㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠ";

	printf("%s", a);





	char a[] = "홍길동";
	char b = 'z';

	printf("a에 든 문자는 %s이고, b에 든 문자는 %c입니다.", a, b);
































	아래에서, ?는 변수로 지정하여 나타내세요.

	오늘은 ?월 ?일입니다.
	제 이름은 ?입니다.
	제 나이는 ?입니다.
	제 목표는 ?입니다.





	음식 이름, 음식 가격은 모두 변수로 지정해주세요.
	.[마침표] ,[쉼표]는 변수로 지정해주세요. >> %c
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

위 음식의 가격을 모두 합치면 ?원이고,
현재 ?원이 부족한 상태다.
따라서, ?명은 ?원을 더 내야만 한다.

*/

mytest1()
{
  ////음식 이름 
  //char a[7] = "떡볶이", b[9] = "감자튀김", c[9] = "모듬튀김", d[13] = "김말이 튀김", f[10] = "계란 튀김";
  //char g[5] = "순대", h[5] = "우동", i[5] = "오뎅", j[7] = "돈까스", k[12] = "치즈 돈까스", l[12] = "김치 돈까스";
  //char a1[5] = "김밥", a2[10] = "참치 김밥", a3[12] = "김치 김밥", a4[18] = "아이스 아메리카노", a5[9] = "카페라떼";
  //char a6[18] = "카라멜 마끼아또", a7[10] = "믹스 커피", a8[7] = "볶음밥", a9[12] = "김치 볶음밥", a10[12] = "계란 볶음밥";
  //char a11[7] = "음료수", a12[5] = "과자";
  ////음식 가격 
  //int b1 = 647000, b2 = 6988000, b3 = 666777, b4 = 8900000, b5 = 70000, b6 = 438000, b7 = 660000, b8 = 1480000;
  //int b9 = 728000, b10 = 889000, b11 = 1498000, b12 = 158000, b13 = 1690000, b14 = 1275800, b15 = 968000;
  //int b16 = 178000, b17 = 9900, b18 = 999999, b19 = 690000, b20 = 5800080, b21 = 4385000, b22 = 190000, b23 = 150000;
  ////마침표 쉼표
  //char c1 = ',', c2 = ',', c3 = ',', c4 = ',', c5 = ',', c6 = ',', c7 = ',', c8 = ',', c9 = ',', c10 = ',', c11 = ',';
  //char c12 = ',', c13 = ',', c14 = ',', c15 = ',', c16 = ',', c17 = ',', c18 = ',', c19 = ',', c20 = ',', c21 = ',', c22 = ',', c23 = ',';
  //char d1 = '.', d2 = '.', d3 = '.';
  ////원 ,어치 합치면 부족한 내야만 
  //char f1[3] = "원";
  //char f2[5] = "어치";
  //char f3[7] = "합치면";
  //char f4[7] = "부족한";
  //char f5[7] = "내야만";

  //int total = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10 + b11 + b12 + b13 + b14 + b15 + b16 + b17 + b18 + b19 + b20 + b21 + b22 + b23;
  //int money = 100000;
  //int money1 = total - money;
  //int people = 10;

  //printf("%s는 %d%s %s%c\n", a, b1, f1, f2, c1);
  //printf("%s은 %d%s %s%c\n", b, b2, f1, f2, c1);
  //printf("%s은 %d%s %s%c\n", c, b3, f1, f2, c1);
  //printf("%s은 %d%s %s%c\n", d, b4, f1, f2, c1);
  //printf("%s은 %d%s %s%c\n", f, b5, f1, f2, c1);
  //printf("%s는 %d%s %s%c\n", g, b6, f1, f2, c1);
  //printf("%s은 %d%s %s%c\n", h, b7, f1, f2, c1);
  //printf("%s은 %d%s %s%c\n", i, b8, f1, f2, c1);
  //printf("%s는 %d%s %s%c\n", j, b9, f1, f2, c1);
  //printf("%s는 %d%s %s%c\n", k, b10, f1, f2, c1);
  //printf("김치 돈까스는 %d%s %s%c\n", b11, f1, f2, c1);
  //printf("김밥은 %d%s %s%c\n", b12, f1, f2, c1);
  //printf("참치 김밥은 %d%s %s%c\n", b13, f1, f2, c1);
  //printf("김치 김밥은 %d%s %s%c\n", b14, f1, f2, c1);
  //printf("아이스 아메리카노는 %d%s %s%c\n", b15, f1, f2, c1);
  //printf("카페라떼는 %d%s %s%c\n", b16, f1, f2, c1);
  //printf("카라멜 마끼아또는 %d%s %s%c\n", b17, f1, f2, c1);
  //printf("믹스 커피는 %d%s %s%c\n", b18, f1, f2, c1);
  //printf("볶음밥은 %d%s %s%c\n", b19, f1, f2, c1);
  //printf("김치 볶음밥은 %d%s %s%c\n", b20, f1, f2, c1);
  //printf("계란 볶음밥은 %d%s %s%c\n", b21, f1, f2, c1);
  //printf("음료수는 %d%s %s%c\n", b22, f1, f2, c1);
  //printf("과자는 %d%s %s를 사먹게 되었다%c\n", b23, f1, f2, c1);



  //printf("위 음식의 가격을 모두 %s %d%s이고%c\n", f3, total, f1, d1);
  //printf("현재 %d%s이 %s 상태다%c\n", money1, f1, f4, d2);
  //printf("따라서 %d명은 %d%s을 더 %s 한다%c\n", people, money1, f1, f5, d3);

}































mytest2()
{
  //printf("Test2\n");
}


