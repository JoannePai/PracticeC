
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdint.h>
#define SECONDS_PER_YEAR 60.356767F
#define SECONDS_PER_YEAR2 365*24*60*60UL // connot be (365*24*60*60)UL
#define min(a,b) ((a)<(b)?(a):(b))
int main(void)
{

    float a = SECONDS_PER_YEAR;

    uint32_t n =4294967295;
    int n2 =-1;
    uint32_t a2 = SECONDS_PER_YEAR2;
    int c = sizeof(int);
    printf("n =%d\n",(int)n);
    printf("n2 =%u\n",(uint32_t)n2);
    printf("sizeof int=%lu\n",sizeof(int));
    printf("-4=%d\n",-4);
    printf("%u\n",a2);
    printf("%u\n",min(10,3));
    return 0;
}
