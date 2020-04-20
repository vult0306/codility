// An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.

// Your goal is to find that missing element.

// Write a function:

// int solution(int A[], int N);

// that, given an array A, returns the value of the missing element.

// For example, given array A such that:

//   A[0] = 2
//   A[1] = 3
//   A[2] = 1
//   A[3] = 5
// the function should return 4, as it is the missing element.

// Write an efficient algorithm for the following assumptions:

// N is an integer within the range [0..100,000];
// the elements of A are all distinct;
// each element of array A is an integer within the range [1..(N + 1)].

#include <stdio.h>
#include <stdlib.h>
// 1 2 3 4 5 7 23
// 1 2 3 4 5 6 21

// 1 3 4 5 6 7 26
// 1 2 3 4 5 6 21


int solution(int A[], int N)
{
        int sum=0;
        int sum2=0;
        for (i=1; i<=N; i++)
                sum += A[i-1]-i;
        // sum2 = (N+1)*N/2;

        return (N+1-sum);
}

int main(void)
{

}