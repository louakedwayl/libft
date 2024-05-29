/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:31:01 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/28 19:12:18 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
void	seta(char *s, int n, int i);
int		setb(char *s, int n, int i);
int		setc(char *s, int n, int i);
int		calcsize(int n);

/*int main ()
{
	printf("%s", ft_itoa(-9));
}*/

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	s = malloc(sizeof(char) * calcsize(n));
	if (!s)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
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

int	setc(char *s, int n, int i)
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

int	setb(char *s, int n, int i)
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

void	seta(char *s, int n, int i)
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

int	calcsize(int n)
{
	int	i;

	i = 2;
	if (n < 0)
		i++;
	if (n > 9 || n < -9)
		i++;
	if (n > 99 || n < -99)
		i++;
	if (n > 999 || n < -999)
		i++;
	if (n > 9999 || n < -9999)
		i++;
	if (n > 99999 || n < -99999)
		i++;
	if (n > 999999 || n < -999999)
		i++;
	if (n > 9999999 || n < -9999999)
		i++;
	if (n > 99999999 || n < -99999999)
		i++;
	if (n > 999999999 || n < -999999999)
		i++;
	return (i);
}
