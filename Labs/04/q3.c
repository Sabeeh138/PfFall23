#include <stdio.h>
#include <math.h>
int main(){
	int i,j,x;
	int sqr=0,sum=0;
	printf("enter i\n");
	scanf("%d", &i);
	while(j<i){
		printf("enter x\n");
		scanf("%d", &x);
		sqr=(x*x);
		sum=sum+sqr;
		j++;
	}
	printf("the square answer is %d", sum);

}
