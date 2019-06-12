#pragma once
#include <stdio.h>
#define HOUR 3600
int scanf_p()
{
	int num01, num02;
	printf("첫 번째 숫자를 입력해주세요>>");
	scanf_s("%d",&num01);
	printf("\n두 번째 숫자를 입력해주세요>>");
	scanf_s("%d", &num02);

	printf("입력된 숫자는 \"%d\", 와 \"%d\"입니다.", num01, num02);

	return 0;
}

int point_ex()
{
	int num = 10;
	int num2 = 20;
	int* ptr = &num;
	int* ptr2 = &num2;
	
	printf("num의 값은 [%d]이고, num의 주소를 담은 ptr의 주소값은 [%x]입니다. 또한 num의 주소 [%x]와 동일합니다.\n", num, ptr, &num);
	*ptr += 20;
	printf("num의 주소값을 담은 ptr의 값은 [%d]입니다.\n", *ptr);

	printf("num의 주소값을 담은 ptr의 값에 [%d] + 20을 더하면(%d) num값은 변하지 않습니다%d. 입니다.\n", *ptr,*ptr+10,num);

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
	printf("숫자를 입력해주세요>>");
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