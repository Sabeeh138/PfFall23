/*
* Programmer : Muhammad Sabeeh
* Desc : 2d arrays for batting performances
/*
  #include <stdio.h>

int main() {
    int batsmen, innings;

    printf("Enter the number of batsmen: ");
    scanf("%d", &batsmen);

    printf("Enter the number of innings: ");
    scanf("%d", &innings);

    int batting[batsmen][innings];

    // Input batting performance
    for (int i = 0; i < batsmen; i++) {
        printf("Enter batting performance for Batsman %d:\n", i + 1);
        for (int j = 0; j < innings; j++) {
            printf("Inning %d: ", j + 1);
            scanf("%d", &batting[i][j]);
        }
    }

    // Calculate and display statistics
    for (int i = 0; i < batsmen; i++) {
        int totalRuns = 0;
        int highestScore = 0;
        int centuries = 0;
        int halfCenturies = 0;

        for (int j = 0; j < innings; j++) {
            totalRuns += batting[i][j];

            if (batting[i][j] > highestScore) {
                highestScore = batting[i][j];
            }

            if (batting[i][j] >= 100) {
                centuries++;
            } else if (batting[i][j] >= 50 && batting[i][j] <= 99) {
                halfCenturies++;
            }
        }

        float averageRuns = (float)totalRuns / innings;

        printf("Batsman %d:\n", i + 1);
        printf("Total runs scored: %d\n", totalRuns);
        printf("Average runs per inning: %.2f\n", averageRuns);
        printf("Highest score in a single inning: %d\n", highestScore);
        printf("Number of centuries: %d\n", centuries);
        printf("Number of half-centuries: %d\n\n", halfCenturies);
    }

    return 0;
}
