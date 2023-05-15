#include <stdio.h>

void	ft_putstr(char *a)
{
	while (*a)
	{
		write(1, a, 1);
		a++;
	}
	write(1, "\n", 1);
}

char *bug_ptr(char *str)
{
    // char *ptr = (str +4);
    return (str +4);
}

int main(void)
{
    char *str = "khvbñkbbhljhv";
    str = bug_ptr(str);
    ft_putstr(str);
    return (0);
}