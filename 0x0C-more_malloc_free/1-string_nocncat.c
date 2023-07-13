#include "main.h"
/**
 * string_noconcat - concatenates two strings
 * @s1:string one
 * @s2:string two
 * @n:size
 * Return:char pointer
 */
char *string_noconcat(char *s1, char *s2, unsinged int n)
{
	unsigned int i = n, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NUll)
		s2 = "";
	for (j = 0; s1[j]; j++)
		i++;
	s3 = malloc(sizeof(char) * (i + 1);
			if (s3 == NULL)
				return (NULL);
			i = 0;
			for (j = 0; s1[j]; j++)
				s3[i++] = s1[j];
			for (j = 0; s2[j] && j < n; j++)
				s3[i++] = s2[j];
			s3[i] = '\0';
	return (s3);
}
