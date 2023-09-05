#include "main.h"

/**
 * create_file - creates a specified file
 * @filename: filename specified .
 * @text_content: specified content writed in the file.
 *
 * Return: specified 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int intfd;
	int intnletters;
	int intrwr;

	if (!filename)
		return (-1);

	intfd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (intfd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (intnletters = 0; text_content[intnletters]; intnletters++)
		;

	intrwr = write(intfd, text_content, intnletters);

	if (intrwr == -1)
		return (-1);

	close(intfd);

	return (1);
}
