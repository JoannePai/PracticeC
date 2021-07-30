/*Q:Maximum Subarray
  Sumarize contiguous component in the array[-2, 1, -3, 4, -1, 2, 1, -5, -4], and find the max sum.
*/

// command "make < file name>" to compile c file
// command "./ < file name>" to run .out file
// command "style50  < file name>.c" to make sure your coding style is perfect!
#include <stdio.h>
#include <cs50.h>

int nums[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int numsize = 9;

int func(int*, int);
int main(void)
{   
    int ans;
    ans = func(nums, numsize);
    printf("answer is : %d \n", ans);
    return ans;    
}
int func(int* a, int b)
{
    int max = nums[0];
    for (int i = 0; i < numsize; i++)
    {
        int sum =0;
        for (int j = i; j < numsize; j++)
        {
            sum += nums[j];

            printf("i = %d, j = %d, max = %d\n", nums[i], nums[j], max);
            printf("i = %d, j = %d, sum = %d\n", nums[i], nums[j], sum);
            if (sum > max)
            {
                max = sum;
                
            }
        }
    }
    return max;

}
