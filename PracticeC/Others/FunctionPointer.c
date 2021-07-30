// Funtion pointer practice: call a pointer point to "func" function
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int func(int,int);
int addfunc(int, int, int (*funp) (int, int));
int main()
{
  int a = 2;
  int b = 3;
  int (*funcpointer) (int,int) = func;

  printf("ans1 = %i \n", funcpointer(a, b));
  printf("ans2 = %i \n", addfunc(a, b, func));
  return 0;

}

int func(int a, int b)
{
  int c;
  c = a + b;
  return c;
}
int addfunc(int a, int b, int(*funp)(int, int))
{
  int d;
  d = funp(a, b);
  return d;
}
