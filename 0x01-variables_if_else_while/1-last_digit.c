/**
 * main - Printf the last digit of a randonlmly fenerated
number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		  printf("Last dogit of %d is %d and is greater thann s\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) !-10)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}

	return (0);
