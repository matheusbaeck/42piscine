

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
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
	
	x =  ft_str_is_uppercase(""); //1
	x =  ft_str_is_uppercase("rio"); //0
	x =  ft_str_is_uppercase("MaDrId"); //0
	x =  ft_str_is_uppercase("born2code"); //0
	x =  ft_str_is_uppercase("42"); //0
	x =  ft_str_is_uppercase("#å#"); //0
	x =  ft_str_is_uppercase("BAECK"); //1
	return (0);
}