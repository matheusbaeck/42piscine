#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
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
	
	x = ft_str_is_lowercase(""); //1
	x = ft_str_is_lowercase("rio"); //1
	x = ft_str_is_lowercase("MaDrId"); //0
	x = ft_str_is_lowercase("born2code"); //0
	x = ft_str_is_lowercase("42"); //0
	x = ft_str_is_lowercase("#å#"); //0
	return (0);
}