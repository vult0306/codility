// Write a function

// int solution(int A[], int N);

// that, given an array A consisting of N integers, returns the number of distinct values in array A.

// For example, given array A consisting of six elements such that:

//  A[0] = 2    A[1] = 1    A[2] = 1
//  A[3] = 2    A[4] = 3    A[5] = 1
// the function should return 3, because there are 3 distinct values appearing in array A, namely 1, 2 and 3.

// Write an efficient algorithm for the following assumptions:

// N is an integer within the range [0..100,000];
// each element of array A is an integer within the range [−1,000,000..1,000,000].

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int solution(int A[], int N)
{
        //puts negative to hashing
        int* hashing1 = (int*)malloc(N*sizeof(int));
        int* hashing2 = (int*)malloc(N*sizeof(int));
        int hashIndex=0;
        int i = 0;
        int count = 0;
        memset(hashing1, -1, N*sizeof(int));
        memset(hashing2, -1, N*sizeof(int));
        //puts positive to hashing
        for (i=0; i<N; i++) {
                if(A[i] >= 0) {
                        hashIndex = A[i]%N;
                        while (true) {
                                if (hashing1[hashIndex] == -1){
                                        hashing1[hashIndex] = A[i];
                                        break;
                                } else if (hashing1[hashIndex] == A[i])
                                        break;
                                hashIndex += 1;
                                hashIndex %= N;
                        }
                }
        }
        for (i=0; i<N; i++)
                if(hashing1[i] != -1)
                        printf("%d ",hashing1[i]);
                        printf("\n");
        //puts negative to hashing
        for (i=0; i<N; i++) {
                if(A[i] < 0) {
                        hashIndex = abs(A[i])%N;
                        while (true) {
                                if (hashing2[hashIndex] == -1) {
                                        hashing2[hashIndex] = abs(A[i]);
                                        break;
                                } else if (hashing2[hashIndex] == abs(A[i]))
                                        break;
                                hashIndex += 1;
                                hashIndex %= N;
                        }
                }
        }
        for (i=0; i<N; i++)
                if(hashing2[i] != -1)
                        printf("%d ",hashing2[i]);
                        printf("\n");
        for (i=0; i<N; i++)
                if(hashing1[i] != -1)
                        count += 1;
        for (i=0; i<N; i++)
                if(hashing2[i] != -1)
                        count += 1;
        return count;
}

int main()
{
        int N = 10;
        int A[N];
        A[0] = 2;
        A[1] = 1;
        A[2] = 1;
        A[3] = 2;
        A[4] = 3;
        A[5] = 1;
        A[6] = -3;
        A[7] = -1;
        A[8] = -2;
        A[9] = -3;
        printf("%d\n",solution(A,N));
        return 0;
}