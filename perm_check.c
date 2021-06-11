// A non-empty array A consisting of N integers is given.

// A permutation is a sequence containing each element from 1 to N once, and only once.

// For example, array A such that:

//     A[0] = 4
//     A[1] = 1
//     A[2] = 3
//     A[3] = 2
// is a permutation, but array A such that:

//     A[0] = 4
//     A[1] = 1
//     A[2] = 3
// is not a permutation, because value 2 is missing.

// The goal is to check whether array A is a permutation.

// Write a function:

// int solution(int A[], int N);

// that, given an array A, returns 1 if array A is a permutation and 0 if it is not.

// For example, given array A such that:

//     A[0] = 4
//     A[1] = 1
//     A[2] = 3
//     A[3] = 2
// the function should return 1.

// Given array A such that:

//     A[0] = 4
//     A[1] = 1
//     A[2] = 3
// the function should return 0.

// Write an efficient algorithm for the following assumptions:

// N is an integer within the range [1..100,000];
// each element of array A is an integer within the range [1..1,000,000,000]..

#include <stdio.h>
#include <stdlib.h>

int solution(int A[], int N)
{
        int i = 0;
        int sum1 = 0;
        int sum = 0;
        //check if out of range
        for (i=0; i<N; i++)
                if (A[i] > N)
                        return 0;
        //check if sum not correct
        for (i=0; i<N; i++)
                sum1 += A[i];
        sum = (N+1)*N/2;
        if (sum != sum1) return 0;

        //check if duplicate
        int xor1 = A[0];
        int xor2 = 1;
        for (i=1; i<N; i++)
                xor1 ^= A[i];
        for (i=1; i<=N; i++)
                xor1 ^= i;
        printf("%d\n",xor1);
        if (xor1 != 0)
                return 0;
        return 1;
}
int main(void)
{
        int N = 4;
        int A[N];
        A[0] = 4;
        A[1] = 1;
        A[2] = 3;
        A[3] = 2;
        printf("%d\n",solution(A,N));
        return 0;
}