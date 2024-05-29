/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:34:35 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/28 16:35:54 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*string;
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
		string[i] = s[start];
		i++;
		start++;
	}
	string[i] = '\0';
	return (string);
}

// int	main(void)
// {
// 	char	*string= "Chaine de caractere.";
// 	printf("%s", ft_substr(string, 10 , 20));
// }
