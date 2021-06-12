#include <stdio.h>

int toes;

void jolly(void);
void deny(void);
void br(void);
void ic(void);
void sm(void);
void one(void);
void two(void);

int main()
{
	printf("\n"); printf("\n"); printf("1:\n");
	printf("Chen Kai\n");
	printf("Chen\nKai\n");
	printf("Chen");
	printf("Kai\n");

	printf("\n"); printf("\n"); printf("2:\n");
	printf("苏州科技大学-陈凯\n");

	printf("\n"); printf("\n"); printf("3:\n");
	printf("%d\n",22*365);

	printf("\n"); printf("\n"); printf("4:\n");
	jolly(); jolly(); jolly(); deny();

	printf("\n"); printf("\n"); printf("5:\n");
	br(); printf(", "); ic(); printf("\n");
	ic(); printf(",\n");
	br(); printf("\n");

	printf("\n"); printf("\n"); printf("6:\n");
	toes = 10;
	printf("%d %d %d", toes, toes* toes, toes* toes* toes);

	printf("\n"); printf("\n"); printf("7:\n");
	sm(); sm(); sm(); printf("\n");
	sm(); sm(); printf("\n");
	sm(); printf("\n");

	printf("\n"); printf("\n"); printf("8:\n");
	one();


	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}

void br(void)
{
	printf("Brazil,Russia");
}

void ic(void)
{
	printf("India,China");
}

void sm(void)
{
	printf("Smile!");
}

void one(void)
{
	printf("starting now:\n");
	printf("one\n");
	two();
	printf("three\n");
	printf("done!\n");
}

void two(void)
{
	printf("two\n");
}