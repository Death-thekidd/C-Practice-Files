#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char arr[3][4] =
{
    {'0', '1', '2', '3'},
    {'0', '4', '5', '6'},
    {'0', '7', '8', '9'}
};

void drawBoard(char v[3][4]);
void markBoard(void);
int checkForWin(void);

/**
* main - Entry point
* Return: Always (0) success
* Description: TIC-TAC-TOE
*/
int main()
{
    drawBoard(arr);
    markBoard();
    return 0;
}
/**
* drawBoard - Displays the Board
* Return: void
*/
void drawBoard(char v[3][4])
{
    system("cls");
    printf("\tTic Tac Toe\n");
    printf("\nPlayer 1(x) - Player 2 (o)\n\n");
    printf("     |     |\n");
    printf("  %c  |  %c  |  %c\n", v[0][1], v[0][2], v[0][3]);
    printf("_____|_____|_____\n");
    printf("     |     |\n");
    printf("  %c  |  %c  |  %c\n", v[1][1], v[1][2], v[1][3]);
    printf("_____|_____|_____\n");
    printf("     |     |\n");
    printf("  %c  |  %c  |  %c\n", v[2][1], v[2][2], v[2][3]);
    printf("_____|_____|_____\n");

}

/**
* markBoard - Remarks the board on user's input
* Return: void
*/
void markBoard(void)
{
    int i, j;
    bool check, draw;
    draw = true;
    for (j = 1; j < 10; j++)
    {
        if(j % 2 != 0)
        {
            printf("\nPlayer 1, enter a number: ");
                scanf(" %d", &i);
                if(i > 0 && i <= 3)
                {
                    if(arr[0][i] != 'x' && arr[0][i] != 'o')
                        arr[0][i] = 'x';
                    else{
                        printf("Invalid move");
                        j--;
                        getch();
                    }

                } else if (i > 3 && i < 7)
                {
                    if(arr[1][i - 3] != 'x' && arr[1][i - 3] != 'o')
                        arr[1][i - 3] = 'x';
                    else{
                        printf("Invalid move");
                        j--;
                        getch();
                    }
                } else if (i > 6 && i < 10)
                {
                    if (arr[2][i - 6] != 'x' && arr[2][i - 6] != 'o')
                        arr[2][i - 6] = 'x';
                    else {
                        printf("Invalid move");
                        j--;
                        getch();
                    }
                } else {
                    printf("Invalid move");
                    j--;
                    getch();
                }


            check = checkForWin();
            if (check)
            {
                drawBoard(arr);
                draw = false;
                printf("\n==>Player 1 win\n");
                break;
            }
            else
                drawBoard(arr);

        } else {
            printf("\nPlayer 2, enter a number: ");
            scanf("%d", &i);
            if( i <= 3)
            {
                if(arr[0][i] != 'x' && arr[0][i] != 'o')
                        arr[0][i] = 'o';
                else{
                        printf("Invalid move");
                        j--;
                        getch();
                    }
            } else if (i > 3 && i < 7)
            {
                if(arr[1][i - 3] != 'x' && arr[1][i - 3] != 'o')
                    arr[1][i - 3] = 'o';
                else{
                        printf("Invalid move");
                        j--;
                        getch();
                    }
            } else if (i > 6 && i < 10)
            {
                if (arr[2][i - 6] != 'x' && arr[2][i - 6] != 'o')
                    arr[2][i - 6] = 'o';
                else{
                        printf("Invalid move");
                        j--;
                        getch();
                    }
            } else {
                    printf("Invalid move");
                    j--;
                    getch();
                }
            check = checkForWin();
            if (check)
            {
                drawBoard(arr);
                draw = false;
                printf("\n==>Player 2 wins\n");
                break;
            }
            else
                drawBoard(arr);
        }
    }
    if(draw)
        printf("\n==>It's a draw!");
}

/**
* checkForWin - Checks the board if there's a winner
* Return: 1 if yes and 0 if no
*/
int checkForWin(void)
{
    int j, k, l, m, track;
    char i;
    for(i = 'x', j = 0; j < 2; j++, i = 'o')
    {
        for(l = 0; l < 3; l++)
        {
            for (track = 0, m = 1; m < 4; m++)
            {
                if (arr[l][m] != i)
                    continue;
                else if (arr[l][m] == i)
                    track++;
            }
            if (track == 3)
                return (1);
        }
        for (m = 1; m < 4; m++)
        {
            for(track = 0, l = 0; l < 3; l++)
            {
                if (arr[l][m] != i)
                    continue;
                else if (arr[l][m] == i)
                    track++;
            }
            if (track == 3)
                return (1);
        }
        for (track = 0, k = 0; k < 3; k++)
        {
            if (arr[k][k + 1] != i)
                continue;
            else if (arr[k][k + 1] == i)
                track++;
        }
        if (track == 3)
            return (1);
    }
    return(0);
}
