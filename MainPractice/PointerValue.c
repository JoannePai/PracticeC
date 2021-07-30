#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
int main(void)
{
    char s[] = "0113256";
    char *p = s;
    printf("%c",*p++);
    printf("%c",*(p++));
    printf("%c",(*p)++);
    printf("%c",*p++);
    printf("%c",*(++p));
    printf("%c",++*p);
    printf("%c",++(*p));

    printf("\n");

    printf("s=%s",s);
    printf("\n");

    int a[5] ={1,2,3,4,5};
    int *q = (int *)(&a+1);
    printf("*(a+1)=%i\n",*(a+1));
    printf("(*q-1)=%i\n",(*q-1));

int nums[5]={1,2,3,4,5};
int *ptr=nums; //ptr= nums[0]
*(ptr++)+=123; //nums[0] = nums[0] + 123 = 124, ptr = nums[1]
*(++ptr)+=123;// ptr = nums[2], nums[2] = nums[2] + 123 = 126

//nums = [124, 2,126, 4, 5]

for (int i = 0; i < 5; i++)
{
    printf("p[%i] = %i\n", i, nums[i]);
}

    return 0;

}
