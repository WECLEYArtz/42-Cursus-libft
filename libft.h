/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:05:13 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/16 12:05:15 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_h
# define libft_h
# include <stdlib.h>
# include <stddef.h>

// part 1
int		ft_atoi(const char *str);
void	ft_bzero(void *dest, size_t len);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *dest, int c, size_t len);
char	*ft_strchr(const char *str, int chr);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int chr);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strjoin(char const *s1, char const *s2);


// part 2
char *ft_substr(char const *s, unsigned int start, size_t len);
#endif
// l9wada hh 
// ls *.c -1 | grep -v '^test.c$'| grep -v '^libft.h$' | sed s/.c$/\(/ | xargs -d '\n' -I{} rg -F -N --no-filename --iglob '!libft.h' {} | grep -v ";" | sed 's/$/;/'
