#include "main.h"

int get_length(char *str);
void perform_addition(char *n1, char *n2, char *r, int size_r, int l1, int l2);
void shift_result(char *r);

/**
 * infinite_add - Adds two numbers
 * @n1: First number to be added
 * @n2: Second number to be added
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2;

	l1 = get_length(n1);
	l2 = get_length(n2);

	if (l1 + 2 > size_r || l2 + 2 > size_r)
		return (0);

	perform_addition(n1, n2, r, size_r, l1, l2);

	if (r[0] == '\0')
		return (0);

	shift_result(r);

	return (r);
}

/**
 * get_length - Get the length of a string
 * @str: The string to measure
 *
 * Return: Length of the string
 */
int get_length(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * perform_addition - Perform the addition of two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Result buffer
 * @size_r: Size of result buffer
 * @l1: Length of n1
 * @l2: Length of n2
 */
void perform_addition(char *n1, char *n2, char *r, int size_r, int l1, int l2)
{
	int i = l1 - 1, j = l2 - 1, k = size_r - 2, sum, carry = 0;

	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (k < 0)
		{
			r[0] = '\0';
			return;
		}

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k--;
	}
}

/**
 * shift_result - Shift the result to the beginning of the buffer
 * @r: Result buffer
 */
void shift_result(char *r)
{
	int i, j;

	for (i = 0; r[i] == '\0'; i++)
		;
	if (i > 0)
	{
		for (j = 0; r[i]; i++, j++)
			r[j] = r[i];
		r[j] = '\0';
	}
}
