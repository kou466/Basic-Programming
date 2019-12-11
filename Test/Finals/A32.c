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

int main()
{
    int n, k, i, j, arr[100001];
    double sum = 0, count = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (i = k; i < n - k; i++) {
        count++;
        sum += arr[i];
    }
    printf("%.1lf\n", sum / count);

    return 0;
}

