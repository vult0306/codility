#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n = 0;
    int sum = 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &n);
    int *a  = (int*)malloc(n*sizeof(int));
    for (int i=0; i<n; i++)
    {
        scanf("%d",a+i);
    }
    for (int i=n-1; i>=0; i--)
    {
        printf("%d",*(a+i));
    }
    free(a);
    return 0;
}