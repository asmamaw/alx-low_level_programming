#include "main.h"
/**
 * read_textfile - a function that reads from files and prints to posixstdout
 * @filename:th name of a file to be read
 * @letters: to be printed
 * Return:number of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, cnt, ret;
	char *buff;

	buff = malloc(sizeof(letters));
	if (!buff)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	ret = read(fd, buff, letters);
	cnt = write(STDOUT_FILENO, buff, ret);
	close(fd);
	return (cnt);
}
