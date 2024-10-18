#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function entry point (print last number)
 * Return: 0
 */
int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	printf("Last digit of %d is ", n);

	if (num > 5)
		printf("%d and is greater than 5\n", num);
	else if (num == 0)
		printf("%d and is 0\n", num);
	else
		printf("%d and is less than 6 and not 0\n", num);
	return (0);
}
