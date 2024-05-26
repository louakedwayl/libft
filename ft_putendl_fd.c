#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
        int     i;

        i = 0;
        while (s[i])
        {
                write (fd, &s[i],1);
                i++;
        }
	write (fd, "\n",1);
}
/*
int	main(void)
{
	char	*string = "Je suis un chat.";

	ft_putendl_fd(string, 1);
}
*/
