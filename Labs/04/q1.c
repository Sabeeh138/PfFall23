/*
*Programmer: Muhammad Sabeeh
*Data: (9/12/2023)
*Description: Print pattern for any Number n
*/

//--Included files--//
#include <stdio.h>

int main(){
	int n, i, c;
	i = 0, c = 0;
	printf("Enter a Number 'n': ");
	scanf("%d", &n);

	while ( i < n ) {
	c = 0; 
	while (c<= i) {
		printf("*");
	c++;
}	
	printf("\n"); // new line
	i++;
  }
	return 1;
}
	
