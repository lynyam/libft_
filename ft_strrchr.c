/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:14:53 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 09:37:29 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lastindex;

	lastindex = ft_strlen(s);
	while (lastindex > 0)
	{
		if (*(s + lastindex) == (const char)c)
			return ((char *)(s + lastindex));
		lastindex--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main() {
const char *s = "Hello, world!";
int c = 'o';
int c_not_found = 'x';
int c_first = 'H';
int c_null = '\0';

// Test avec un caractère présent plusieurs fois dans la chaîne
printf("ft_strrchr: %s\n", ft_strrchr(s, c));
// Doit afficher "orld!"
printf("strrchr: %s\n", strrchr(s, c));
// Doit afficher "orld!"

// Test avec un caractère non présent dans la chaîne
printf("ft_strrchr: %s\n", ft_strrchr(s, c_not_found) ?
ft_strrchr(s, c_not_found) : "NULL");
printf("strrchr: %s\n", strrchr(s, c_not_found) ?
strrchr(s, c_not_found) : "NULL");

// Test avec le premier caractère de la chaîne
printf("ft_strrchr: %s\n", ft_strrchr(s, c_first));
// Doit afficher "Hello, world!"
printf("strrchr: %s\n", strrchr(s, c_first));
// Doit afficher "Hello, world!"

// Test avec le caractère nul
printf("ft_strrchr: %s\n", ft_strrchr(s, c_null));
// Doit afficher une chaîne vide ""
printf("strrchr: %s\n", strrchr(s, c_null));
// Doit afficher une chaîne vide ""

return 0;
}*/
