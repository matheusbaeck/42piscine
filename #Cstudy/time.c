#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	ft_sqrt(int nb)
{
	long int	root;

	root = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (nb > root * root)
	{
		root++;
	}
	if (nb == root * root)
	{
		return (root);
	}
	else
		return (root);
}

int	ft_is_prime(int nb)
{
	int	n;
	int	i;

	n = ft_sqrt(nb);
	i = 0;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (n > 1)
	{
		if (nb % n == 0)
		{
			i++;
		}
		n--;
	}
	if (i == 1)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int	main(void)
{
	int n = 2147483644;
	time_t	t0;
	time_t	tf;

	time(&t0);
	//n = ft_sqrt(n);
	n = ft_find_next_prime(n);
	time(&tf);
	printf ( "Execution time: %ld\n", (tf - t0));
	printf ( "Answer: %i\n", n);
	return (0);
}
