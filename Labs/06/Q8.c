#include <stdio.h>
int main(){
	int n;
	printf("enter the number of elements");
	scanf("%d", &n);
	int arr[n];
	printf("enter the elements of array");
	int i;
	for(i = 0; i < n;i++){
		scanf("%d", &arr[i]);
		
	}
	
	printf("elements in reverse order are :\n");
	for(i = n-1;i >= 0;i--){
		printf("%d", arr[i]);
	}
		printf("\n");
		
		return 0;
	
}
