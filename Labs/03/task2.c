#include <stdio.h>

int main() {
	float p = 0.0, b = 0.0, h = 0.0;
	printf("Enter Length of perpendicular side: ");
	scanf("%f" ,&p);
	printf("Enter Length of base: ");	
	scanf("%f" ,&b);
	float ans = (p*p) + (b*b);
	h = sqrt(ans);
	printf(" Hypotenuse is: %f" , h);
	return 1;
}//end main() 
