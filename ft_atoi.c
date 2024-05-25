/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:06:21 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/24 19:36:33 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr);

/*int	main(void)
{
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", ft_atoi("0100000"));
	printf("%d\n", atoi("0100000"));
	printf("%d\n", ft_atoi("--2147483648"));
	printf("%d\n", atoi("--2147483648"));
	printf("%d\n", ft_atoi("+-2147483648"));
	printf("%d\n", atoi("+-2147483648"));
	printf("%d\n", ft_atoi("++2147483648"));
	printf("%d\n", atoi("++2147483648"));
}
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	result;

	j = 0;
	i = 0;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{	
		j++;
		i++;
	}
	while (nptr[i])
	{
		result = result + (nptr[i] - 48);
		if (nptr[i + 1] != '\0')
			result = result * 10;
		i++;
	}
	if (j > 1)
		return (0);
	return (result);
}
