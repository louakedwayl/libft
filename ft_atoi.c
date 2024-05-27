/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:34:27 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/27 18:43:49 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signless;
	int	signmore;
	int	result;

	i = 0;
	signless = 0;
	signmore = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '+')
			signmore += 1;
		 if (str[i] == '-')
                        signless += 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	if(signless == 0 && signmore == 1)
		return (result);
	else if(signless == 1 && signmore == 0)
		return (-result);
	else if (signless == 0 && signmore == 0)
		return (result);
	else 
		return (0);
}

/*
int	main(void)
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
