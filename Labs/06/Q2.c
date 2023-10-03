#include <stdio.h>

int main() {
   int i, n;
   int n1 = 0, n2 = 1;
   int nextn = n1 + n2;
   int sum = 0;
   
   while (nextn <= 10000) {
       if (nextn % 3 == 0 || nextn % 5 == 0 || nextn % 7 == 0) {
           sum += nextn;
       }
       
       n1 = n2;
       n2 = nextn;
       nextn = n1 + n2;
   }
   
   printf("Sum of Fibonacci numbers divisible by 3, 5, or 7 up to 10,000 is %d\n", sum);
   
   return 0;
}
