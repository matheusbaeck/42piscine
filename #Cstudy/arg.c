#include <stdio.h>

int sum(int a, int b)
{
    return (a + b);
}

int main(int argc, char ** argv)
{
    char *vector
    int i;

    i = 0;
    while (i < argc)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
        i++;
    }
    return (0);
}