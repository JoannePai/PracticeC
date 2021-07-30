/* 
Call by value : copy a value to b address ex: a = b
Call by address(Call by pointer): *a = *b
Call by reference: address_a = address_b //only for c++
*/
#include<stdio.h>
int a = 1, b = 2;
int c = 1, d = 2;
int e = 1, f = 2;
//Call by value
int CBV (int m, int n)
{
    m = n;
    return m;
}

//Call by address(Call by pointer)
void CBA_swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

// // Call by reference
// void CBF_swap(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    CBV(a,b);
    CBA_swap(&c,&d);
    // CBF_swap(*e, *f); //only for c++
    printf("a = %i,b = %i,c = %i,d = %i,e = %i,f = %i",a,b,c,d,e,f);
    
    return 0;    
}
