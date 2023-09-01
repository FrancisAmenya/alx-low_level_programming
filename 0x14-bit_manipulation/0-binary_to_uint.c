#include "main.h"

/**
 * binary_to_uint -specifier converts a binary number to unsigned int
 * @b:specifier string containing the binary number
 *
 * Return: the specifier converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int inti;
	unsigned int intdec_val = 0;

	if (!b)
		return (0);

	for (inti = 0; b[inti]; inti++)
	{
		if (b[inti] < '0' || b[inti] > '1')
			return (0);
		intdec_val = 2 * intdec_val + (b[inti] - '0');
	}

	return (intdec_val);
}
