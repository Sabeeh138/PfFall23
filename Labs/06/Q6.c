#include <stdio.h>

int main() {
    int user, computer;
    int mts = 21;

    printf("--Welcome to the Game--");
    printf("\nThe Rules are: ");
    printf("\n1. There are 21 matchsticks.");
    printf("\n2. The user and the computer can pick 1, 2, 3, or 4 matchsticks.");
    printf("\n3. Whoever is forced to pick up the last matchstick loses the game.");
    printf("\n------------");

    printf("\nStarting the Game!");

    while (mts > 0) {
        printf("\nMatchsticks remaining: %d\n", mts);
        printf("You can choose 1, 2, 3, or 4 mts. ");
        scanf("%d", &user);

        if (user < 1 || user > 4 || user > mts) {
            printf("\nInvalid Option chosen");
            continue;
        }

        matchsticks = matchsticks - user;

        if (mts == 0) {
            printf("\nYou picked the last matchstick. YOU LOST!");
            printf("\nGAME OVER");
            break; // Exit the loop since the game is over
        }

        computer = 5 - user;
        printf("Computer chose %d matchsticks", computer);
        mts = mts - computer;
    }

    return 0;
}
