#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

float average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = add(sum, arr[i]);
    }
    return (float)sum / n;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        maxValue = max(maxValue, arr[i]);
    }

    float avg = average(arr, n);

    printf("The largest number is: %d\n", maxValue);
    printf("The average is: %.2f\n", avg);

    return 0;
