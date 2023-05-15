void    lower(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] += 32;
        }
        i++;
    }
}

char *ft_strcapitalize(char *str)
{
    int    i;
    int space;

    lower(str);
    i = 0;
    space = 1;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            space = 1;
        }
        else if (str[i] > 'a' && str[i] < 'z' && space == 1)
        {
            str[i] -= 32;
            space = 0;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char a[] = "CODE TO BORN";
	ft_strcapitalize(a);
    return (0);
}