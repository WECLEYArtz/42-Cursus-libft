/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:28 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main()
{
    // char str2[] = "ABCDEFG";
    // char str1[] = "ABCDEFG";

    // char *str4 = memcpy(str2 + 5, str2, 3);
    // char  *str3= ft_memcpy(str1 +5, str1, 3);

    // printf("my     result is: %s\n", str3);
    // printf("memcpy result is: %s\n",str4);

    char *str = "teste";
	int c = 0 ;
	char *result;
	char *result2;
	result = strchr(str,c);
	result2 = ft_strchr(str,c);

	printf("%d",(result2 == result));
    return 0;
}
