/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:55:07 by ynyamets          #+#    #+#             */
/*   Updated: 2024/05/30 17:23:14 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstsize <= 0)
		return (srclen);
	if (dstsize > srclen)
		dstsize = srclen + 1;
	while (*src && dstsize-- - 1)
		*dst++ = *src++;
	*dst = '\0';
	return (srclen);
}
