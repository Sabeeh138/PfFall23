#include <stdio.h>
#include <math.h>

int main() {
	float op = 0, sp = 0, dis=0;
	printf("What is the Original Price? \n: ");
	scanf("%f" ,&op);
	printf("What is the discount: ");	
	scanf("%f" ,&dis);
	float disperc = dis/100;
	float disprice = disperc * op;
	sp = op - disprice;
	printf(" Sale price is: %f" , sp);
	return 1;
}//end main() 
