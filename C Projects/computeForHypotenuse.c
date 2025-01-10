#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("Enter A: ");
    scanf("%lf", &A);
    
    printf("Enter B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C is equal to %.2lf\n", C);
    
    return 0;
}