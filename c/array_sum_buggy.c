#include <stdio.h>

int sum(int arr[], int n) {
    int total = 0;
    for(int i = 0; i <= n; i++) { // BUG: should be i < n
        total += arr[i];
    }
    return total;
}

int main() {
    int nums[] = {1, 2, 3};
    printf("Sum: %d\n", sum(nums, 3));
    return 0;
}
