#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	**ptr;
	char 	*str;
	int		len;

	ptr = argv;
	while (*ptr)
	{
		while (**ptr && (str = (char *) malloc(sizeof(char))))
		{
			*str = **ptr;
			ptr++;
			str++;
			len++;
		}
	}
	if (**ptr && (str = (char *) malloc(sizeof(char))))
	{
		str++;
		*str = '\0';
	}
	
}

int main(int argc, char  *argv[])
{
	ft_concat_params(argc, argv);
	return 0;
}
 