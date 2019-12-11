#include<stdio.h>
#include<math.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D fun[20000];
    int n, i, j, MD = 0, D = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &fun[i].x, &fun[i].y);
    }



    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            D = sqrt(pow(fun[i].x - fun[j].x, 2)) + sqrt(pow(fun[i].y - fun[j].y, 2));
            if (D > MD) {
                MD = D;
            }
        }
    }
    printf("%d", MD);

    return 0;
}