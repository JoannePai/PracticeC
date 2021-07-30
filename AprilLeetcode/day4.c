/*Q:Move zeros
Allocate zeros elements into array's right side, and maintain the related order of, non-zero elements.
 array = [0, 1, 0, 3, 12] ===> [1,3,12,0,0]
*/

// command "make < file name>" to compile c file
// command "./ < file name>" to run .out file
// command "style50  < file name>.c" to make sure your coding style is perfect!
#include <stdio.h>
#include <cs50.h>

int nums[5] = {0, 1, 0, 3, 12,};
int numsize = 5;

int func(int *, int);
int main(void)
{   
    int ans;
    ans = func(nums, numsize);
    printf("answer is : %d \n", ans);
    for (int i = 0; i < numsize; i++)
    {
        printf("num is : %d \n", nums[i]);
    }
    return ans;   

}
int func(int *a, int b)
{

    while (true)
    {
        int cnt0 = 0;
        for (int i = 0; i < numsize - 1; i++)
        {
            if ((a[i] == 0) && (a[i + 1] != 0))
            {
                a[i] = a[i + 1];
                a[i + 1] = 0;
                cnt0 ++;
            }
        }
        if (cnt0 == 0)
        {
            break;
        }
    }
    return 0;
}
