#include "libft.h"



void    *ft_calloc(size_t nmemb, size_t size)
{
	void *p;
	if (nmemb == 0 )
		return (NULL);
	if (((size_t) - 1 / nmemb) < size) //calcul pour pas allouer plus que ma size_t
		return (NULL);
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

	string = ft_calloc(0,sizeof(char));
	if(!string)
		printf("SUCCESS");

}*/
