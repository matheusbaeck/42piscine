#include <unistd.h>

void	ft_sort_str(char *str)
{
	char	*init;
	char	temp;

	init = str;
	while (*(str + 1) != 0)
	{
		if (*str > *(str +1))
		{
			temp = *str;
			*str = *(str +1);
			str++;
			*str = temp;
			str = init;
		}
		str++;
	}
}

int	main(void)
{
	char tab[] = "asdfghjkqwertyuiopzxcvbnm!\"·$\%&/()=?¿";
	ft_sort_str(tab);
	printf("%s\n", tab);
	return (0);
}
