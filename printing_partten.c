// Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

//                             4 4 4 4 4 4 4  
//                             4 3 3 3 3 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 2 1 2 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 3 3 3 3 4   
//                             4 4 4 4 4 4 4   
// Input Format

// The input will contain a single integer .

// Constraints


// Sample Input 0

// 2
// Sample Output 0

// 2 2 2
// 2 1 2
// 2 2 2
// Sample Input 1

// 5
// Sample Output 1
// 0 1 2 3 4 5 6 7 8

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5
// Sample Input 2

// 7
// Sample Output 2

// 7 7 7 7 7 7 7 7 7 7 7 7 7
// 7 6 6 6 6 6 6 6 6 6 6 6 7
// 7 6 5 5 5 5 5 5 5 5 5 6 7
// 7 6 5 4 4 4 4 4 4 4 5 6 7
// 7 6 5 4 3 3 3 3 3 4 5 6 7
// 7 6 5 4 3 2 2 2 3 4 5 6 7
// 7 6 5 4 3 2 1 2 3 4 5 6 7
// 7 6 5 4 3 2 2 2 3 4 5 6 7
// 7 6 5 4 3 3 3 3 3 4 5 6 7
// 7 6 5 4 4 4 4 4 4 4 5 6 7
// 7 6 5 5 5 5 5 5 5 5 5 6 7
// 7 6 6 6 6 6 6 6 6 6 6 6 7
// 7 7 7 7 7 7 7 7 7 7 7 7 7


// 7
// 7 6
// 7 6 5
// 7 6 5 4
// 7 6 5 4 3
// 7 6 5 4 3 2
// 7 6 5 4 3 2 1

//   7 7 7 7 7 7
//     6 6 6 6 6
//       5 5 5 5
//         4 4 4
//           3 3
//             2

// 7 7 7 7 7 7
// 6 6 6 6 6
// 5 5 5 5
// 4 4 4
// 3 3
// 2

//         7
//       6 7
//     5 6 7
//   4 5 6 7
// 3 4 5 6 7

// 7 6 5 4 3
// 7 6 5 4
// 7 6 5
// 7 6
// 7

//           2
//         3 3
//       4 4 4
//     5 5 5 5
//   6 6 6 6 6
// 7 7 7 7 7 7

// 2
// 3 3
// 4 4 4
// 5 5 5 5
// 6 6 6 6 6
// 7 7 7 7 7 7

//   2 3 4 5 6 7
//     3 3 3 4 5 6 7
// 4 4 4 4 5 6 7
// 5 5 5 5 5 6 7
// 6 6 6 6 6 6 7
// 7 7 7 7 7 7 7
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void print_pattern(int n)
{
    int k = n;
    int row = n;
    int space = 0;
    for (int i=row; i>0; i--)
    {
        for (int j=n; j>(n-space); j--)
            printf("%d ",j);
        for (int j=2*n-1-space; j>space; j--)
            printf("%d ",n-space);
        for (int j=n-space+1; j<=n; j++)
            printf("%d ",j);
        space++;
        printf("\n");
    }
    space--;
    for (int i=row; i>1; i--)
    {
        space--;        
        for (int j=n; j>=n-space+1; j--)
            printf("%d ",j);
        for (int j=2*n-1-space; j>space; j--)
            printf("%d ",n-space);
        for (int j=(n-space)+1; j<=n; j++)
            printf("%d ",j);
        printf("\n");
    }
}

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    print_pattern(n);
    return 0;
}