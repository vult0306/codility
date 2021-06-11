#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int solution (int a[])
{
        int* ptr = a;
        if (ptr == NULL)
                return 0;
        printf("not null");
        int max = a[0];
        int i = 0;
        while (ptr != NULL){
                printf("%d ", *ptr);
                if (*ptr > max)
                        max = *ptr;
                ptr++;
        }
        return max;
}
int main()
{
        int A[3];
        A[0] = 123;
        A[1] = 123;
        A[2] = NULL;
        printf("%d",solution(A));
        return 0;
}