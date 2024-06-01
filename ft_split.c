#include "libft.h"

char	**ft_split(char const *s, char c);
int     ft_strlenvega(char *string, int start, char c);
int	ft_strcount(char const *s, char c);

int main (void)
{
	char	string[] = "   Je     suis    un     arbre     ";
	ft_split(string, ' ');


}

char **ft_split(char const *s, char c)
{
	int	i;
       	int	start;
	char **retval;

	i = 0;
	start = 0;
	while (s[start] && s[start] == c)
	{
		start++;
	}
	   retval = malloc (sizeof(char *) * (ft_strcount(s, c) + 1));
	while (i < ft_strcount(s, c))
	{
		retval[i] = ft_substr((char *)s, start, ft_strlenvega((char *)s, start, c));
		start += ft_strlenvega((char *)s, start, c);
		printf("retval[%d] start:%d  :%s\n", i, start, retval[i]);
		i++;
	}
	retval[i] = NULL;
	return (retval);
}

//strcount compte le nombre de string
int     ft_strcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c &&   s[i+1] != c &&  s[i+1]  )
			count++;
		i++;
	}
	printf ("%d : count", count);
	return (count);
}

//strlenvega cherche la longueur entre chaque potion
int	ft_strlenvega(char *string, int start, char c)
{
	int	len;

	len = 0;
	if(string[start] == c)
	{
		start++;
		len++;
	}
	while (string[start] && string[start] != c)
	{
		len++;
		start++;		
	}
	return (len);
}
