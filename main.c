/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:02:08 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/22 18:30:33 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	string[256];
	char	string2[256] = "SUCCESS";
	char	*string3;

	printf("1  / Test ft_strlen : 1 :%zu\n", ft_strlen("a"));
	printf("2  / Test isalpha : 1 :%d\n", ft_isalpha('A'));
	printf("3  / Test ft_isdigit : 1 :%d\n", ft_isdigit('1'));
	printf("4  / Test ft_isalnum : 1 :%d\n", ft_isalnum(97));
	printf("5  / Test ft_isascii : 1 :%d\n", ft_isascii(42));
	printf("6  / Test ft_isprint : 1 :%d\n", ft_isprint(42));
	printf("7  / Test ft_toupper : 65 :%d\n", ft_toupper('a'));
	printf("8  / Test ft_lower : 97 :%d\n", ft_tolower('A'));
	printf("9  / Test ft_strncmp : 0 : %d\n", ft_strncmp ("a", "a", 1));
	printf("10 / Test ft_strlcpy : 1 : %zu\n", ft_strlcpy("z", "a", 1));
	ft_memset(string, 49, 25);
	printf("11 / Test ft_memset :1 :%c\n", string[0]);
	ft_bzero(string, 25);
	printf("12 / Test ft_bzero :0 :%c\n", string[0]);
	string3 = ft_strdup(string2);
	printf("13 / Test ft_strdup : SUCCES :%s\n", string3);
	printf("14 / Test ft_atoi : -2147483648 : %d\n", ft_atoi("-2147483648"));

}


