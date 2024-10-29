/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:03:13 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 15:51:00 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

// --- PART 1 ---

int     ft_isalpha(char c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char    *ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n)
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//int		ft_atoi(const char *str);
//long	ft_atol(const char *str);
//int		ft_abs(int num);
//void	*ft_calloc(size_t count, size_t size);
//char	*ft_strdup(char *s1);

// --- PART 2 ---

//char	*ft_substr(char *s, unsigned int start, size_t len);
//char	*ft_strjoin(char *s1, char *s2);
//char	*ft_strtrim(char const *s1, char const *set);
//int		ft_get_number_of_words(char const *s, char c);
//char	**ft_split(char const *s, char c);
//char	*ft_itoa(int n);
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//void	ft_striteri(char *s, void (*f)(unsigned int, char*));
//void	ft_putchar_fd(char c, int fd);
//void	ft_putstr_fd(char *s, int fd);
//void	ft_putendl_fd(char *s, int fd);
//void	ft_putnbr_fd(int n, int fd);

#endif