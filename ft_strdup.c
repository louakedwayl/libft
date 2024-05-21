/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:52:52 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/21 20:32:22 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcpy(char *dest, const char *src)
{
        int     i;

        i = 0;
        while (src[i])
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}


char    *ft_strdup(const char *s)
{
	char *string;
	string = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!string)
		return (NULL);
	ft_strcpy(string, s);
	//free(string);
	return (string);

}

int main (void)
{
	char *string1="qwertyuiop";

	printf("%s",ft_strdup(string1));
}
