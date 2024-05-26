#include "libft.h"

char *ft_itoa(int n);
void    seta(char *s, int n, int i);
int    setb(char * s, int   n,int   i);
int    setc(char * s, int   n,int   i);

/*int main ()
{
	printf("%s", ft_itoa(-9));
}*/

char *ft_itoa(int n)
{
	char	*s;
	int	i;

	s = malloc(sizeof(char) * 11);
	i = 0;
	if (n == -2147483648)
	{
		return ("-2147483648");
	}
	if (n < 0)
	{
		s[i] = '-';
		n = -n;
		i++;
	}

	i = setc(s, n, i);
	i = setb(s, n, i);
	seta(s, n, i);
	return (s);
}
int    setc(char * s, int   n,int   i)
{
	if (n > 999999999)
	{
		s[i] = n / 1000000000 % 10 + 48;
		i++;
	}

	if (n > 99999999)
	{
		s[i] = n / 100000000 % 10 + 48;
		i++;
	}
	return (i);
}

int    setb(char * s, int   n,int   i)
{
	if (n > 9999999)
	{
		s[i] = n / 10000000 % 10 + 48;
		i++;
	}
	if (n > 999999)
	{
		s[i] = n / 1000000 % 10 + 48;
		i++;
	}
	if (n > 99999)
	{
		s[i] = n / 100000 % 10 + 48;
		i++;
	}
	if (n > 9999)
	{
		s[i] = n / 10000 % 10 + 48;
		i++;
	}
	return (i);

}

void	seta(char * s, int	n,int	i)
{
	if (n > 999)
	{
		s[i] = n / 1000 % 10 + 48;
		i++;
	}
	if (n > 99)
	{
		s[i] = n / 100 % 10 + 48;
		i++;
	}
	if (n > 9)
	{
		s[i] = n / 10 % 10 + 48;
		i++;
	}
	s[i] = n % 10 + 48;
	i++;
	s[i] = '\0';
}
