/*
* Programmer : Muhammad Sabeeh
* Desc : printing max, min value
/*

#include <stdio.h>
#include <string.h>

void processArray(int size, int arr[size]){
int max=arr[0];
int sum=0;
for(int i=0; i<size; i++){
if(arr[i]>max){
max=arr[i];
}
}
printf("Max value is %d\n", max);
int min=max;
for(int i=0; i<size; i++){
if(arr[i]<min){
min=arr[i];
}
sum+=arr[i];
}
printf("Min value is %d\n", min);
printf("Sum is %d\n", sum);
}
int main() {
    int arr[5] = {4, 8, 1, 15, 6};
    processArray(5,arr);
    return 0;
}

