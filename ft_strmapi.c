/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:56:34 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 09:25:11 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	tail;

	tail = ft_strlen(s);
	str = malloc(sizeof(char) * (tail + 1));
	if (str == NULL)
		return (NULL);
	str[tail] = 0;
	while (tail--)
		str[tail] = f((unsigned int)tail, s[tail]);
	return (str);
}
