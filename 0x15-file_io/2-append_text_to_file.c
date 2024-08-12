#include "main.h"
#include <fcntl.h>
/**
* append_text_to_file - appends text to a file
* @filename: name of the file
* @text_content: content to append
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t openBuff, writeBuff, len = 0;

	if (!filename)
	return (-1);

	if (text_content)
	for (; text_content[len]; len++)
		;
	openBuff = open(filename, O_WRONLY | O_APPEND);
	writeBuff = write(openBuff, text_content, len);
	if (openBuff == -1 || writeBuff == -1)
	return (-1);

	close(openBuff);
	return (1);
}
