#include <stdio.h>
#include <stdlib.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)


    int i = 0;
    for (i=0; i<N; i++) {
        if (A[i] >= 0)
            break;
    }

    // check if all are negative
    if (i == N)
        return -1;

    int max_sum = 0;
    int sum = 0;
    while (i<N) {
        if (A[i] >= 0) {
            sum += A[i];
        } else {
            if (sum > max_sum)
                max_sum = sum;
            sum = 0;
        }
        i++;
    }
    if (sum > max_sum)
        return sum;
    else
        return max_sum;
}

int main()
{
    // int N = 6;
    // int A[N];
    // A[0] =  1;
    // A[1] =  2;
    // A[2] = -3;
    // A[3] =  4;
    // A[4] =  5;
    // A[5] = -6;
    // int N = 6;
    // int A[N];
    // A[0] = -8;
    // A[1] =  3;
    // A[2] =  0;
    // A[3] =  5;
    // A[4] = -3;
    // A[5] = 12;

    int N = 12;
    int A[N];
    A[0] = -1;
    A[1] =  2;
    A[2] =  1;
    A[3] =  2;
    A[4] =  0;
    A[5] =  2;
    A[6] =  1;
    A[7] = -3;
    A[8] =  4;
    A[9] =  3;
    A[10] = 0;
    A[11] =-1;
    printf("%d \n",solution(A,N));
    return 0;
}