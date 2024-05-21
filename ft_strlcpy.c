/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:35:59 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/21 20:16:08 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;
	int	j;

	j = ft_strlen(src);
	i = 0;
	while (i < siz - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (j);
}
