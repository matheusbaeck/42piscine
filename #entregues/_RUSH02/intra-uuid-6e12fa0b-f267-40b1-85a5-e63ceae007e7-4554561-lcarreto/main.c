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

char *get_values(char *str)
{
	char  *dest;

	dest = malloc()
	while (*str && *str == ' ')
	{
		str++;
	}
	while (*str && *str != ' ')
	{
		str++;
	}
	while (*str)
	{
		*str = *dest;
		dest++;
		str++;
	}
	return (dest);
}

void	*write_dict_values(char **argv, int size)
{
	char	**dict_values;
	int		*dict_keys;

	dict_keys = malloc(sizeof(int) * size);
	dict_values = malloc(sizeof(char *) * size);
	while (size--)
	{
		dict_values = malloc(sizeof(char) * 42);
	}
	while (*argv)
	{
		*dict_keys = ft_atoi(*argv);
		*dict_values = get_values(*argv);
		argv++;
	}
	free(argv);
	return (dict_values);
}

void	*write_dict_keys(char **argv, int size)
{
	int		*dict_keys;

	dict_keys = malloc(sizeof(int *) * size);
	while (size--)
	{
		*dict_keys = ft_atoi(*argv);
		argv++;
	}
	write_dict_keys(argv, size);
	return (dict_keys);
}

int	main(void)
{
	char	**argv;
	char 	*dict_keys;
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

	//dict_keys = write_dict_keys(argv, size);
	dict_values = write_dict_values(argv, size);
}
/*
int	main(int argc, char **argv)
{
	int size; //lines count

	argv++;
	if (argc == 3)
	{
		argv++;
	}
	while (argc--)
	{
		write_dict(argv, size)
	}
}*/