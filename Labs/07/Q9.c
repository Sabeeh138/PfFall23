#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of branches: ");
    scanf("%d", &n);
    printf("Enter number of mobile phones per branch: ");
    scanf("%d", &m);

    int arr[1000];

    // Input branch details
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter price of mobile phone #%d-%d: ", i, j);
            scanf("%d", &arr[i * m + j]);
        }
    }

    int total_bill = 0, branch_bill = 0, max_bill = 1 << 31, max_branch;

    printf("\n");
    for (int i = 0; i < n; i++) {
        branch_bill = 0;

        // Calculate total bill for each branch
        for (int j = 0; j < m; j++) {
            branch_bill += arr[i * m + j];
        }

        printf("Bill for branch #%d: %d\n", i, branch_bill);

        // Check if the bill is larger than the current maximum
        if (branch_bill > max_bill) {
            max_bill = branch_bill;
            max_branch = i;
        }

        total_bill += branch_bill;
    }

    printf("Total bill: %d\n", total_bill);
    printf("\nBranch #%d with the highest bill: %d\n", max_branch, max_bill);

    for (int i = 0; i < m; i++) {
        printf("Mobile phone #%d-%d price: %d\n", max_branch, i, arr[max_branch * m + i]);
    }

    return 0;
}
