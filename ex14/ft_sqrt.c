#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	int num;

	num = 258745;
	printf("La raiz cuadranda de %d es %d.\n", num , ft_sqrt(num));
	return(0);
}

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i <= nb)
	{
		if(i*i == nb)
			return(i);
		i++;
	}
	return (0);
}
