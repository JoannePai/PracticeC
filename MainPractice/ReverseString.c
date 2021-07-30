/* reverse a string*/
/* <help make filename> to get help*/

#include <stdio.h>
#include <string.h>
#include "cs50.h"

int Strsize (char*);
void swap(char*, char*);
void RevStr (char*);

char str[5] = {'A', 'B','C','D'};
int strsize = 4;
char *s_origin = str;

int main()
{
    // int strsize;
    // strsize = Strsize(str);
    printf("strsize = %i \n",Strsize(str));
    RevStr(str);
    
    for(int i = 0; i<strsize; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}


int Strsize (char*e)
{
    int i = 0;
    while(*(e+1) != '\0')
    {
        printf("*(e+1) = %c",*(e+1));
        i++;
        e++;
    }
    return i+1;
}
// A = 0010, B = 0011
//A^A = 0;
//A^B = 1101
void swap(char *a, char *b)
{
    *a = *a ^ *b; 
    *b = *a ^ *b;   // *b = *a ^ *b ^ *b = *a^ 0 = *a
    *a = *a ^ *b;   // *a = *a ^ *b ^ *a = *b ^ 0 = *b
}
void RevStr(char* s)
{
    
    if(*s == '\0')
    {
        return;
    }

    // ABCD-> BCDA-> CDBA-> DCBA
    for(int i = 0; i < strsize; i++)
        s = s_origin;
        while(*(s+1+i) != '\0')
        {
            swap(s, (s+1));
            s++; 
        }
    }


}

