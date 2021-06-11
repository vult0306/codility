#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int minString(char* A[], int n) 
{
        int i = 0;
        int min = strlen(A[0]);
	for (i=1; i<n; i++) 
		if (strlen(A[i]) < min) 
			min = strlen(A[i]); 
	return(min); 
} 

bool checkPattern(char* A[], int n, char* str, int start, int end) 
{ 
        int i = 0;
        int j = 0;
	for (i=0; i<n; i++) 
		for (j=start; j<=end; j++) 
			if (A[i][j] != str[j]) 
				return (false); 
	return (true);
}

char* commonPrefix(char* A[], int n) 
{ 
	int index = minString(A, n); 
	char* prefix =  (char*)malloc(index);
	int low = 0;
        int high = index; 
        int len;
        char* tem_prefix = prefix;
	while (low < high) 
	{
		int mid = low + (high - low) / 2; 
                printf("mid %d",mid);
		if (checkPattern (A, n, A[0], low, mid)) {
                        strncpy(prefix,A[0]+low,mid-low+1);
                        prefix += mid-low+1;
			low = mid+1; //check right part
		} else
			high = mid-1; //check right part
	} 

	return (tem_prefix); 
} 

// Driver program to test above function 
int main() 
{ 
	char* A[] = {"geeksforgeeks", "geeks", 
					"geek", "geedzer"}; 
	int N = sizeof (A) / sizeof (A[0]); 
        char *ans = (char*)malloc(100);
	ans = commonPrefix(A, N); 
        printf("%s\n",ans);
        printf("%d\n",minString(A,N));
	return 0; 
} 
