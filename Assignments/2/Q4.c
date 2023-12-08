/*
Muhammad Sabeeh
ID:23k0002
Desc:A program to traverse a 5x5 maze and return coordinates for the path from start to end
*/
#include<stdio.h>
#include<stdlib.h>

void findExitPath(int rows, int cols, char maze[5][5]) {
    int startX = -1, startY = -1;
    
    // Initializing arrays to store the path coordinates
    int pathRows[25], pathCols[25], count = 0;

    // Printing the maze
    printf("This is the maze:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c, ", maze[i][j]);
            if (maze[i][j] == 'S') {
                startX = i;
                startY = j;
            }
        }
        printf("\n");
    }

    // Nested loop to traverse through the whole maze
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // If it's the starting position, store the index values
            if (maze[i][j] == 'S') {
                pathRows[0] = i;
                pathCols[0] = j;
            }

            // Checking all valid moves
            if (maze[i][j] == 'O' && (
                (maze[i + 1][j] == 'O' || maze[i][j + 1] == 'O' || maze[i + 1][j] == 'E' || maze[i][j + 1] == 'E') &&
                (maze[i - 1][j] == 'O' || maze[i][j - 1] == 'O' || maze[i - 1][j] == 'S' || maze[i][j - 1] == 'S'))) {
                count += 1;
                pathRows[count] = i;
                pathCols[count] = j;
            }

            // Checking if exit has been reached
            if (maze[i][j] == 'E') {
                count += 1;
                pathRows[count] = i;
                pathCols[count] = j;
            }
        }
    }

    // Printing the path to exit coordinates
    printf("Path to exit coordinates: ");
    for (int i = 0; i <= count; i++) {
        printf("(%d,%d) ", pathRows[i], pathCols[i]);
    }
}

int main() {
    int rows = 5, cols = 5;
    
    // Initializing the maze
    char maze[5][5] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'W', 'W'},
        {'W', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'},
    };

    // Calling the function to find the exit path
    findExitPath(rows, cols, maze);

    return 0;
}
