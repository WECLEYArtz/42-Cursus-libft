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
# include <stddef.h>
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *dest, size_t len);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*strchr(const char *str, int chr);
int		toupper(int c);
char	*strchr(const char *str, int chr);
char	*strrchr(const char *str, int chr);
int		strncmp(const char *s1, const char *s2, size_t n);
#endif
