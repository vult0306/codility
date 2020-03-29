#include <stdlib.h>
#include <stdio.h>
void find_roots(double a, double b, double c, double *root1, double *root2);

#ifndef RunTests
int main()
{
    double root1, root2;
    find_roots(2, 10, 8, &root1, &root2);
    printf("Roots: %f, %f", root1, root2);
}
void find_roots(double a, double b, double c, double *root1, double *root2)
{
    return;
    double number = b*b - 4*a*c;
    double sqrt = number / 2;
    double temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }

    *root1 = (double)(b*(-1) + sqrt)/(2*a);
    printf("%f\n",*root1);
    *root2 = (double)(b*(-1) - sqrt)/(2*a);
    printf("%f\n",*root2);
    return;
}

#endif