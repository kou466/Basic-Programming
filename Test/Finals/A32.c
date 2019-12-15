#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
        return -1;

    if (num1 > num2)
        return 1;

    return 0;
}

int main() {
    int n, k; //all, except
    int i, j; //for loop
    int arr[100001]; // score input
    double sum = 0, count = 0, trim = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (i = k; i < n - k; i++) {
        count++;
        sum += arr[i];
        trim += arr[i];
    }

    trim += ((arr[k] * k) + (arr[n - k - 1] * k));

    printf("%.1lf %.1lf\n", sum / count, trim / n);

    return 0;
}