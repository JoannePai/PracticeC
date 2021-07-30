/*Counting elements : [1,2,3]. 
If array element+1 is also inside array, element is counted.
output how many element can be counted. */

 #include <stdio.h>

 int check(int* , int );
 int main()
 {
     int nums[5] = {1,1,2,2};
     int numsize = 5;
     int ans = 0;
     int *ptr = nums;
     ans = check(nums, numsize);
     printf("out = %i\n",ans);
     printf("nums = ");
     return 0;

 }

int check(int *array, int size)
{
    int out = 0;
    int newnums[size];
    int *ptr2 = newnums;
    int *ptr = array;

    //copy nums array
    printf("newnums = ");

    while(*array != '\0')
    {
        *ptr2 = *array;      
        printf("%i",*ptr2);        
        ptr2++;
        array++;
    }
    printf("\n");

// initial ptr
    array = ptr; 

//check count
    while(*array != '\0')
    {       
        int* arraysrc = newnums; // initial ptr
        *array +=1;
        printf("*array =%i\n",*array);

        while(*arraysrc != '\0')
        {
            if(*arraysrc == *array)
            {
                out++;
                break;
            }
            printf("*arraysrc = %i, out = %i\n",*arraysrc,out);
            arraysrc++;
        }
        
        array++;
        
    }
  
    return out;
}
