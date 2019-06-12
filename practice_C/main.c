#include "various.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#include <string.h>

#define TEXT "Hello C Wolrd"
#define MIN 2
#define MAX 9

/*int fun(int a)
{
	printf("\n넣어진 숫자는 %d 입니다.\a",a);
	return 0;
}*/

int main()
{
	//printf(TEXT);
	//fun(1);
	//scanf_p();
	//char* c = "test";
	//printf("%s", c);
	//point_ex();
	/*
	int sec = time(NULL);
	int h = 0;
	int m = 0;
	int s = 0;
	change_time(sec, &h, &m, &s);
	printf("[%d]초를 변환하면 \"%d시\", \"%d분\", \"%d초\"입니다.\n", sec, h, m, s);
	*/

	//구구단 역수 출력
	/*
	int d = 0;
	int cnt = MAX;
	printf("구구단 원하는 단수를 입력해주세요>>");
	scanf_s("%d", &d);
	while (cnt>0) {
		printf("%d x %d = %d\n",d,cnt,d*cnt);
		cnt--;
	}
	*/

	//1~500까지 짝수의 합
	/*int i = 0;
	int sum = 0;
	for (i; i <= 500; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("0~500의 짝수의 합은 [%d]입니다.", sum);*/

	//양의 정수 n이하인 k의 배수를 모두 찾아 출력
	int i = 0;
	int k = 0;
	int cnt = 0;
	int enter = 0;
	int* ptr = &i;
	char h[] = "Hello World";
	char* s = h;
	char temp = NULL;	
	printf("%s\n", s);
	
	for (i; i < strlen(s) / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + strlen(h) - i - 1);
		*(s + strlen(h) - i - 1) = temp;
	}

	printf("%s", s);

	/*
	input_val(&i);
	printf("추출할 배수를 입력해주세요>>");
	scanf_s("%d", &k);
	for (cnt; cnt <= i; cnt++) {
		
		if (cnt % k == 0){
			if (cnt == k-cnt)
				printf("%-5d", cnt);
			else {
				printf("%-5d ", cnt);
				++enter;
				if (enter % 3 == 0)
					printf("\n");
			}
		}
		
	}
	*/

	//구구단 2~9단
	/*
	for (i=1; i < 10; i++)
	{
		for (k=2; k < 10; k++)
		{
			printf("%2d * %2d = %2d	", k, i, k * i);
		}
		printf("\n");
	}
	*/
	
	
	/*input_val(&i);
	input_val(&k);
	if (i > k)
		printf("%d > %d입니다.", i, k);
	else if (i == k)
		printf("%d == %d입니다.", i, k);
	else if (i < k)
		printf("%d > %d입니다.", k, i);
	*/

	return 0;
}