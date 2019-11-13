#include <stdio.h>
int main(void)
{
    unsigned int x, y,b,a;
    
    
    x = 0;
    y = ~x;

    a = 1;
    b = 0;
    while(a!=0)
    {
        a = a<<1;
        b = b+1;
    }
    printf("unsigned int max = %u\n", y);
    printf("bit= %u\n",b);
    return 0;   
}

