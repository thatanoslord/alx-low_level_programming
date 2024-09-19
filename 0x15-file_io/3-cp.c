#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_buf - creates a buffer pointer
 * @file_name: name of the file
 * Return: pointer to buffer
 */

char *create_buf(char *file_name)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 1 or exit code between 97 - 100
 */

int main(int argc, char *argv[])
{
	ssize_t from, to, readBuf, writeBuf;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	readBuf = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || readBuf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writeBuf = write(to, buffer, readBuf);
		if (to == -1 || writeBuf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readBuf = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (readBuf > 0);

	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
