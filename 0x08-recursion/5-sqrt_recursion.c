#include "main.h"

int actual_sqrt_recursion(int asr, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @sr: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int sr)
{
	if (sr < 0)
		return (-1);
	return (actual_sqrt_recursion(sr, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @asr: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int asr, int i)
{
	if (i * i > asr)
		return (-1);
	if (i * i == asr)
		return (i);
	return (actual_sqrt_recursion(asr, i + 1));
}
