#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main()
{
	int min;
	int max;
	int i;
	int *resultado;

	i = 0;
	min = 8;
	max = 13;
	resultado = ft_range(min, max);
	while(min < max)
	{
		printf("%d \n", resultado[i]);
		min++;
		i++;
	}
	free(resultado);
	return (0);
}

int *ft_range(int min, int max)
{
	int *array;
	int x;
	
	if (max < min)
	       return(NULL);	

	array = (int *)malloc (sizeof(*array) * (max - min));
	x = 0;
	while(min < max)
	{
		array[x] = min;
		x++;
		min++;
	}
	return(array);
}

