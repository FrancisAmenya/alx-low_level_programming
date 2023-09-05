#include "main.h"

/**
 * read_textfile -reads a specified text file and prints the letters
 * @filename: specified filename.
 * @letters: specified numbers of letters printed.
 *
 * Return: specified numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int intfd;
	ssize_t stnrd, stnwr;
	char *char_buf;

	if (!filename)
		return (0);

	intfd = open(filename, O_RDONLY);

	if (intfd == -1)
		return (0);

	char_buf = malloc(sizeof(char) * (letters));
	if (!char_buf)
		return (0);

	stnrd = read(intfd, char_buf, letters);
	stnwr = write(STDOUT_FILENO, char_buf, stnrd);

	close(intfd);

	free(char_buf);

	return (stnwr);
}
