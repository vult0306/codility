#include <stdio.h>
#include <stdlib.h>

int solution(int n) {
    int d[30];
    int l = 0;
    int p;
    while (n > 0) {
        d[l] = n % 2;
        n /= 2;
        l++;
    }
    printf("%d\n",l);
    for (p = 1; p < 1+l; p++) {
        if (p<(l+1)/2){
                int ok = 1;
                int i;
                for (i = 0; i < l - p; i++) {
                if (d[i] != d[i + p]) {
                        ok = 0;
                        break;
                }
                }
                if (ok) {
                return p;
                }
        }
    }
    return -1;
}

int main()
{
        int n = 1000000000;
        // int n = 955;
        // int n = 1;
        printf("%d\n",solution(n));
        return 0;
}