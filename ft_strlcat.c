#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz);
size_t  ft_ismin(size_t ldst, size_t siz);


/*int	main (void)
{
	char string[12];
	char string2[]="llo world";
	
	string[0] = 'H';
	string[1] = 'e';
	string[2] = '\0';
	 ft_strlcat(string, string2, 11);
	printf("%s", string);
}
*/

size_t	ft_ismin(size_t	ldst, size_t siz)
{
	if(ldst < siz)
		return (ldst);
	else 
		return (siz);
}

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	sizedst;

	sizedst = 0;
	sizedst = ft_strlen(dst);
	i = 0;
	while (src[i] && (sizedst + i + 1) < siz)
	{
		dst[sizedst+i] = src[i];
		i++;
	}
	dst[sizedst+i] = '\0';
	return (ft_strlen(src) + ft_ismin(sizedst, siz));
}

