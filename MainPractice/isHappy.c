#include <stdio.h>
#include <cs50.h>
#include <math.h>
int next_n(int n);
// int isHappy1 (int in)
// {
//     int count = 1;
     
//     // do{
//     //     count++;
//     //     in = in / 10;
//     //     printf("number = %d\n", (in % 10));
        
//     // }while((in / 10) >= 1);
//     int last_num;
//     int init_num = in;
//     int num_sum;
//     last_num = in%10;
//     printf("last_num = %d\n", last_num);
//     do{
//         num_sum = last_num*last_num;
//         do{
//             int temp_num;
//             count++;        
//             in = in / 10;
//             temp_num = in%10;
//             printf("temp_num = %d\n", temp_num);
//             num_sum += temp_num*temp_num;
//             printf("num_sum = %d\n", num_sum);
               
//         }while((in / 10) >= 1);
//         in = num_sum;

//         if (num_sum == 1) return 1;

//         if (num_sum ==init_num) break;

//     }while(in != 1);


//     return 0;
// }
int isHappy2 (int n)
{
    n = next_n(n);
    printf ("%d\n", next_n(n));
    return 0;
}

int next_n(int n)
{
    int num = n;
    int r = 0;
    while (num !=0)
    {
        int d = num % 10;
        printf("num: %d \n d=%d\n", num,d);
        num /= 10;
        r += d*d;
    }
    return r;
}
bool is
int main (void)
{
    int a;
    printf("input number:");
    scanf("%d", &a);
    printf("input number:%d\n",a);
    printf("ishappy:%d\n",isHappy2(a));
    return 0;
}
