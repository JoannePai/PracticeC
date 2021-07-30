// n = 2的次方? 1= yes, 0 =no
#include <stdio.h> 
#include <stdint.h> 

int n = 2;

int pow2(int a)
{
    // n   = pow(2,x) => 0010, 0100,1000
    // n-1 =             0001,0011,0111
    // ((!(n&(n-1))) =   1     1    1
    printf("((n&(n-1))) = %i \n",(n&(n-1)));
    printf("((n&(n-1))) = %i \n",(n&(n-1)));
    printf("(!(n&(n-1))) = %i \n",(!(n&(n-1))));
    printf("n!=0 = %i \n",(n!=0));
    return ((!(n&(n-1))) && (n!=0));

}

int main (void)
{
    printf("ans = %i \n",pow2(n));
}

