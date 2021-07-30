//An integer array is given. The system gives you a series of integers, and please find it as a correct position in the sequence then print the corresponding value.

#include <stdio.h> 
#include <stdint.h> 



int main(void)
{
int arr[6] ={5, 8, 4, 9, 1};

int j = 0;

while(arr[j] != '\0')
{
for(int i = 0; i < 5; i++)
{
    if((arr[i] > arr[i + 1])&&(arr[i + 1]!= '\0'))
    {
        int temp;
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
    
}
j++;
}

int* p = arr;
for(int i = 0; i < 5; i++)
{
    printf("%i",*p);
    p++;
}
printf("\n");
printf("%i, %i, %i, %i, %i", arr[2], arr[1], arr[3], arr[4], arr[0]);
	return 0;

}
