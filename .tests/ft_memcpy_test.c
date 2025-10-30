/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmounsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:06:19 by ahmounsi          #+#    #+#             */
/*   Updated: 2025/10/18 21:07:27 by ahmounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // char str2[] = "ABCDEFG";
    // char str1[] = "ABCDEFG";

    // char *str4 = memcpy(str2 + 5, str2, 3);
    // char  *str3= ft_memcpy(str1 +5, str1, 3);
    //
    // printf("my     result is: %s\n", str3);
    // printf("memcpy result is: %s\n",str4);




    char str[5] = "hello";
	int l = 10 ;
	int c = 0 ;
	printf("%s",(char *)memchr(str,c,l));
	
    return 0;
}
