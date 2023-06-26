#include "main.h"
/**
 * 0-reset_to_98: updates the value it points to 98
 * return:void
 */
void reset_to_98(int *n)
{
	int b;
	n = &b;
	*n = 98;
}
