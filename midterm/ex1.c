#include <stdio.h>
int main(void)
{
printf("Enter any alphanumeric, space character, TAB character not exceeding 50 characters in length");
char c[50];
int x=0;int i = 0;
int y=0;
int g = 0;int d = 0;
  while ((c[i] = getchar())!= '\n')
    {
        if (c[i] >= 'a'&& c[i] <= 'z'){
            x++;
        }
        else if (c[i]>= 'A'&&c[i]<= 'Z'){
            y++;
        }
        else if (c[i]>= '0'&& c[i] <= '9'){
            d++;
        }g = x + y;
    }
    printf("The number of a is %d and the number of 0 is %d",g,d);
    return 0;
}
