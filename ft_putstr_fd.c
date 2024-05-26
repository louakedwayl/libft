#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	nbr;
	
	i = 0;
	nbr = ft_strlen(s);
	while (i < nbr)
	{
		write (fd, &s[i],1);
		i++;
	}
}
/*
int	main(void)
{
	char	*string = "Je suis un chat.";

	ft_putstr_fd(string, 1);
}
*/
