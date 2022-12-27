#define  ROW 3 
#define  LOW 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROW][LOW], int row, int low);
void dispalyboard(char board[ROW][LOW],int row,int low);
void playermove(char board[ROW][LOW], int row, int low);
void computermove(char board[ROW][LOW],int row,int low);
char iswin(char board[ROW][LOW], int row, int low);