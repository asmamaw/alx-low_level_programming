#include "main.h"
/**
 * read_textfile - a function that reads from files and prints to posixstdout
 * @filename:th name of a file to be read
 * @letters: to be printed
 * Return:number of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, ret;
	char buff[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, buff, 1024);
	write(1, buff, ret);
	return (ret);
}
