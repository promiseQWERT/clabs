#include <stdio.h>
int main(void)
{
    unsigned int a,b;
    a = 1;
    b = 0;
    while (a>0)
    {
        a++;
    }
    printf("unsigned int max = %u\n",a-1);
    unsigned int n;
    n = a-1;
    do
    {
     n=n/2;
     b++;   
    } while (n>0);
    printf("The unsigned int bit is %d\n",b);
return 0;
}
