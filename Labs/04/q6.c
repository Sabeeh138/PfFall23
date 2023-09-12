#include <stdio.h>

int main()
{
	int x = 5, rows = 1, columns;	
	while (rows <= x) {
		columns = x;
		while (columns > rows) {
			printf(" ");
			columns--;
		}
		printf("*");
		columns = 1;
		while (columns < (rows - 1) * 2) {
			printf(" ");
			columns++;
		}
		if (rows = 1) {
			printf(" \n");
		}
		else {
			printf("* \n");
		}
		rows++;
	}
	rows = x - 1;
	while (rows >= 1) {
		columns = x;
		while (columns > rows) {
			printf(" ");
			columns--;
		}
		printf("*");
		columns = 1;
		while (columns < (rows - 1) * 2) {
			printf(" ");
			columns++;
		}
		if (rows == 1) {
			printf("\n");
		}
		else {
			printf("*\n");
		}
		rows--;
	}
	return 0;
// took help from chatgpt, fasih and Muhammad abbas for excecuting the column one
