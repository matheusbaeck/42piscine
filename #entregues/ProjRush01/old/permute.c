#include <stdio.h>
#include <stdlib.h>

int permute_total(int n) // retorna total de permutaciones en una linea de tamanho <n>
{
	int i;

	i = n;
	while (i > 1)
	{
		i--;
		n = n * i;
	}
	return (n);
}

void permute_save(int *v, int *r, int size)
{
	int i;
	int j;
	
	j = 0;
	i = 0;
	while (i < size)
	{
		while (i + j < permute_total(size) &&	r[i + j] == 0 && i < size)
		{
			r[j + i] = v[i];
			i++;
		}
		j+= size;
		
	}
}

void swap(int *v, const int i, const int j)
{
  int t;
  t = v[i];
  v[i] = v[j];
  v[j] = t;
}


void rotateLeft(int *v, const int start, const int n)
{
  int tmp = v[start];
  for (int i = start; i < n-1; i++) {
    v[i] = v[i+1];
  }
  v[n-1] = tmp;
}


void permute(int *v, const int start, const int size, int *r)
{
	permute_save(v, r, size);
	if (start < size) 
	{
		int i, j;
		for (i = size-2; i >= start; i--)
		{
			for (j = i + 1; j < size; j++) 
			{
				swap(v, i, j);
				permute(v, i + 1, size, r);
			}
			rotateLeft(v, i, size);
		}
	}
}


void init(int *v, int N)
{
	int i;

	i = 0;
	while (i < N)
	{
		v[i] = i + 1;
		++i;
	}
	
}

void init2(int *v, int N)
{
	int i;

	i = 0;
	while (i < N)
	{
		v[i] = 0;
		++i;
	}
	
}

int *permute_manager(int size)
{
	int k;
    int *v = (int*) malloc(sizeof(int)* size);
	int *r = (int*) malloc(sizeof(int)* permute_total(size) * size);
    init(v, size);
	init2(r, permute_total(size) * size);
	k = -1;
    permute(v, 0, size, r);
	printf("%d", r);
    free(v);
	return (r);
}

int main(void)
{
	permute_manager(3);
	return (0);
}

