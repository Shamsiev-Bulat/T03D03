#include <stdio.h>

float func(float x, float y);

int main() {
    float x, y;
    if (scanf("%f", &x) || scanf("%f", &y)) {
        if (func(x, y) < 25)
            printf("GOTCHA");
        else
            printf("MISS");
    } else
        printf("n/a");
}

float func(float x, float y) { return x * x + y * y; }