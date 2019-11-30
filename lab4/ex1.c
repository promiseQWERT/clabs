#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    char c;
    double d;
    int h = 0;
    while((c=getchar())!=' ')
    {
        a = a*10 + c - '0';
    }
    while((c=getchar())!=' ')
    {
        b = b*10 + c - '0';
    }
    c = getchar();
    switch(c){
        case'+':
          d=a+b;
          break;
        case'-':
          d=a-b;
          break;
        case'*':
          d=a*b;
          break;
        case'%':
          h=a%b;
          d=h;
          break;
        case'/':
         if(b == 0)
         {
             printf("error,can not divided a number by 0");
             break;
         }
         

         if(b != 0)
         {
             d=1.0*a/b;
         }break;
        }if(b != 0)
        {
            printf("the answer is %.1f",d);
        }
    return 0;
}
