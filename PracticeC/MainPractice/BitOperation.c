/* reverse 16 bit: 0011 ...... -->...... 1100*/
# include<stdio.h>
# include<stdint.h>
# include<stdlib.h>

uint16_t num = 0x1234;


void printbit(uint16_t *a)
{
    uint16_t *o = a;
    for(int i = 0; i <16; i++)
    {
        a = o;
        printf("%u", (*a>>(15-i))&1);
    }
    printf("\n");
}
uint16_t revbit(uint16_t n)
{
    uint16_t ans = 0;
    for(int i = 0; i < 16; i++)
    {
        uint16_t a;
        a = ((n >> (16-1-i)) & 0x1)<<i;
        ans |= a;
    }
    return ans;
} 
void setbit (uint16_t* setn,uint16_t bit)
{
    printf("before set =");
    printbit(setn);
    *setn |= (0x1<<bit) ;
    printf("after set =");
    printbit(setn);
}
void clearbit (uint16_t* setn,uint16_t bit)
{
    printf("before clear =");
    printbit(setn);
    *setn &= ~(0x1<<bit) ;
    printf("after clear =");
    printbit(setn);
}
void inversebit (uint16_t* setn,uint16_t bit)
{
    printf("before inverse =");
    printbit(setn);
    *setn ^= (0x1<<bit) ;
    printf("after inverse =");
    printbit(setn);
}
int main()
{
    uint16_t* num2 = malloc(sizeof(uint16_t));
    *num2 = 0;
    printbit(num2);
    printf("original num = 0x%x \n reversed num = 0x%x ",num,revbit(num));
    printf("\n");

    printf("setnums \n");
    setbit(num2,2);
    setbit(num2,1);
    setbit(num2,0);


    printf("clearnums\n");
    
    clearbit(num2,1);
    
    printf("invers nums\n");
    
    inversebit(num2,5);

}
