int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	if (i >= 0)
	{
		return (1);
	}
	return (1);
}

int main(void)
{
	int x;
	
	x = ft_str_is_numeric(""); //1
	x = ft_str_is_numeric("rio"); //0
	x = ft_str_is_numeric("MaDrId"); //0
	x = ft_str_is_numeric("born2code"); //0
	x = ft_str_is_numeric("42"); //1
	x = ft_str_is_numeric("#å#"); //0
	return (0);
}
