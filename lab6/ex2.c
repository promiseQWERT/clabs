#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int day_diff(int y_start, int m_start, int d_start
	, int y_end, int m_end, int d_end)
{
	int y1, m1, d1;
	int y2, m2, d2;

	m1 = (m_start + 9) % 12;
	y1 = y_start - m1/10;
	d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (d_start - 1);

	m2 = (m_end + 9) % 12;
	y2 = y_end - m2/10;
	d2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (d_end - 1);

	return (d2 - d1+1);
}


int main(int argc, char* argv[])
{

	
	if (argc != 3) {
		printf("2019/9/5 2019/10/05 operator ...\n");
		return 1;
	}
	char *date1=argv[1];	
	char *date2 = argv[2];
	char del[] = "/";
	int *final = (int*)malloc(3*sizeof(int));
	char * result = NULL;
	result = strtok(date1,del);
	int i = 0;
	while (result != NULL)
	{
		*(final+i) = atoi(result);
		result = strtok(NULL,del);
		i++;
	}


	int year1 = final[0];
	int month1 = final[1];
	int day1 = final[2];

	result = NULL;
	result = strtok(date2,del);
	i = 0;
	while (result != NULL)
	{
		*(final+i) = atoi(result);
		result = strtok(NULL,del);
		i++;
	}

	int year2 = final[0];
	int month2 = final[1];
	int day2 = final[2];



	printf("%d\n", day_diff(year1, month1, day1, year2, month2, day2));

	free(final);
	return 0;
}
