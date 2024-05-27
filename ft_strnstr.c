#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char *big2;

	i = 0;
	j = 0;
	big2 = (char *)big;
	if (ft_strlen(little) == 0)
		return ((char *)big);	
	while (j < len)
	{
		while (big2[j] == little[i])
		{
			if (little[i])
				return ((&big2[j - i]));
			j++;
			i++;

		}
		i = 0;
		j++;
	}
	return (NULL);
}

int	main (void)
{
	printf("%s",ft_strnstr("lorem ipsum dolor sit amet","ipsumm",30));

}

