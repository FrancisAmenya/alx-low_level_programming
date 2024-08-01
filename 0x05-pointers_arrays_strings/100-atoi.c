pointers, vs arrays, vs strings
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if (result > (INT_MAX - digit) / 10)
			{
				return (sign == 1) ? INT_MAX : INT_MIN;
			}

			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	return result * sign;
}
