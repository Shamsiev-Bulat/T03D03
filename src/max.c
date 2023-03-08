#include <stdio.h>
double biggest(double x, double y)  
{  
    return( x>y?x:y );  
}  

int main(){
    double x, y;
    scanf("%lf %lf",&x, &y);
    printf("biggest is %lf, lowest is %lf\n", y, x);
    return 0;
}
