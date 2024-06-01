#include "libft.h"

char	**ft_split(char const *s, char c);
int	ft_countword(char const *s, char c);
int     len(char const *s, char c, int start);

int main (void)
{
	char	string[] = "     Je     suis    un     arbre  je   mage du fer  ddd   ";
	ft_split(string, ' ');
}

char    **ft_split(char const *s, char c)
{
	char 	**retval;
	int	i;
	int	start;


	retval = malloc (sizeof(char *) * (ft_countword(s, c) + 1));
	i = 0;
	start = 0;
	while (s[start] == c)
		start++;

	while (i < ft_countword(s, c))
	{
               	retval[i] = ft_substr(s, start, len(s, c, start));
		start += len(s, c, start);
		while (s[start] == c)
			start++;
		printf("retval[%d] :%s\n",i ,retval[i]);
		i++;
	}
	return (retval);
}

//calcul nombre de mot
int     ft_countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

//calcul taille des string
int	len(char const *s, char c, int start)
{
	int	len;

	len = 0;
	while (s[start] && s[start] != c)
	{	
		len++;
		start++;
	}
	return (len);
}
