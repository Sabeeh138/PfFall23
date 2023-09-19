# include<stdio.h>
main(){
char chr;
	printf("enter any character:");
	scanf("%c", &chr);
	if ( chr>= 'a' && chr<= 'z'){
		printf("small alphabet");
	}
	else if (chr>= 'A' && chr <= 'Z'){
		printf("Capital Alphabet");
	}
	else if (chr>= '0' && chr<='9'){
		printf("digital character");
	}
	else{
		printf("special charcter");
	}
}
