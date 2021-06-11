#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int l=0;
    int r=num-1;
    int temp;
    while(l<r)
    {
        temp = *(arr + l);
        *(arr + l) = *(arr + r);
        *(arr + r) = temp;
        l++;
        r--;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}