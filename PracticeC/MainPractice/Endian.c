/*This file is used to diag the system is big endian or little endian */
#include <stdio.h>
#include <cs50.h>
// elements in the same union use the same memory
typedef union{
    unsigned long data;
    unsigned char c[4];
}nums;

int main()
{
    nums test;
    test.data = 0x12345678;
    // 8bit per memory, 0x->Hexadecimal,
    //Big endian: 0x12 (8bit) 0x34 (8bit) 0x56 (8bit) 0x78 (8bit)
    //Little endian: 0x78 (8bit) 0x56 (8bit) 0x34 (8bit) 0x12 (8bit)
    if(test.c[0] == 0x12)
    {
        printf("Big endian");
    }
    else if(test.c[0] == 0x78)
    {
        printf("little endian");
    }
    else
    {
        printf("cannot diag");
    }
}
