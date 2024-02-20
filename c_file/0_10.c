#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10
#define MINES 10

char board[ROW][COL];
int mask[ROW][COL];

void init_board()
{
    int i, j;
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            board[i][j] = '0';
    for (i = 0; i < MINES; i++)
    {
        int x = rand() % ROW;
        int y = rand() % COL;
        if (board[x][y] == '*')
            i--;
        else
            board[x][y] = '*';
    }
}

void init_mask()
{
    int i, j;
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            mask[i][j] = 0;
}

void count_mines()
{
    int i, j;
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            if (board[i][j] != '*')
            {
                int count = 0;
                if (i > 0 && j > 0 && board[i - 1][j - 1] == '*')
                    count++;
                if (i > 0 && board[i - 1][j] == '*')
                    count++;
                if (i > 0 && j < COL - 1 && board[i - 1][j + 1] == '*')
                    count++;
                if (j > 0 && board[i][j - 1] == '*')
                    count++;
                if (j < COL - 1 && board[i][j + 1] == '*')
                    count++;
                if (i < ROW - 1 && j > 0 && board[i + 1][j - 1] == '*')
                    count++;
                if (i < ROW - 1 && board[i + 1][j] == '*')
                    count++;
                if (i < ROW - 1 && j < COL - 1 && board[i + 1][j + 1] == '*')
                    count++;
                board[i][j] = count + '0';
            }
}

void display_board()
{
    int i, j;
    printf("  ");
    for (i = 0; i < COL; i++)
        printf("%d ", i);
    printf("\n");
    for (i = 0; i < ROW; i++)
    {
        printf("%d ", i);
        for (j = 0; j < COL; j++)
            if (mask[i][j])
                printf("%c ", board[i][j]);
            else
                printf("_ ");
        printf("\n");
    }
}