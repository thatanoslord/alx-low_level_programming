#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: name of the file
 * @letters: number of letters to read
 * Return: actual number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, readBuff, writeBuff;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	file = open(filename, O_RDONLY);
	readBuff = read(file, buffer, letters);
	writeBuff = write(STDOUT_FILENO, buffer, readBuff);

	if (file == -1 || readBuff == -1 || writeBuff == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file);
	return (writeBuff);
}
