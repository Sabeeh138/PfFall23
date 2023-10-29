/*
* Programmer : Muhammad Sabeeh
* Desc : checking sum is equal to t or not and if yes printingthe arr value
/*
  #include <stdio.h>
//function here is to check whether it is equal to t or not by adding the value stored in the arrays w each other
void findPairsWithSum(int arr[], int N, int t) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == t) {
                printf("(%d, %d) ", arr[i], arr[j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int N, t;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum (t): ");
    scanf("%d", &t);

    printf("Pairs with a sum of %d are: ", t);
    findPairsWithSum(arr, N, t);

    return 0;
}
