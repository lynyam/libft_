/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:14:36 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/03 19:14:37 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if ((*(unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main() {
    const char s[] = "Hello, world!";
    int c = 'o';
    size_t n = 13;

    printf("ft_memchr: %s\n", (char *)ft_memchr(s, c, n));
    printf("memchr: %s\n", (char *)memchr(s, c, n));

    c = 'x';
    printf("ft_memchr: %s\n", (char *)ft_memchr(s, c, n));
    printf("memchr: %s\n", (char *)memchr(s, c, n));

    n = 5;
    printf("ft_memchr: %s\n", (char *)ft_memchr(s, c, n));
    printf("memchr: %s\n", (char *)memchr(s, c, n));

    return 0;
}
*/
