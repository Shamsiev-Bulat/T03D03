/*#include <stdio.h>
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
*/
#include <stdio.h>
double biggest(double x, double y)  
{  
    return( x>y?x:y );  
}  

int main(){
    double x, y;
    scanf("%lf %lf",&x, &y);
    if (x == (int)x && y == (int)y) {
    printf("biggest is %lf, lowest is %lf\n", x, y);}
    else printf("n/a\n");
    return 0;
}