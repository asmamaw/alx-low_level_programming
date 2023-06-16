#include <stdlib.h>

/**
 *main - prints all single digit numbers of base 10 starting from0,
 *only using putchar without char variable
 *Return: always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
