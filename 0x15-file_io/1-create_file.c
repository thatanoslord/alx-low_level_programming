#include "main.h"
#include <fcntl.h>
<<<<<<< HEAD

=======
>>>>>>> 6188a73ab924c832a1ba54c4f727cd6b442378dd
/**
* create_file - Creates a file with the specified name and content.
* @filename: A pointer to the name of the file to be created.
* @text_content: A pointer to the string to write to the file.
*
* Return: 1 on success, -1 on failure.
<<<<<<< HEAD
*         -1 if filename is NULL or if the file cannot be created.
*         1 if the file is created and written successfully.
=======
*	-1 if filename is NULL or if the file cannot be created.
*	1 if the file is created and written successfully.
>>>>>>> 6188a73ab924c832a1ba54c4f727cd6b442378dd
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t openBuff, writeBuff, len = 0;

	if (!filename)
	return (-1);

	if (text_content)
	for (; text_content[len]; len++)
		;

	openBuff = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writeBuff = write(openBuff, text_content, len);

	if (openBuff == -1 || writeBuff == -1)
	return (-1);

	close(openBuff);
	return (1);
}
