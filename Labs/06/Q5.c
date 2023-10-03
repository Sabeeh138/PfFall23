#include <stdio.h>

int main() {
    int i,j;
    for(int i =0;i<=6;i++) {
        if (i%2==0) {
            printf("%d \t %d \t %d \t %d \n",i,i,i,i);
        } else {
            printf("\t %d \t %d \n",i,i);
        }
    }


    return 0;
}
