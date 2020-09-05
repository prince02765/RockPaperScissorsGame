#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int genraterndomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }

    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{

    int playerscore = 0;
    int compscore = 0, temp;
    char playerchar, compchar;

    char dict[] = {'r', 'p', 's'};

    printf("Welcome The game Rock, Paper, Scissor\n");

    for (int i = 0; i < 3; i++)
    {

        printf("Player's Turn\n");
        printf("Chose your number \n 1.Rock\n 2.Paper\n 3.Scissor\n");
        scanf("%d", &temp);
        playerchar = dict[temp - 1];
        printf("Player chose %c\n", playerchar);
        getchar();

        printf("Computer's Turn\n");
        printf("computer chosing number \n 1.Rock\n 2.Paper\n 3.Scissor\n");
        temp = genraterndomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose %c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("CPU got it !\n");
        }

        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("It's a drow");
        }

        else
        {
            playerscore += 1;
            printf("player got it !\n");
        }
        printf("You : %d\nCPU : %d\n", playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("you Win the match\n");
    }
    else if (playerscore = compscore)
    {
        printf("Its a drow\n");
    }
    else
    {
        printf("CPU win\n");
    }

    return 0;
}