/*Q:Best time to buy and sell stock II
Buy stocks at the cheapest price, and sell them at the highest price.
 array = [7, 1, 5, 3, 6, 4] ===> ex:buy at 1, sell at 7
*/

// command "make < file name>" to compile c file
// command "./ < file name>" to run .out file
// command "style50  < file name>.c" to make sure your coding style is perfect!
#include <stdio.h>
#include <cs50.h>

int nums[6] = {7, 1, 5, 3, 6, 4};
int numsize = 6;

int func(int *, int);
int func2(int *, int);
int main(void)
{   
    int ans;
    int ans2;
    ans = func(nums, numsize);
    ans2 = func2(nums, numsize);
    printf("method 1 answer is : %d \n", ans);
    printf("method 2 answer is : %d \n", ans2);
    printf("nums is :");
    for (int i = 0; i < numsize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return ans;   

}
int func(int *price, int pricenum)
{
    int total = 0;
    for (int i = 0; i < pricenum - 1; i++)
    {
        if (price[i + 1] > price [i])
        {
            total += price[i + 1] - price[i];
            // printf("total is : %d \n", total);
        }
    }
    
    return total;
}

int func2(int *price2, int pricenum2)
{
    if (pricenum2 <= 1)
    {
        return 0;
    }

    int profits[pricenum2 + 1]; // profits[i] = func2 (price2, i);
    int max = 0;
    profits[1] = 0;
    for (int k = 2; k <= pricenum2; k++)
    {
        int profit = 0;
        
    //situation 1: we "dont" sell stock at last day(last element)
    //original array = [7, 1, 5, 3, 6, 4] ==> func2(price2, pricenum2) ==> func2(price2, 6)
    //array = [7, 1, 5, 3, 6] ==> func2(price2, pricenum2-1) ==> func2(price2, 5)
    //array = [7, 1, 5, 3] ==> func2(price2, 4)
    //array = [7, 1, 5] ==> func2(price2, 3)
    //array = [7, 1] ==> func2(price2, 2)
    //array = [7] ==> func2(price2, 1)

        profit = profits[k - 1];
        if (profit  > max)
        {
            max = profit;
        }

        //situation 2: we sell stock at last day(last element)
        //original array = [7, 1, 5, 3, 6, 4] ==> func2(price2, 6) + (4-4)
        //array = [7, 1, 5, 3, 6]             ==> func2(price2, 5) + (4-6)
        //array = [7, 1, 5, 3]                ==> func2(price2, 4) + (4-3)
        //array = [7, 1, 5]                   ==> func2(price2, 3) + (4-5)
        //array = [7, 1]                      ==> func2(price2, 2) + (4-1)
        //array = [7]                         ==> func2(price2, 1) + (4-7)
        for (int i = 1; i <= k-1; i++)
        {
            profit = profits[i] + price2[k-1] - price2[i - 1];
            if (profit  > max)
            {
                max = profit;
            }
        }
        profits[k] = max;       
    }
    return max;       
}
