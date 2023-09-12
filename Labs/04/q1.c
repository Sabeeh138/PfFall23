// Online C compiler to run C program online
#include <stdio.h>

int main(){
	int n, i, c;
	printf("Enter a Number 'n': ");
	scanf("%d", &n);
	for ( i = 0 ; i < n; i++ ) {
	for(c = 0; c <= i; c++){
		printf("*");
	}	
	printf("\n"); // new line
  }
	return 1;
}
	
