#include <stdio.h>
#include <cs50.h>
#include <math.h>
typedef struct xyz{
    long a;
    char b;
}XYZ;

int main(){
    XYZ S;
    int a;
    a = sizeof(S);
    printf("size of struct = %i \n",a);
    printf("size of long = %lu \n",sizeof(long));
    return 0;
};
