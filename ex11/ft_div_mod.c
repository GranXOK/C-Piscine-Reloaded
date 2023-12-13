#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 50;
	b = 4;
	div = 100;
	mod = 100;
	ft_div_mod(a, b, &div, &mod);
	printf("%d entre %d da como resultado %d y de resto %d.\n", a, b, div, mod);
	return (0);
}


void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
