/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:05:04 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/20 23:05:07 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stddef.h>
#include <string.h>
int main(){


	char dst[5] = "hello";
	char *src = NULL;
	int l =10;
	int result = memcmp(dst,src,l);
}

