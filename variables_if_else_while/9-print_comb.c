#include <stdio.h>
/**
 * main - function entry point, print number base 16
 * Return: 0
 */

int main(void) {

	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
		if(num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	
	}
	printf("salio");
	putchar('\n');
	return(0);
}
