/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:43:36 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/22 19:42:47 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t siz);
size_t lengthMin(size_t size1, size_t size2);


/*int main (void)
{
	char	*string="qwertyuiop";
	char	string2[256]="azertyuiop";

	ft_strlcat(string2, string, 12);
	printf("%s",string2);


	char 	a1[20] = "Adam :";
	char 	a2[20] = "Adam :";
	char 	a3[20] = "Adam :";
	char 	a4[20] = "Adam :";
	char 	b1[20] = "";
	char 	b2[20] = "";
	char 	c1[20] = "Tamassint :";
	char 	c2[20] = "Tamassint :";


	printf("------------STRLCAT------------\n");
	printf("strlcat : %zu -> %s\nft_strlcat : %zu -> %s\n", strlcat(a1, "Tamassint", 6), a1, ft_strlcat(a2, "Tamassint", 6), a2);
	printf("strlcat : %zu -> %s\nft_strlcat : %zu -> %s\n", strlcat(b1, "", 5), b1, ft_strlcat(b2, "", 5), b2);
	printf("strlcat : %zu -> %s\nft_strlcat : %zu -> %s\n", strlcat(a3, " est Tamassint", 20), a3, ft_strlcat(a4, " est Tamassint", 20), a4);
	printf("strlcat : %zu -> %s\nft_strlcat : %zu -> %s\n", strlcat(c1, "Adam", 0), c1, ft_strlcat(c2, "Adam", 0), c2);

}*/

size_t  ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	lengthSrc;
	size_t	lengthDst;
	size_t	returnLength;
	size_t	i;

	lengthDst = ft_strlen(dst);
	lengthSrc = ft_strlen(src);
	returnLength = lengthSrc + lengthMin(siz,lengthDst);
	i = 0;
	if (siz == 0)
		return (returnLength);
	while(src[i] && (lengthDst + i < siz - 1))
	{
		dst[lengthDst + i] = src[i];
		i++;
	}
	if ( i > 0 )
		dst[lengthDst + i] = '\0';
	return (returnLength);

}	

size_t lengthMin(size_t size1, size_t size2)
{
      if (size1 < size2)
	     return (size1);
      else if (size1 > size2)
             return (size2);
      else
      	return (size1); 
}
