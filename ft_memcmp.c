/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:14:23 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 08:46:51 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *) s1) != *((unsigned char *) s2))
			return (*((unsigned char *) s1) - *((unsigned char *) s2));
		s1++;
		s2++;
	}
	return (0);
}
