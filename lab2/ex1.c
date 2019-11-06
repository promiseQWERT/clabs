#include <stdio.h>
int main(void)
{
    unsigned int x,y;
    x = 1;
    y = 0;
    while (x>0)
    {
        x++;
    }
    printf("unsigned int max = %u\n",x-1);
    unsigned int n;
    n = x-1;
    do
    {
     n=n/2;
     y++;   
    } while (n>0);
    printf("The unsigned int bit is %d\n",y);
return 0;
}
