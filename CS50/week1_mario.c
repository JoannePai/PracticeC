#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int main(void)
{
    int n;

        scanf("Number:%d",&n);

    int i=0;
    int j=0;
    int h;
    h=n;
    printf("Height:%i\n",h);
    for(i=1;i<=h;i++){
        for(j=1;j<=h*2+3;j++){
           if((j<=h-i)||(j==h+1)||(j==h+2)||(j>h+2+i)) printf(" ");
           else printf("#");
        }
        printf("\n");
    }
}
