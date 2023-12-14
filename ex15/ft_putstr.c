#include <unistd.h>

void ft_putstr(char *str);
void ft_char(char c);

int main(void)
{
	char *text;

	text = "Hello World!";
	ft_putstr(text);
	return (0);
}


void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_char(str[i]);
		i++;
	}
}


void ft_char(char c)
{
	write(1, &c, 1);
}
