/* function pointer :　
if several functions have the same input value, and the same return value, 
we can use function pointer to improve efficiency.
Function pointer is better than if-else and switch case.
*/

# include<stdio.h>

int add(int, int);
int min(int, int);

int main()
{
    int (*funcp[2]) (int,int) = {&add, &min};
    printf("add = %i,\n",funcp[0](3,2));
    printf("minus = %i,\n",funcp[1](3,2));
}

int add(int a, int b)
{
    return a + b;
}

int min(int a, int b)
{
    return a - b;
}
