//Q: Determine the input number is happy number or not with the function "bool func(int n)"

// command "make < file name>" to compile c file
// command "./ < file name>" to run .out file
// command "style50  < file name>.c" to make sure your coding style is perfect!
#include <stdio.h>
#include <cs50.h>

int num = 20;

int func(int);
int main(void)
{   
    int ans;
    ans = func(num);
    printf("answer is : %d \n", ans);
    return ans;    
}
int func(int a)
{
    
    int n = a;
    int sumold = 10;
    while((n != 0) || (n != 1))
    {
        int sum = 0;

         
        while (n!=0)
         {
            int d = n % 10;
            sum += d * d;
            n = n / 10;
        // printf(" number = %d \n", sum);
         }
         if(sum == 1)
         {
             return 1;
             break;
         }
         if(sum == 0)
         {
             return 0;
             break;
         }
         if (sum < 10)
         {
             sumold = sum;
             if (sumold == sum)
             {
                return 0;
                break;

             }

         }
         if ((sum != 0) && (sum != 1))
         {
             n = sum;
         }
         printf(" n = %d \n", n);
 
    } 
       
        
    return 2;
}
