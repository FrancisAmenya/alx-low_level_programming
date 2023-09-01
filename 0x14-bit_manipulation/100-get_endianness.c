#include "main.h"

/**
 * get_endianness - specifier checks if a machine is little or big endian
 * Return: 0 specifier for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int ui = 1;
	char *charc = (char *) &ui;
	/*added int*/
	return (int(*charc));
}
