#include <stdio.h>
int main(){
    double x, y;
    scanf("%lf %lf",&x, &y);
    if (x == (int)x && y == (int)y) {
        printf("%.0lf %.0lf %.0lf", x+y, x-y, x*y);
        if (y == 0)
            printf("n/a\n");
        else 
            printf("%d\n", (int)x / (int)y);
    } else
        printf("n/a\n");
    return 0;
    
}