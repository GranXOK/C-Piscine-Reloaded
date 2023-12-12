#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr);

int main(void)
{
	int num;
	
	num = 37;
	printf("El numero en la variale es %d.\n", num);
	write(1, "\n", 1);
	ft_ft(&num);
	printf("El numero despues del paso por la funcion es %d. \n", num);
	write(1, "\n", 1);
	return (0);
}

void ft_ft(int *nbr)
{
	*nbr = 42;
}
