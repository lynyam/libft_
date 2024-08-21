/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:14:45 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 09:27:08 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n--)
		if ((unsigned char)*s1++ != (unsigned char)*s2++)
			return ((unsigned char)*--s1 - (unsigned char)*--s2);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main() {
    const char *str1 = "Hello, world!";
    const char *str2 = "Hello, worle!";
    size_t n = 10;

    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
    printf("strncmp: %d\n", strncmp(str1, str2, n));

    n = 15;
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
    printf("strncmp: %d\n", strncmp(str1, str2, n));

    n = 7;
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
    printf("strncmp: %d\n", strncmp(str1, str2, n));

    return 0;
}
*/
