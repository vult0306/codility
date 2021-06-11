#include <stdio.h>
#include <stdlib.h>

unsigned int reverse(unsigned int num) 
{
        if (!num) return 0;
        unsigned int count = 0;
        unsigned int reverseNum = 0; 

        while(num) 
        { 
                reverseNum <<= 1;
                reverseNum |= num & 1;
                num >>= 1; 
                count++;
        } 
        reverseNum <<= 32-count; 
        return reverseNum;
} 
  
int main() 
{ 
        unsigned int x = 9; 
        printf("%x\n", reverse(x)); 
        return 0;
} 