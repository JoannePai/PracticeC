#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>



int main(void)
{
    int *numbers = NULL; // array address(numbers[0]) to store number
    int size = 0;
    int capacity = 0;

    while (1)
    {
        int number = get_int("Number: ");

        // leave the get int loop
        if (number == INT_MAX)
        {
            break;
        }



        //realloct memory
        if (size == capacity)
        {
            numbers = realloc(numbers, sizeof(int) * (size + 1));
            capacity++;
        }
        size++;
        //record number
        numbers[size] = number;

    }

    for (int i = 0; i <= size; i++)
    {

        printf("Numbers = %d\n", numbers[i]);
    }

    free(numbers);

    return 0;
}
