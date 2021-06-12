#include <stdio.h>

int main()
{
	int i;
	int str1[5] = {1,3,4,5,6};

	printf("\n\n1:\n");
	for (i = 0; i < 5; i++)
	{
		printf("\n-\n");
		scanf_s("%d", &str1[i]);

	}
	
	for (i = 0; i < 5; i++)
	{
		printf("|%d|", str1[i]);
	}
	


	return 0;
}