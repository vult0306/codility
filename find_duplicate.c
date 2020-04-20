#include <stdio.h>
#include <stdlib.h>

int solution(int A[], int N) {
        int i = 1;
        int xor = A[0];
        int tem_xor = 0;
        for (i=1; i<N; i++)
                xor ^= A[i];
        for (i=1; i<=N; i++)
                xor ^= i;
        printf("%d\n",xor);

        /* Get the rightmost set bit in set_bit_no */
        tem_xor = xor;
        /* Now divide elements in two sets by comparing rightmost set 
        bit of xor with bit at same position in each element. */
        for(i = 0; i < N; i++) { 
                if(A[i] & tem_xor) 
                xor ^=  A[i]; /*XOR of first set in arr[] */
        }
        printf("%d\n",xor);
        for(i = 1; i <= N; i++) {
                if(i & tem_xor) 
                        xor ^= i;
        }

        return xor;
}

int main(void)
{
        int N = 15;
        int A[N];
        A[0] = 1;
        A[1] = 2;
        A[2] = 3;
        A[3] = 4;
        A[4] = 5;
        A[5] = 6;
        A[6] = 7;
        A[7] = 8;
        A[8] = 9;
        A[9] = 10;
        A[10] = 11;
        A[11] = 12;
        A[12] = 13;
        A[13] = 14;
        A[14] = 2;

        printf("%d\n",solution(A,N));
        return 0;
}