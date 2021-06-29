#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, sucguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Go Lower please!\n");
        }
        else if (guess < number)
        {
            printf("Go Higher please!\n");
        }
        else
        {
            printf("You have successfully guessed the number in %d attempts\n", sucguess);
        }
        sucguess++;
    } while (guess != number);

    return 0;
}