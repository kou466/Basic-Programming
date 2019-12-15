#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 > num2)
        return 1;

    if (num1 < num2)
        return -1;
    
    return 0;
}

int main() {
    int n, k1, k2, k3; //input
    int i, j; //for loop
    int sum = 0; //out come

    scanf("%d %d %d %d", &n, &k1, &k2, &k3);

    int* arr = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), compare);

    sum = arr[k1 - 1] + arr[k2 - 1] + arr[k3 - 1];

    printf("%d", sum);

    return 0;
}