#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int createrandomnumber()
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    int player1,i;
    int score1=0, score2=0;

    printf("let the game begin!!!\n");
    int round = 3;
    for (i = 0; i < round ; i++)
    {
        printf("ROUND %d BEGINS\n",i+1);
        printf("press 0 to throw stone, 1 to throw paper, 2 to throw scissors\n");
        printf("PLAYER 1, enter your move : \n");
        scanf("%d", &player1);
        int player2 = createrandomnumber();
        printf("player 2 has chosen %d\n", player2);
        switch (player1)
        {
        case 0:
            if (player2 == 0)
            {
                printf(" its a tie!!! \n");
            }
            else if (player2 == 1)
            {
                printf("computer wins!!! \n");
                score2 ++;
            }
            else if (player2 == 2)
            {
                printf("player 1 wins!!!\n");
                score1++;
            }
            else
            {
                printf("something went wrong, please try again\n");
            }
            break;

        case 1:
            if (player2 == 0)
            {
                printf(" player 1 wins!!!\n");
                score1++;
            }
            else if (player2 == 1)
            {
                printf("it's a tie \n");
            }
            else if (player2 == 2)
            {
                printf("computer wins!!!\n");
                score2++;
            }
            else
            {
                printf("something went wrong, please try again\n");
            }
            break;
        case 2:
            if (player2 == 0)
            {
                printf(" computer wins!!!\n");
                score2++;
            }
            else if (player2 == 1)
            {
                printf("player 1 wins!!! \n");
                score1++;
            }
            else if (player2 == 2)
            {
                printf("it's a tie \n");
            }
            else
            {
                printf("something went wrong, please try again\n");
            }
            break;
        default:
            printf("something went wrong, please try again\n");
            break;
        }
        printf("current score : %d / %d\n",score1,score2);
        printf("\n");
    }
    if (score1>score2){
        printf("PLAYER 1 wins the match!!!\n");
    }
    else if (score2 > score1){
        printf("PLAYER 1 lost the match***\n");
    }
    else{
        printf("it was a tuff competition... its a tie\n");
    }
    return 0;
}