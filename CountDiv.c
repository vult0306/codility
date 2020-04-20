// Write a function:

// int solution(int A, int B, int K);

// that, given three integers A, B and K, returns the number of integers within the range [A..B] that are divisible by K, i.e.:

// { i : A ≤ i ≤ B, i mod K = 0 }

// For example, for A = 6, B = 11 and K = 2, your function should return 3, because there are three numbers divisible by 2 within the range [6..11], namely 6, 8 and 10.

// Write an efficient algorithm for the following assumptions:

// A and B are integers within the range [0..2,000,000,000];
// K is an integer within the range [1..2,000,000,000];
// A ≤ B.
#include <stdio.h>
#include <stdlib.h>

int solution(int A, int B, int K)
{
        int count = 0;
        if (A>B) return 0;
        else if (A==B) {
                if (A%K==0) {
                printf("%d\n",A%K);
                return 1;
                } else return 0;
        }
        if (A<=K && K<=B)
                count = (B-K)/K + 1;
        else if (K<A) {
                count = (B-A)/K + 1;
        } else return 0;
        return count;
}

int main()
{
        printf("%d\n",solution(10,10,7));
        return 0;
}