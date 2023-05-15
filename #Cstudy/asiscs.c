# include <unistd.h>

void ft_print(char a)
    {
        int i = 0;
        int div = '\n';

        while (i < 100)
        {
            a = 48 + i%10;
            write(1, &a, 1);
            a = i + 33;
            write(1, &a, 1);
            write(1, &div, 1);
            ++a;
            ++i;
        }
    }
int    main(void)
    {
        ft_print('0');
        return (0);
    }