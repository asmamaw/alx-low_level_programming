#include "main.h"
/**
 * read_textfile - a function that reads from files and prints to posixstdout
 * @filename:th name of a file to be read
 * @letters: to be printed
 * Return:number of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t cnt, ret;
	int fd;
	char *buff;

	if (!(filename && letters))
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	ret = read(fd, buff, letters);
	close(fd);
	if (ret < 0)
	{
		free(buff);
		return (0);
	}
	cnt = write(STDOUT_FILENO, buff, ret);
	free(buff);
	if (cnt < 0)
		return (0);
	return (cnt);
}
