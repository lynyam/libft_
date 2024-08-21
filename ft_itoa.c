/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:02:47 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 08:45:30 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_find_size(int n)
{
	unsigned int	nbr;
	size_t			size;

	size = 0;
	if (n < 0)
	{
		size++;
		nbr = n * (-1);
	}
	else
		nbr = n;
	while (nbr > 9)
	{
		size++;
		nbr /= 10;
	}
	return (size + 1);
}

static char	*ft_get_str(int n, char *str, long len)
{
	unsigned int	nbr;

	if (n < 0)
	{
		str[0] = '-';
		nbr = n * (-1);
	}
	else
		nbr = n;
	str[len] = '\0';
	len--;
	while (nbr > 9)
	{
		str[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[len] = nbr % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	size;

	size = ft_find_size(n);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	return (ft_get_str(n, str, size));
}
