#include <stdio.h>
void reverse(char s[]);

int main(void)
{
    int i = 0;
    char s[100];
    while(s[i]!=EOF)
     {
       
       s[i]=getchar();
       if(s[i] == '\n')
          {break;}
          i++;
     }
     reverse(s);
     printf("%s", s);
     }
void reverse(char s[])
  {
      int i;
     static int i = 0;
 
     if (*s == '\0')
     {
         i--;
         return;
     }
 
     else 
     {
         i++;
         reverse(s + 1);
     }
     if (i > 0)
     {
         i = *s;
         *s = *(s - i);
          *(s - i) = i;
          i -= 2;
      }

  } 


