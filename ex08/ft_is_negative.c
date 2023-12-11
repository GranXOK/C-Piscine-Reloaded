#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{
	int num;

	num = 1;
	ft_is_negative(num);
	return (0);
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
	       write(1, "N",1);
	       write(1, "\n",1);
	}
	else
	{
		write(1, "P",1);
		write(1, "\n",1);
	}
}
			
