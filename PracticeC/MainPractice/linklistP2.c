 #include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
}
node;
#define intmax  3
int main(void)
{
    node *numbers = NULL;
    

    while (1)
    {
        int number = get_int("Number: ");
        node *n = malloc(sizeof(node));

        // leave the get int loop
        if (number == intmax)
        {
            break;
        }


        // check n
        if (n == NULL)
        {
          return 1;
        }

        n->number = number;
        n->next = NULL;

        if (numbers != NULL)
        {
          for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
          {
              if (ptr->next == NULL)
              {
                ptr->next = n;
                break;
              }
          }
        }
        else
        {
          numbers = n;
        }
    }

    //Print numbers
    printf("\n");
    for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
    {
      printf("%i\n", ptr->number);
    }

    //Free memory
    node *ptr = numbers;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}
