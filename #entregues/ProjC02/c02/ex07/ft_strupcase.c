int    lower(char str)
{
    while (str)
    {
        if (str >= 'a' && str <= 'z')
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

char *ft_strupcase(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (lower(str[i]) == 1)
        {
            str[i] -= ' ';
            str =  ft_strupcase(str);
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
     ft_strupcase(a);
    return (0);
}