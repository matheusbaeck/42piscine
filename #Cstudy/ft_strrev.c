char *ft_strrev(char *str)
{
    char    *swap;
    int     len;

    while (str[len])
    {
        len++;
    }
    swap = str
    while (len-- && *str)
    {
        &(swap + len) = &str
        str++;
    }
    return (swap);

}

int main(void)
{
    char    *str;

    str = "born2code";
    ft_strrev(str);
    return 0;
}
