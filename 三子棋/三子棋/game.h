#pragma once
//头文件包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//棋盘的大小定义
#define ROW 3
#define COL 3

//函数声明：
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家行动
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑行动
void ComputerMove(char board[ROW][COL], int row, int col);
//判断胜负
char IsWin(char board[ROW][COL], int row, int col);