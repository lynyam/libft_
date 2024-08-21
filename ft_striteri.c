/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:01:12 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/08 11:02:01 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_striteri(char const *s, void (*f)(unsigned int, char*))
{
	size_t	tail;

	if (!s || !f)
		return (NULL);
	tail = ft_strlen(s);
	if (tail > 0)
	{
		tail--;
		while (tail > 0)
		{
			f((unsigned int)tail, (char *)(s + tail));
			tail--;
		}
		f((unsigned int)tail, (char *)(s + tail));
	}
	return ((char *)s);
}
