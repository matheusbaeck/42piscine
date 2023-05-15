int	upper(char str)
{
	while (str)
	{
		if (str >= 'A' && str <= 'Z')
		{
			return (1);
		}
		else
		{
			return  (0);
		}
	}
	return (0);
}

char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (upper(str[i]) == 1)
		{
			str[i] += ' ';
			str = ft_strlowcase(str);
			return (str);
		}
		else
		{
			i++;
		}
	}
	return (str);
}

int main(void)
{
    char a[] = "lasixi";
	ft_strlowcase(a);
    return (0);
}