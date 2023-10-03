/**.
* Programmer : Muhammad Sabeeh
* Desc : practicing loops




#include <stdio.h>

int main() {
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    if (a>b) {
    while (a==b) {
        a++;
    }
    } else {
        printf("take correct input\n");
    }
    if (a<=9) {
        switch (a) {
            case 1 :
            printf("one");
            break;
            case 2:
            printf("two");
            break;
            case 3:
            printf("three");
            break;
            case 4:
            printf("four");
            break;
            case 5:
            printf("five");
            break;
            case 6:
            printf("six");
            break;
            case 7:
            printf("seven");
            break;
            case 8:
            printf("eight");
            break;
            case 9:
            printf("nine");
            break;

        }
    } else {
        if(a%2==0) {
            printf("num is even");
        } else {
            printf("num is odd");
        }
    }

    return 0;
}
