#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define X_ARRAY_MAX 25
#define Y_ARRAY_MAX 15
#define FSTART_LOCATION 7
#define SSTART_LOCATION 8
int field[25][15] =
{
	// 0 {7,8} 1 {7,8} 
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};

int rec[2][2] =
{
	{1,1},
	{1,1}
};
int _x = 13;
int _y = 1;

void rec_paint_down(int x, int y);
void remove_rec(int x, int y);
void gotoxy(int x, int y);
void intro_game(void);
void game_field(void);
void print_array(int x, int y);
void keyboard_Controll_Event(void);

int main()
{
	//gotoxy(14, 1);
	//rec_paint(14, 1);
	//printf("■");
	//main화면
	intro_game();
	//게임화면
	game_field();
	//키보드 입력 이벤트
	keyboard_Controll_Event();
	//print_array(2,2,rec);
	return 0;
}

//게임화면
void game_field()
{
	int i = 0;
	int j = 0;
	//첫 필드 생성
	for (i=0; i < X_ARRAY_MAX; i++)
		{
		for (j=0; j < Y_ARRAY_MAX; j++)
		{
			if (field[i][j] == 2)
			{
				printf("▥");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	
}

//메인 화면
void intro_game()
{

	printf("▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥\n");
	printf("▥▥▥□□□□▥▥□□▥▥□□□▥▥□□▥▥□□□□▥▥\n");
	printf("▥▥□□▥▥▥▥□▥▥□▥□▥□▥□▥□▥▥□▥▥▥▥▥\n");
	printf("▥▥□▥▥▥▥▥□□□□▥□▥□▥□▥□▥▥□▥▥▥▥▥\n");
	printf("▥▥□▥□□□▥□□□□▥□▥▥□▥▥□▥▥□□□□▥▥\n");
	printf("▥▥□□▥▥□▥□▥▥□▥□▥▥□▥▥□▥▥□▥▥▥▥▥\n");
	printf("▥▥▥□□□□▥□▥▥□▥□▥▥□▥▥□▥▥□▥▥▥▥▥\n");
	printf("▥▥▥▥▥▥□▥□▥▥□▥□▥▥□▥▥□▥▥□□□□▥▥\n");
	printf("▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥\n");
	printf("If you continue, please press the Enter button\n");
	//kbhit(): 옛날꺼이기 때문에 -> "_kbhit()"로 사용 
	//_kbhit(): 키보드 입력을 대기하는 것이 아니라 확인용
	while (_kbhit() == 0) {
		if (_kbhit() != 0)
		{
			system("cls");
			break;
		}
	}
}

//배열 확인용
void print_array(int x, int y)
{
	int i = 0;
	int j = 0;
	for (i=0; i < x; i++)
	{
		for (j=0; j < y; j++)
		{
			//field[25][15] , rec[2][2]
			printf("%-2d", rec[i][j]);
		}
		printf("\n");
	}
}

void keyboard_Controll_Event()
{
	//위:72, 아래:80, 왼쪽:75, 오른쪽: 77, 엔터:13
	int key = 0;
	int bx = 0;
	int by = 0;
	int* xP = &_x;
	int* yP = &_y;

	gotoxy(*xP, *yP);
	//printf("방향키를 움직여 보세요!\n");
	//x가 배열의 행 y가 배열의 열
	while (1)
	{
		if (_kbhit())
		{
			//_getch() 함수는 입력된 키보드 입력의 아스키 코드를 반환
			key = _getch();
			//printf("%d\n\n", key);
			switch (key)
			{
				/*
			case 72:
				(*yP)++;
				printf("위로 올라값니다. %d\n", *yP);
				break;
				*/
			case 80:
					(*yP)++;
					//gotoxy(*xP, *yP); //field[i][j] i =bx = *yP
					//printf("[i:%d], [j:%d]", ((*yP) / 2), ((*xP) / 2));
					rec_paint_down(*xP, *yP);
					//Sleep(10);
					remove_rec(*xP, *yP-2);
					break;
			case 75:
				(*xP)--;
				printf("왼쪽으로 이동합니다. %d\n", *xP);
				break;
			case 77:
				(*xP)++;
				printf("오른쪽으로 이동합니다. %d\n", *xP);
				break;
			case 13:
				printf("종료합니다.");
				exit(0);
			}
		}
	}
}

//gotoxy함수 이용
void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void rec_paint_down(int x, int y)
{
	int i = 0;
	int j = 0;
	int cnt = 1;
	
	for (i=0; i<2; i++)
	{
		
		for (j = 0; j <2; j++)
		{
			if (rec[i][j])
				printf("■");
		}
		gotoxy(x, y+cnt++);
	}
}

void remove_rec(int x, int y)
{
	int i = 0;
	int j = 0;
	int cnt = 1;

	for (i = 0; i < 2; i++)
	{

		for (j = 0; j < 2; j++)
		{
			//printf("[1]Y: %d", ry);
			if (rec[i][j])
				printf("  ");
		}
		gotoxy(x, y + cnt++);
	}
}
