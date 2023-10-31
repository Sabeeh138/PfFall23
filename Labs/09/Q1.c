/*
* Programmer : Muhammad Sabeeh
* Desc : swapping values
/*
  
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
     printf("j=%d , k=%d", a, b);
}

int main() {
    int j = 2;
    int k = 5;

    printf("j= %d, k = %d\n", j, k);

    swap(j,k);
    return 0;
}
//we were first assigning the values of a and b, but temp variable was used at the wrong place, after correcting that, we remove the printf statement as it prints the same value again.
