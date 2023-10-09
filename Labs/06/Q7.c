#include <stdio.h>
int main(){
	int n;
	printf("enter the number of elements");
	scanf("%d", &n);
	int arr[n];
	int sum=0;
	printf("enter the elements of array");
	int i;
	for(i = 0; i < n;i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("the sum of array is %d ",sum);
	return 0;
}
