// k230002
// programmer:Muhammad Sabeeh
// LAB4
// date:9/12/23
#include <stdio.h>
#include<math.h>
main(){
	int a,b,c,z;
	float dis,x,y;
	printf("enter the value of a \n");
	scanf("%d", &a);

	printf("enter the value of b \n");
	scanf("%d", &b);

	printf("enter the value of c \n");
	scanf("%d", &c);

	z=(b*b)-(4*a*c);
	dis=sqrt(z);
	x=(-b+dis)/(2*a);
	y=(-b-dis)/(2*a);
	printf("the 2 solutions are x1 %f and x2 %f",x,y);
}
