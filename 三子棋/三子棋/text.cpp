#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("******************\n");
	printf("*******1.play*****\n");
	printf("*******0.exit*****\n");
	printf("******************\n");
}

void game()
{
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘-本质是在打印数组内容
	DisplayBoard(board, ROW, COL);
	
	//玩家行动
	//电脑行动
	char ret = 0;
	while (1)
	{
		//玩家行动
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断胜负
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑行动
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断胜负
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家胜利！！\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利！！\n");
	}
	else
	{
		printf("平局！！\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}