#include <stdio.h>
int main()
{
char s[1000];
char t[1000];
int x = 0;
int y = 0;
while ((s[x] = getchar()) != ' ')
  {
      x++;
  }
while (((t[y] = getchar()) != EOF) && (t[y] != '\n') && s[x] == ' ')
  {
      y++;
  }
int i, j, k;
for (i = x - 1; i > 0; i--)
  {
      for (j = i, k = y - 1; s[j] == t[k]; j--, k--)
                       ;
          if (k < 0)
             {
                 printf("%d\n", j + 2);
                 return i;
             }
  }
printf("wrong\n");

}
