#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *cad1;
	char *cad2;

	cad1 = "despues";
	cad2 = "Ahora";
	printf("RESULTADO A OBTENER: %d.\n", strcmp(cad1,cad2));
	printf("RESULTADO OBTENIDO: %d. \n", ft_strcmp(cad1,cad2));
	return (0);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}

