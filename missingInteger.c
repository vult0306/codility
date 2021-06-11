// This is a demo task.

// Write a function:

// int solution(int A[], int N);

// that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

// For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

// Given A = [1, 2, 3], the function should return 4.

// Given A = [−1, −3], the function should return 1.

// Write an efficient algorithm for the following assumptions:

// N is an integer within the range [1..100,000];
// each element of array A is an integer within the range [−1,000,000..1,000,000].
/* C program to find the smallest positive missing number */
#include <stdio.h> 
#include <stdlib.h> 
  
/* Utility to swap to integers */
void swap(int* a, int* b) 
{ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
/* Utility function that puts all 
non-positive (0 and negative) numbers on left  
side of arr[] and return count of such numbers */
int segregate(int arr[], int size) 
{ 
    int j = 0, i; 
    for (i = 0; i < size; i++) { 
        if (arr[i] <= 0) { 
            swap(&arr[i], &arr[j]); 
            j++; // increment count of non-positive integers 
        } 
    } 
  
    return j; 
} 
  
/* Find the smallest positive missing number  
in an array that contains all positive integers */
int findMissingPositive(int arr[], int size) 
{ 
    int i; 
  
    // Mark arr[i] as visited by making arr[arr[i] - 1] negative. 
    // Note that 1 is subtracted because index start 
    // from 0 and positive numbers start from 1 
    for (i = 0; i < size; i++) { 
        if (abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
    } 
  
    // Return the first index value at which is positive 
    for (i = 0; i < size; i++) 
        if (arr[i] > 0) 
            // 1 is added because indexes start from 0 
            return i + 1; 
  
    return size + 1; 
} 
  
/* Find the smallest positive missing  
number in an array that contains 
both positive and negative integers */
int findMissing(int arr[], int size) 
{ 
    // First separate positive and negative numbers 
    int shift = segregate(arr, size); 
  
    // Shift the array and call findMissingPositive for 
    // positive part 
    return findMissingPositive(arr + shift, size - shift); 
} 
  
int main() 
{ 
    int arr[] = { 0, 10, 2, -10, -20 }; 
    int arr_size = sizeof(arr) / sizeof(arr[0]); 
    int missing = findMissing(arr, arr_size); 
    printf("The smallest positive missing number is %d ", missing); 
    getchar(); 
    return 0; 
} 
