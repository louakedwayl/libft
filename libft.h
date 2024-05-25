/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouaked <wlouaked@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:28:47 by wlouaked          #+#    #+#             */
/*   Updated: 2024/05/24 20:36:50 by wlouaked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <bsd/string.h>

int		ft_isalpha(int c);				//1
int		ft_isdigit(int c);				//2
int		ft_isalnum(int c);				//3
int		ft_isascii(int c);				//4
int		ft_isprint(int c);				//5
size_t	ft_strlen(const char *s);				//6
void	*ft_memset(void *s, int c, size_t n);			//10
void	ft_bzero(void *s, size_t n);				//11
void	*ft_memcpy(void *dest, const void *src, size_t n);	//15
void	*ft_memmove(void *dest, const void *src, size_t n);	//16
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);	//9
size_t	ft_strlcat(char *dst, const char *src, size_t siz);
int		ft_toupper(int c);				//7
int		ft_tolower(int c);				//8
char	*ft_strchr(const char *s, int c);			//17
char	*ft_strrchr(const char *s, int c);			//18
int		ft_strncmp(const char *s1, const char *s2, size_t n);	//12
void	*ft_memchr(const void *s, int c, size_t n);			//19
int		ft_memcmp(const void *s1, const void *s2, size_t n);	//20
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);				//14
void	*ft_calloc(size_t nmemb, size_t size);				//21
char	*ft_strdup(const char *s);					//13:

#endif
