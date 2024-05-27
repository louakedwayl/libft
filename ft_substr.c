#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	unsigned int	i;

		if (start >= ft_strlen(s))
		{
			string = malloc (sizeof(char));
			string[0] = '\0';
			return (string);
		}
	
	string = malloc (sizeof(char) * len + 1);

	if (!string)
		return (NULL);
	i = 0;
	while (i < len)
	{
		string[i]= s[start];
		i++;
		start++;
	}
	string[i] = '\0';
	return (string);
}

int	main(void)
{
	char	*string= "Chaine de caractere.";
	printf("%s", ft_substr(string, 10 , 20));
}

