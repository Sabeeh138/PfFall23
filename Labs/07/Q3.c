/*
* Programmer : Muhammad Sabeeh
* Desc : dividing and adding number
/*


#include <stdio.h>

int main() {
    int number, originalNumber, remainder, sum = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 

    while (number != 0) {
        remainder = number % 10;  
        sum += remainder;        
        number /= 10;            
    }

    printf("The sum of the digits of %d is %d\n", originalNumber, sum);

    return 0;
}
