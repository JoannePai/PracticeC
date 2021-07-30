/* check if the number "num" can be divide by 3.
 Cannot use mod and division
Ref: https://hackmd.io/@Rance/SkSJL_5gX?type=view
    https://mkfsn.blogspot.com/2016/12/blog-post.html*/

 #include <stdio.h>
 #include <stdint.h>

 int num = 3;
 uint16_t num2= 3;
 int divide3(int);
 int divide3_V2(int);

 int main()
 {
     int ans, ans2;
     ans = divide3(num);
     printf("ans = %i \n",ans);
     ans2 = divide3_V2(num);
     printf("ans = %i \n",ans2);

 }

 int divide3(int a)
 {
     if(a < 0)
     {
         a = -a;
     }
     if(a == 0)
     {
         return 1; // true
     }
     if ((a == 1) ||(a == 2))
     {
         return 0;// false
     }
// In N-base system , number #num can be jugdged if #num can be divide by N+1.
// With the method that sumerize all the odd and even bit. If odd_sum = even_sum, the #num can be dived by N+1.
// For example, this method can be used to dicide whether the binary number can be dived by 3 or not.
     int odd = 0;
     int even = 0;

     while (a != 0)
     {
         even += (a & 0x1);
         a >>= 1;
          odd+= (a & 0x1);
         a >>= 1;
     }
     return divide3(even - odd);
 }

int divide3_V2 (int n)
{
    if ( n == 3 ) 
    {   
    return 1;
    }
    if (n < 0)
    {
        n = -n;      
    }
   
    if (n < 3)
    {
        return 0;
    }
    // 21=00010101 = 
    // 000abcde = abc*4 + de    = abc(*3)+(abc+de)
    //  n    = (n>>2) + (n & 3) =         00000abc + 000000de

    n = (n >> 2) + (n & 3);
    
    return (divide3_V2(n));
}
