#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	n;

	j = 0;
	i = 0;
	n = max - min;
	range = malloc(sizeof (int *) * (n));
	while (j > n)
	{
		range[j] = malloc(sizeof (int) * 1);
		j++;
	}
	i = min;
	j = 0;
	while (i < max)
	{
		*range[j] = i;
		range++;
		i++;
		j++;
	}
	return (0);
}

int main(void)
{
	int **ptr;

	ft_ultimate_range(ptr, 0, 10);
	return (0);
}
