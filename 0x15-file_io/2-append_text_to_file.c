#include "main.h"

/**
 * append_text_to_file - appends specified text at the end of a file
 * @filename: specified filename.
 * @text_content: specified added content.
 *
 * Return: specified 1 if the file exists. -1 if the fails does not exist
 * specified or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int intfd;
	int intnletters;
	int intrwr;

	if (!filename)
		return (-1);

	intfd = open(filename, O_WRONLY | O_APPEND);

	if (intfd == -1)
		return (-1);

	if (text_content)
	{
		for (intnletters = 0; text_content[intnletters]; intnletters++)
			;

		intrwr = write(intfd, text_content, intnletters);

		if (intrwr == -1)
			return (-1);
	}

	close(intfd);

	return (1);
}
