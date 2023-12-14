#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char *text;

	text = "Hello";
	printf("La longitud de: %s, es de %d caracteres.\n", text, ft_strlen(text));
	return (0);	
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
