#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	p = malloc(nmemb * size);
	if(!p)
		return (NULL);
	ft_bzero(p,nmemb);
	return (p);
}
/*
int	main()
{
	char *string;

	string = calloc(20,sizeof(char));
	if(string == '\0')
		printf("SUCCESS");

}*/
