# include<stdio.h>
main(){
char opt;
	printf("are you sure you want to delete this? [Y/y] / [N/n] ");
	scanf("%c", &opt);
	switch (opt) {
	case 'Y':
	case 'y':
			printf("deleted successfully");
			break;
	case 'N':
	case 'n':
		printf("delete cancelled");
		break;
	default:
			printf("invalid Input");	
				}
}
