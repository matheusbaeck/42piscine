#include <stdio.h>
#include <stdlib.h>

int permute_total(int n);
void swap(int *v, const int i, const int j);


void permute_save(int *v, int *r, int size) // point a pointer to output of permute (permute aux)
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

void rotateLeft(int *v, const int start, const int n) //rotate the elements on an array (permute aux)
{
	int tmp = v[start];
	int i;

	i = start;
	while (i < n-1)
	{
		v[i] = v[i+1];
		i++;
	}
	v[n-1] = tmp;
}

void permute(int *v, const int start, const int size, int *r) // execute all permutations for <size> algarisms
{
	permute_save(v, r, size);
	if (start < size) 
	{
		int i;
		int j;

		i = size-2;
		while (i >= start)
		{
			j = i + 1;
			while ( j < size) 
			{
				swap(v, i, j);
				permute(v, i + 1, size, r);
				j++;
			}
			rotateLeft(v, i, size);
			i--;
		}
	}
}

int *permute_manager(int size) //manage the permutation algoritm
{
  int i;
  int *v = (int*) malloc(sizeof(int)* size);
	int *r = (int*) malloc(sizeof(int)* permute_total(size) * size);
  i = 0;
	while (i < size)
	{
        if (i < permute_total(size) * size)
        {
            v[i] = 0;
        }
        r[i] = 0;
        ++i;
    permute(v, 0, size, r);
    free(v);
	return (r);
    }
	return (r);
}

