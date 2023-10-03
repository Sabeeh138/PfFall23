#include <stdio.h>

int main() {
    int n1, n2, LCM = 1, HCF = 1, f = 2;

    printf("Enter num1: ");
    scanf("%d", &n1);

    printf("Enter num2: ");
    scanf("%d", &n2);

    while (f <= n1 && f <= n2) {
        if (n1 % f == 0 && n2 % f == 0) {
            HCF = HCF * f;
            n1 = n1 / f;
            n2 = n2 / f;
        } else {
            f++;
        }
    }
    LCM = (n1 * n2 * HCF);

    printf("HCF: %d\n", HCF);
    printf("LCM: %d\n", LCM);

    return 0;
