#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *scr);
int ft_strlen(char *scr);

int main()
{
	char *ori_str;
	char *des_str;

	ori_str = "Ten fe, pero se disciplinado";
	des_str = "1";
       	printf("longitud de la cadena: %d \n", ft_strlen(ori_str));
	printf("La cadena destino antes de pasar: %s \n", des_str);
	des_str = ft_strdup(ori_str);
	printf("La cadena destino despues: %s \n", des_str);
       	free(des_str);
	return (0);
}

int ft_strlen(char *scr)
{
	int len;

	len = 0;

	while (scr[len] != '\0')
		len++;
	return (len);	
}

char *ft_strdup(char *scr)
{
	char *dest_scr;
	int i;

	dest_scr = "";
	i = 0;
	dest_scr = (char *) malloc (ft_strlen(scr) * sizeof(char) + 1);
	
	if (dest_scr == NULL)
	       printf("Error en la reservad de memoria");
	
	while (scr[i] != '\0')
	{
		dest_scr[i] = scr[i];
		i++;
	}
	
	dest_scr[i] = '\0';
	return (dest_scr);
	
}
