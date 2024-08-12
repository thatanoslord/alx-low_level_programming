#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*	-1 if filename is NULL or if the file does not exist or cannot be opened.
*	1 if the file exists and the text is appended successfully.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writeBuff, len = 0;

	if (!filename)
	return (-1);

	if (text_content)
	{
	for (; text_content[len]; len++)
		;
	}
	
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content)
	{
	f = write(fd, text_content, len);
	if (writeBuff == -1)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}

