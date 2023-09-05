#include <stdio.h>
int main() {
	int l = 0, w = 0, d = 0, v = 0;
	printf("Enter Length: ");
	scanf("%d" ,&l);
	printf("Enter Width: ");	
	scanf("%d" ,&w);
	printf("Enter Depth: ");
	scanf("%d" ,&d);
	v = l*w*d;
	printf(" Volume is: %d" , v);
	return 1;
}//end main() 
