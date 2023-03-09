#include <stdio.h>
int max(int x, int y);

int main() {
    int x, y;
    if ((scanf("%d", &x) && scanf("%d", &y))) {
        printf("%d", max(x, y));
    } else
        printf("n/a");
}

int max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}