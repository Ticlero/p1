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
	printf("\n�־��� ���ڴ� %d �Դϴ�.\a",a);
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
	printf("[%d]�ʸ� ��ȯ�ϸ� \"%d��\", \"%d��\", \"%d��\"�Դϴ�.\n", sec, h, m, s);
	*/

	//������ ���� ���
	/*
	int d = 0;
	int cnt = MAX;
	printf("������ ���ϴ� �ܼ��� �Է����ּ���>>");
	scanf_s("%d", &d);
	while (cnt>0) {
		printf("%d x %d = %d\n",d,cnt,d*cnt);
		cnt--;
	}
	*/

	//1~500���� ¦���� ��
	/*int i = 0;
	int sum = 0;
	for (i; i <= 500; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("0~500�� ¦���� ���� [%d]�Դϴ�.", sum);*/

	//���� ���� n������ k�� ����� ��� ã�� ���
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
	printf("������ ����� �Է����ּ���>>");
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

	//������ 2~9��
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
		printf("%d > %d�Դϴ�.", i, k);
	else if (i == k)
		printf("%d == %d�Դϴ�.", i, k);
	else if (i < k)
		printf("%d > %d�Դϴ�.", k, i);
	*/

	return 0;
}