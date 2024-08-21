/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 03:21:26 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 08:51:27 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || len == 0)
		return (dst);
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			*(char *)(dst + i - 1) = *(char *)(src + i - 1);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char src[10] = "123456789";
    char dst[5];
	char src_t[10] = "123456789";
    char dst_t[5];


    // Tentative de copie avec dst = NULL et len non nul
    //memmove(dst, src, 8);  // Comportement indéfini, 
    //risque de segmentationfault
	printf("Destination: %s\n", dst);
	ft_memmove(dst_t, src_t, 8);
	printf("Destination: %s\n", dst_t);

    return 0;
}
*/
