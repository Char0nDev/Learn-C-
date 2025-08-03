#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice()
{
    srand(time(NULL));

    int min = 1;
    int max = 3;

    return (rand() % (max - min + 1)) + 1;
}

void checkWinner(int userChoice, int computerChoice);

int main()
{
    printf("*** ROCK PAPER SCISSORS ***\n");

    int userChoice = 0;
    int computerChoice = getComputerChoice();

    do
    {
        printf("Choose an option\n");
        printf("1. Paper\n2. Rock\n3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);
    } while (userChoice > 3 || userChoice < 1);

    switch (userChoice)
    {
    case 1:
        printf("You chose Paper!\n");
        break;
    case 2:
        printf("You chose Rock!\n");
        break;
    case 3:
        printf("You chose Scissors!\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer chose Paper!\n");
        break;
    case 2:
        printf("Computer chose Rock!\n");
        break;
    case 3:
        printf("Computer chose Scissors!\n");
        break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

void checkWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        printf("It's a TIE!\n");
    }
    else if ((userChoice == 1 && computerChoice == 2) || (userChoice == 2 && computerChoice == 3) || (userChoice == 3 && computerChoice == 1))
    {
        printf("You WIN!\n");
    }
    else
    {
        printf("YOU LOSE!\n");
    }
}