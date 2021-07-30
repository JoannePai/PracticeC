#include <stdio.h>
#include <cs50.h>
#include <math.h>
int singleNumber(int* nums, int numsSize)
{
   // int a=0;
    for (int i = 0 ; i < numsSize ; i++)
    {
        int count = 0;
            for(int j=0 ;j<numsSize ;j++)
            {
                if (nums[i]==nums[j])
                {
                    count++;
                }

            }
            if (count ==1)
            {
                return nums[i];
            }              
    }
    return -1;
}
int singleNumber2(int* nums, int numsSize)
{
 int n= nums[0];
 for(int i = 1; i < numsSize; i++)
 {
     n^=nums[i];//XOR (A^A=0,A^B=B^A, A^0=A)
 }
 return n;
}
int main( void)
{
    int array[4]={5,1,5};
    printf("single value=%i\n",singleNumber(array, 4));
    printf("single value=%i\n",singleNumber2(array, 4));
    printf("size of array=%lu\n",sizeof(array));
  return 0;
}
// help50 make filename
// ./filename
