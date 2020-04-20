#include <stdio.h>
#include <stdlib.h>

#define LIMIT 1000000000
int solution(int A[], int N) {
        // write your code in C99 (gcc 6.2.0)
        if (N<3)
                return -1;
        int velocity = A[1] - A[0];
        int count = 2;
        int i = 1;
        int j = 0;
        int max = 0;
        while(i<N) {
                if (i<N-1 && velocity == A[i+1] - A[i]) {
                        count += 1;
                } else {
                        if (count > 3) {
                                for (j=3; j<=count; j++) {
                                        // sub-period
                                        max += count-j+1;

                                        //if exceeds limitation
                                        if (max > LIMIT)
                                                return -1;
                                }
                        } else if (count == 3) {
                                max += 1;
                        }
                        //if exceeds limitation
                        if (max > LIMIT)
                                return -1;
                        velocity = A[i+1] - A[i];
                        count = 2;
                }
                i++;
        }
        return max;
}
int main()
{
        int N = 10000;
        int A[N];
        // A[0] = 1;
        // A[1] = 3;
        // A[2] = 5;
        // A[3] = 7;
        // A[4] = 9;
        // A[5] = 7;
        // A[6] = 7;
        // A[7] = 7;
        // A[8] = 7;

        // A[0] = -1;
        // A[1] = 1;
        // A[2] = 3;
        // A[3] = 3;
        // A[4] = 3;
        // A[5] = 2;
        // A[6] = 3;
        // A[7] = 2;
        // A[8] = 1;
        // A[9] = 0;
        // A[10] = -1;
        // A[11] = -2;

        for (int i=0; i<N; i++)
                A[i] = 2;
        printf("%d \n",solution(A,N));
        return 0;
}