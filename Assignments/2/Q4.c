#include<stdio.h>
#include<math.h>	
#include <stdlib.h>
int main(){
	int n, count=1;
	printf("Enter N: ");
	scanf("%d", &n);
	int arr[n][n];
	int t=0, b = n-1, l=0, r = n-1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i][j]=0;
		}
	}
	while(t<=b && l<=r){
	for(int j=l; j<=r; j++){
		arr[t][j] = count++;
	}
	t++;
	for(int j=t; j<=b; j++){
		arr[j][r] = count++;
	}
	r--;
	for(int j=r; j>=l; j--){
		arr[b][j]=count++;
	}
	b--;
	for(int j=b; j>=t; j--){
		arr[j][l]=count++;
	}
	l++;
}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf(" %2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	t=0, b = n-1, l=0, r = n-1;
	count=n*n;
	while(t<=b && l<=r){
	for(int j=r; j>=l; j--){
		arr[t][j] = count--;
	}
	t++;
	for(int j=t; j<=b; j++){
		arr[j][l] = count--;
	}
	l++;
	for(int j=l; j<=r; j++){
		arr[b][j]=count--;
	}
	b--;
	for(int j=b; j>=t; j--){
		arr[j][r]=count--;
	}
	r--;
}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf(" %2d ", arr[i][j]);
		}
		printf("\n");
	}
}
