#pragma once
#include <stdio.h>
#define HOUR 3600
int scanf_p()
{
	int num01, num02;
	printf("ù ��° ���ڸ� �Է����ּ���>>");
	scanf_s("%d",&num01);
	printf("\n�� ��° ���ڸ� �Է����ּ���>>");
	scanf_s("%d", &num02);

	printf("�Էµ� ���ڴ� \"%d\", �� \"%d\"�Դϴ�.", num01, num02);

	return 0;
}

int point_ex()
{
	int num = 10;
	int num2 = 20;
	int* ptr = &num;
	int* ptr2 = &num2;
	
	printf("num�� ���� [%d]�̰�, num�� �ּҸ� ���� ptr�� �ּҰ��� [%x]�Դϴ�. ���� num�� �ּ� [%x]�� �����մϴ�.\n", num, ptr, &num);
	*ptr += 20;
	printf("num�� �ּҰ��� ���� ptr�� ���� [%d]�Դϴ�.\n", *ptr);

	printf("num�� �ּҰ��� ���� ptr�� ���� [%d] + 20�� ���ϸ�(%d) num���� ������ �ʽ��ϴ�%d. �Դϴ�.\n", *ptr,*ptr+10,num);

	return 0;
}

void change_time(int sec, int* h, int* m, int* s)
{
	*h = sec / HOUR;
	*m = (sec - (*h * HOUR)) / 60;
	*s = (sec - ((*h * HOUR) + *m * 60));
}

void input_val(int* i)
{
	printf("���ڸ� �Է����ּ���>>");
	scanf_s("%d", i);
}

int string_len(char* str)
{
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}