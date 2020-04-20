// A non-empty array A consisting of N integers is given. The product of triplet (P, Q, R) equates to A[P] * A[Q] * A[R] (0 ≤ P < Q < R < N).

// For example, array A such that:

//   A[0] = -3
//   A[1] = 1
//   A[2] = 2
//   A[3] = -2
//   A[4] = 5
//   A[5] = 6
// contains the following example triplets:

// (0, 1, 2), product is −3 * 1 * 2 = −6
// (1, 2, 4), product is 1 * 2 * 5 = 10
// (2, 4, 5), product is 2 * 5 * 6 = 60
// Your goal is to find the maximal product of any triplet.

// Write a function:

// int solution(int A[], int N);

// that, given a non-empty array A, returns the value of the maximal product of any triplet.

// For example, given array A such that:

//   A[0] = -3
//   A[1] = 1
//   A[2] = 2
//   A[3] = -2
//   A[4] = 5
//   A[5] = 6
// the function should return 60, as the product of triplet (2, 4, 5) is maximal.

// Write an efficient algorithm for the following assumptions:

// N is an integer within the range [3..100,000];
// each element of array A is an integer within the range [−1,000..1,000].

#include <stdio.h>
#include <stdlib.h>

long solution(int A[], int N)
{
        int i,idx1, idx2,idx3;
        int temp1 = 0;
        int temp2 = 0;
        int temp3 = 0;
        long max_pos = 1;
        long max_neg = 1;

        if (N<3) return 0;
        if (N==3) return (A[0]*A[1]*A[2]);
        //pos*pos*pos
        for (i=0; i<N; i++)
                if (A[i] > temp1){
                        temp1 = A[i];
                        idx1 = i;
                }

        for (i=0; i<N; i++)
                if (A[i] > temp2 && idx1!=i){
                        temp2 = A[i];
                        idx2 = i;
                }

        for (i=0; i<N; i++)
                if (A[i] > temp3 && idx1!=i && idx2!=i){
                        temp3 = A[i];
                        idx3 = i;
                }
        max_pos *= temp1*temp2*temp3;
        //neg*neg*pos
        temp2 = 0;
        temp3 = 0;
        for (i=0; i<N; i++)
                if (A[i] < temp2){
                        temp2 = A[i];
                        idx2 = i;
                }
        for (i=0; i<N; i++)
                if (A[i] < temp3 && idx2!=i){
                        temp3 = A[i];
                }

        max_neg *= temp1*temp2*temp3;

        if (max_pos > max_neg)
                return max_pos;
        else
                return max_neg;
}

int main()
{
        int A[] = {-3,2,-2,5,6};
        int N = sizeof A / sizeof(A[0]);
        printf("%d\n",solution(A,N));
        return 0;
}