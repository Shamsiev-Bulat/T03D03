#include <math.h>
#include <stdio.h>
int main() {
    double x, y;
    scanf("%lf", &x);
    if (x == (int)x) {
        printf("%.1lf\n", y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1 / 3) - 1e3) * x + 3) / (x * x / 2) -
                              x * pow((10 + x), (2 / x)) - 1.01);
        if (x == 0) printf("n/a");
    } else
        printf("n/a");
    return 0;
}
