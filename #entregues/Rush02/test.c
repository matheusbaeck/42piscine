#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (*str - '0') + (num * 10);
		str++;
	}
	return (num * sign);
}

void	*write_dict_keys(char **argv, int size)
{
	int	*dict_keys;

	dict_keys = malloc(sizeof(int *) * size);
	while (size--)
	{
		printf("atoi %i", ft_atoi(*argv))
		*dict_keys = ft_atoi(*argv);
		argv++;
	}
	write_dict_keys(argv, size);
	return (dict_keys);
}

int	main(void)
{
	char	**argv;
	char	*dict_keys;
	int		size;
	int		i;

	i = 2;
	argv = malloc(sizeof(char *) * size);
	while (size--)
	{
		argv = malloc(sizeof(char) * 20);
	}
	argv[0] = "0: zero";
	argv[1] = "1: one";

	dict_keys = malloc(sizeof(int *) * size);
	while (size--)
	{
		printf("atoi %i", ft_atoi(*argv))
		*dict_keys = ft_atoi(*argv);
		argv++;
	}
	write_dict_keys(argv, size);
	return (dict_keys);

	dict_keys = write_dict_keys(argv, size);
	printf("key[0]: %i", dict_keys[0]);
	//dict_values = write_dict_values(argv, size);
	}