/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:25:41 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/03 18:32:40 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main() {
    const char *s = "Hello, World!";
    int c = 'o';
    int c_not_found = 'x';
    int c_null = '\0';

    // Test avec un caractère présent dans la chaîne
    printf("ft_strchr: %s\n", ft_strchr(s, c));
	//Doit afficher "o, World!"
    printf("strchr: %s\n", strchr(s, c));
	// Doit afficher "o, World!"

    // Test avec un caractère non présent dans la chaîne
    printf("ft_strchr: %s\n", ft_strchr(s, c_not_found) ?
		ft_strchr(s, c_not_found) : "NULL");
    printf("strchr: %s\n", strchr(s, c_not_found) ?
			strchr(s, c_not_found) : "NULL");

    // Test avec le caractère nul
    printf("ft_strchr: %s\n", ft_strchr(s, c_null));
		// Doit afficher une chaîne vide ""
    printf("strchr: %s\n", strchr(s, c_null));
		// Doit afficher une chaîne vide ""

    return 0;
}
*/
