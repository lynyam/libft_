/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:11:53 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 09:42:00 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_mark_set(int *tab_set, char const *set)
{
	size_t	i;

	i = 0;
	while (i < 256)
		tab_set[i++] = 0;
	i = 0;
	while (i < ft_strlen(set))
		tab_set[(unsigned char)set[i++]] = 1;
}

static char	*ft_emptycase(void)
{
	char	*trim;

	trim = malloc(1);
	if (!trim)
		return (NULL);
	trim[0] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		tab_set[256];
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trim;

	i = 0;
	if (ft_strlen(s1) == 0)
		return (ft_emptycase());
	ft_mark_set(tab_set, set);
	while (i < ft_strlen(s1) && tab_set[(unsigned char)s1[i]] > 0)
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && tab_set[(unsigned char)s1[j]] > 0)
		j--;
	trim = malloc(sizeof(char) * (j - i + 2));
	if (trim == NULL)
		return (NULL);
	k = 0;
	while (i <= j && j != 0)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}
