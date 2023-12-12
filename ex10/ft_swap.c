#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int num_a;
	int num_b;

	num_a = 1;
	num_b = 0;
	printf("Los numeros antes son: a = %d y b = %d.\n", num_a, num_b);
	ft_swap(&num_a, &num_b);
	printf("Los numeros despues son: a = %d y b = %d.\n", num_a, num_b);
	return (0);
}

void ft_swap(int *a, int *b)
{
	int  swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

