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
	//printf("��");
	//mainȭ��
	intro_game();
	//����ȭ��
	game_field();
	//Ű���� �Է� �̺�Ʈ
	keyboard_Controll_Event();
	//print_array(2,2,rec);
	return 0;
}

//����ȭ��
void game_field()
{
	int i = 0;
	int j = 0;
	//ù �ʵ� ����
	for (i=0; i < X_ARRAY_MAX; i++)
		{
		for (j=0; j < Y_ARRAY_MAX; j++)
		{
			if (field[i][j] == 2)
			{
				printf("��");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	
}

//���� ȭ��
void intro_game()
{

	printf("�ȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢ�\n");
	printf("�ȢȢȡ����Ȣȡ��Ȣȡ���Ȣȡ��Ȣȡ����Ȣ�\n");
	printf("�Ȣȡ��ȢȢȢȡ�Ȣȡ�ȡ�ȡ�ȡ�ȡ�Ȣȡ�ȢȢȢȢ�\n");
	printf("�Ȣȡ�ȢȢȢȢȡ����ȡ�ȡ�ȡ�ȡ�Ȣȡ�ȢȢȢȢ�\n");
	printf("�Ȣȡ�ȡ���ȡ����ȡ�Ȣȡ�Ȣȡ�Ȣȡ����Ȣ�\n");
	printf("�Ȣȡ��Ȣȡ�ȡ�Ȣȡ�ȡ�Ȣȡ�Ȣȡ�Ȣȡ�ȢȢȢȢ�\n");
	printf("�ȢȢȡ����ȡ�Ȣȡ�ȡ�Ȣȡ�Ȣȡ�Ȣȡ�ȢȢȢȢ�\n");
	printf("�ȢȢȢȢȢȡ�ȡ�Ȣȡ�ȡ�Ȣȡ�Ȣȡ�Ȣȡ����Ȣ�\n");
	printf("�ȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢȢ�\n");
	printf("If you continue, please press the Enter button\n");
	//kbhit(): �������̱� ������ -> "_kbhit()"�� ��� 
	//_kbhit(): Ű���� �Է��� ����ϴ� ���� �ƴ϶� Ȯ�ο�
	while (_kbhit() == 0) {
		if (_kbhit() != 0)
		{
			system("cls");
			break;
		}
	}
}

//�迭 Ȯ�ο�
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
	//��:72, �Ʒ�:80, ����:75, ������: 77, ����:13
	int key = 0;
	int bx = 0;
	int by = 0;
	int* xP = &_x;
	int* yP = &_y;

	gotoxy(*xP, *yP);
	//printf("����Ű�� ������ ������!\n");
	//x�� �迭�� �� y�� �迭�� ��
	while (1)
	{
		if (_kbhit())
		{
			//_getch() �Լ��� �Էµ� Ű���� �Է��� �ƽ�Ű �ڵ带 ��ȯ
			key = _getch();
			//printf("%d\n\n", key);
			switch (key)
			{
				/*
			case 72:
				(*yP)++;
				printf("���� �ö󰪴ϴ�. %d\n", *yP);
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
				printf("�������� �̵��մϴ�. %d\n", *xP);
				break;
			case 77:
				(*xP)++;
				printf("���������� �̵��մϴ�. %d\n", *xP);
				break;
			case 13:
				printf("�����մϴ�.");
				exit(0);
			}
		}
	}
}

//gotoxy�Լ� �̿�
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
				printf("��");
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
