# include<stdio.h>
	main(){
	int time;
	printf("Enter time in 24 hours format:");
	scanf("%d", &time);
	if ( time>=5 && time<=11){
		printf("Good Morning");
	}
	else if (time>= 12 && time <= 18){
		printf("Good evening");
	}
	else if (time>=18 && time<=24){
		printf("goodnight");
	}
	else{
		printf("Input correct time");
	}
}
