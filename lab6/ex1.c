#include<stdio.h>
#include<ctype.h>

#define MAX_NUM 100
double stack[MAX_NUM];
extern int getfloat(char* str,double*);
int getfloat(char* str, double* store)
{
	while(isspace(*str))
	{
		str++;
	}

	int h;
	int sign;
	double power = 1.0;
	h = *str++;
	sign = h == '-'?-1:1;
	if (h =='+' || h =='-')
	{
		h == *str++;
	}
	for (*store == 0.0;isdigit(h);h=*str++)
	{
		*store = *store*10.0 + h - '0';
		power *=10.0;
	}
	if (h == 0||isspace(h) || h == EOF)
	{
		
		*store *= sign;
		
		return 1;
	}
	else
	{
		printf("%d\n",store);
		return -1;
	}	
}


int main(int argc, char* argv[])
{
	
	if (argc < 2) {
		printf("num1 num2 operator ...\n");
		return 1;
	}
	else {
		int stackp = 0;
		int ch = 0;
		
		double num1, num2, ans;
		while (--argc >= 1) {
			ch = (*++argv)[0];
			if (ch == '-'){
				if (!isdigit(ch = (*argv)[1])) {

					if (stackp >= 2) {
						num2 = stack[--stackp];
						num1 = stack[--stackp];
						stack[stackp++] = num1 - num2;
						continue;
					}
					else {
						printf("Error \n");
						return -1;
					}
				}
			}
			if (isdigit(ch)) {
				if (stackp < 0) {
					printf("stack is underflowed!\n");
					return -2;
				}
				else if (stackp >= MAX_NUM) {
					printf("stack is overflowed!\n");
					return -3;
				}
				else if (getfloat(*argv, &stack[stackp++]) == -1) {
					printf("wrong argument to get number: %s\n", *argv);
					return -4;
				}
			}
			else if (ch == '+'||ch=='*'||ch=='/'||ch=='%') {
				if (stackp >= 2) {
					num2 = stack[--stackp];
					num1 = stack[--stackp];
					switch (ch) {
					case '+':
						ans = num1 + num2;
						break;
					case '*':
						ans = num1*num2;
						break;
					case '/':
						if (num2 == 0.0) {
							printf("error 0 divisor: %f / %f\n", num1, num2);
							return -5;
						}
						ans = num1 / num2;
						break;
					case '%':
						ans = (int)num1%(int)num2;
						break;
					}
					stack[stackp++] = ans;
				}
				else {
					printf("Error: at least two numbers are needed before operator '%c'\n",ch);
					return -6;
				}
			}
			else {
				printf("wrong .. for %c, expr num1 num2 operator ...\n", ch);
				return -7;
			}
		}
		if (stackp == 1) {
			printf("%.4f\n", stack[0]);
		}
		else {
			printf("the format  is wrong!\n");
		}
	}
	return 0;
}


