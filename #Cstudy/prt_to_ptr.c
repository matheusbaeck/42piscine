#include <stdio.h>

void	ft_ft(int **nbr)
{
	**nbr2 = 42;
      printf("%d", **nbr2);
}

int	main(void)
	{
      int *nbr;
      int **nbr2;

      *nbr = 42;
      nbr2 = &nbr;
	ft_ft(**nbr2);
      return (0)
	}