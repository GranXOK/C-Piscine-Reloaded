#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int num;

	num = 8;
	printf(" El factorial de %d es %d. \n", num, ft_iterative_factorial(num));
	return (0);
}


int ft_iterative_factorial(int nb)
{
	int resul;

	resul = 1;

	while (nb > 0)
	{
		resul = resul * nb;
		nb--;
	}
	return (resul);
}
