#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function entry point (print number positive and negative.. or zero)
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
