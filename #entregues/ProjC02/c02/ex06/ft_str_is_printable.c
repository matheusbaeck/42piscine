int    ft_str_is_printable(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 32 || str[i] == 127))
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
    char a[] = "lasixi";
	ft_str_is_printable(a);
    return (0);
}