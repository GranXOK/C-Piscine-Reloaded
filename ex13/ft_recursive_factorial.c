#include <stdio.h>

int ft_recursive_factorial(int nb) 
{
    if (nb == 0)
    {
        return 1;
    }
    else
    {
        return nb * ft_recursive_factorial(nb - 1);
    }
}

int main()
{
    int resultado = ft_recursive_factorial(5);
    printf("Factorial de 5: %d\n", resultado);

    return 0;
}

