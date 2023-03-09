#include <stdio.h>
int main() {
    double t, e;
    char test;
    scanf("%lf %lf%c", &t, &e, &test);
    if (t == (int)t && e == (int)e && test == '\n') {
        printf("%.0lf %.0lf %.0lf ", t + e, t - e, t * e);
        if (e == 0)
            printf("n/a");
        else
            printf("%0d", (int)t / (int)e);
    } else
        printf("n/a");
    return 0;
}