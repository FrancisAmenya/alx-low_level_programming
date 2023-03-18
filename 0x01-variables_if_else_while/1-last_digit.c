#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a final digit, generate random number
 * description - output depends on the final digit variable
 * Return: 0 is always (Success)
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	/** if check for >5 **/
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}

	/** else if check for ==0 **/
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}

	/** last else for <6 **/
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
