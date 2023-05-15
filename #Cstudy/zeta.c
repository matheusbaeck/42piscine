#include <unistd.h>

void zeta(void)
{
    write(1, "z", 1);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    argv++;
    if (argc > 0)
    {
        zeta();
    }
    return (0);
}