#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: Pointer to name of file
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *my_buff;
	ssize_t nrd, nwr;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	my_buff = malloc(sizeof(char) * letters);
	if (my_buff == NULL)
		return (0);
	nrd = read(fd, my_buff, letters);
	nwr = write(STDOUT_FILENO, my_buff, nrd);

	close(fd);
	free(my_buff);

	return (nwr);
}
