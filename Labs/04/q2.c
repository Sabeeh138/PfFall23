/*
*Programmer: Muhammad Sabeeh
*Data: (9/12/2023)
*Description: Print pattern for any Number n
*/

//--Included files--//
#include <stdio.h>

int main(){
	int n, i=1;
	printf("enter a number");
	scanf("%d", &n);
	while(i<=n){
	int j=1;
	while(j<=n){
		printf("*");
		j++;
	}
	printf("\n");
	i++;
	}
}
	
