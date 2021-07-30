//Q: Find the single number in the array with function  "int func(int *a, int b)" ,and return the single number.

// command "make < file name>" to compile c file
// command "./ < file name>" to run .out file
// command "style50  < file name>.c" to make sure your coding style is perfect!
#include <stdio.h>

int nums[5] = {2, 2, 1, 1, 3};
int numsize = 5;

int func(int *, int);

int main(void)
{   
    int ans;
    ans = func(nums, numsize);
    printf("answer is : %d \n", ans);
    return ans;    
}
int func(int *a, int b)
{
    int n = nums[0];
    for (int i = 1; i < numsize; i++)
    {
        n ^= nums[i];
    }
        
    return n;
}
