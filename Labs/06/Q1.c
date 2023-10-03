/**.
* Programmer : Muhammad Sabeeh
* Desc : practicing loops


#include <stdio.h>

int main() {
    int num, sum = 0, count = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (count < num) {
        if (num % count == 0) {
            sum += count;
        }
        count++;
    }

    if (sum == num) {
        printf("Number is a perfect number\n");
    } else {
        printf("Not a perfect number\n");
    }

    return 0;
}
