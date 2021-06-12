#include <stdio.h>
void cacul(double x);

int main()
{
	const hour = 60;

	int i=1, j, k,flag;
	double m;
/*	printf("\n"); printf("\n"); printf("1:\n"); 
	scanf_s("%d", &i);
	if (i >= 0)
	{
		j = i/hour;
		k = i% hour;
		printf("%d = %d Hour+%d Min\n", i,j, k);
	}
	
	printf("\n"); printf("\n"); printf("2:\n");
	scanf_s("%d", &i);
	for (j = 0; j <= 10; j++)
	{
		printf(" %d \n", i++);
	}

	printf("\n"); printf("\n"); printf("3:\n");
	
	while (i>0)
	{	
		scanf_s("%d", &i);
		j = i / 7;
		k = i % 7;
		printf("%d day = %d Week+%d day\n", i, j, k);
	}
	
	printf("\n"); printf("\n"); printf("7:\n");

	scanf_s("%lf", &m);
	cacul(m);
*/
	return 0;
}

void cacul(double x)
{
	double y;
	y =(double) x * x * x;
	printf("%lf^3=\n%.5lf\n", x, y);
	return 0;
}