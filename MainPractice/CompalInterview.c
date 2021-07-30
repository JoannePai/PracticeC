/*
This .c file is for Compal company interview(仁寶電腦)
1.~A|B
2.Use recursive function to make 9*9 table.
3.List the 5 main computer unit
4.The different between Interrupt and Sub-Routine(副程式=function)
*/
#include<stdio.h>
#include<stdint.h>

void RecFunc(int num)
{
    
    if(num<10)
    {
        int count = 1;
        while(count<=9)
        {
        
            printf("%i x %i = %i\n",num,count,num*count);
            count++;
        }
        RecFunc(num+1);
    }
    
}

int main()
{
    // Q1:
    uint8_t A = 73; //01001001
    uint8_t B = 162;//10100010
    printf("~A|B = %u\n",(~A|B));

    //Q2:
    RecFunc(1);

    //Q3:.List the 5 main computer unit: 
    //Control unit, memory unit, Arithmetic & Logic Unit (ALU), input unit, output unit
    
    return 0;

}

