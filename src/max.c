#include <stdio.h>
double biggest(double x, double y) { return (x > y ? x : y); }

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (x == (int)x && y == (int)y) {
        printf("biggest is %.0lf, lowest is %lf", x, y);
    } else
        printf("n/a");
    return 0;
}