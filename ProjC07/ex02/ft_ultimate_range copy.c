#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*arr = 0;
		return (arr);
	}
	i = min;
	arr = malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		*arr = i;
		arr++;
		i++;
	}
	return (arr + min - max);
}


int ft_ultimate_range(int **range, int min, int max)
{
	range = &ft_range(min, max)
	return(0)
}

int main(void)
{
	int **ptr;

	ft_ultimate_range(ptr, 0, 10);
	return (0);
}
