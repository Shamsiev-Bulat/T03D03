#include <stdio.h>
int main() {
    double t, e;
    scanf("%lf %lf", &t, &e);
    if (t == (int)t && e == (int)e) {
        printf("%.0lf %.0lf %.0lf", t + e, t - e, t * e);
        if (e == 0)
            printf("n/a");
        else
            printf("%0lf", (int)t / (int)e);
    } else
        printf("n/a");
    return 0;
}