#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);

DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);


//������Ϸ״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q'
//����   - 'C'
char IsWin(char board[ROW][COL], int row, int col);