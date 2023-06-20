#include <stdio.h>

/**
* main - Print the word "_putchar"
*
* Return: Always 0
*/
int main(void)
{
	int cnt;
	char b[] = "_putchar";

	for (cnt = 0; cnt < 8; cnt++)
	{
		_putchar(b[cnt]);
	}
	_putchar('\n');
	return (0);
}
