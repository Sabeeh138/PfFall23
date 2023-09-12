// k230002
// programmer:Muhammad Sabeeh
// LAB4
// date:9/12/23
int main() {
    int d1, m1, y1; //age of first person*
    int d2, m2, y2; //age of second person*

    printf("Enter the day of birth of person 1: ");
    scanf("%d", &d1);
    printf("Enter the month of birth of person 1: ");
    scanf("%d", &m1);
    printf("Enter the year of birth of person 1: ");
    scanf("%d", &y1);

    printf("Enter the date of birth of person2: ");
    scanf("%d", &d2);
    printf("Enter the month of birth of person2: ");
    scanf("%d", &m2);
    printf("Enter the year of birth of person2: ");
    scanf("%d", &y2);
	if(y1<y2){
		printf("the person 1 is older: \n");
	}else if(y1>y2){
		printf("the person 2 is older: \n");
	}else if(m1<m2){
		printf("the person 1 is older: \n");
	}else if(m1>m2){
	     printf("the person 2 is older: \n");
	}else if(d1<d2){
		printf("the person 1 is older: \n");
	}else if(d1>d2){
		printf("the person 2 is older: \n");
	}else 
	{
		printf("both person have the same date of birth\n");
	}
	
	return 0;
	
}
    }
    
