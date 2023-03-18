#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints variable output 0
 * Description: a variable n is randomly assigned an int value, checks polarity
 * Return: 0 if successfuly done
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/** if check for n positivity **/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	/** if check for n is 0 **/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	/** if check for n negativity **/
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
