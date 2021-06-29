#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockPaperScissors(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 'R' && comp == 'P')
    {
        return -1;
    }
    else if (you == 'R' && comp == 'S')
    {
        return 1;
    }

    if (you == 'P' && comp == 'R')
    {
        return 1;
    }
    else if (you == 'P' && comp == 'S')
    {
        return -1;
    }

    if (you == 'S' && comp == 'P')
    {
        return 1;
    }
    else if (you == 'S' && comp == 'R')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 'R';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'P';
    }
    else
    {
        comp = 'S';
    }

    printf("Enter 'R' for Rock, 'P' for Paper and 'S' for Scissors\n");
    scanf("%c", &you);
    int result = RockPaperScissors(you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
    printf("You Selected %c and Computer Selected %c. ", you, comp);
    return 0;
}