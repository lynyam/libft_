/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:51:07 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 09:17:15 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = 0;
	while (s1[len++])
		;
	s2 = malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	while (len--)
		s2[len] = s1[len];
	return (s2);
}
