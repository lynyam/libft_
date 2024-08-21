/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <ynyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:27:58 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 09:14:02 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static void	*ft_free(char **ans, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(ans[i]);
		i++;
	}
	free(ans);
	return (NULL);
}

static int	ft_strlen_with_spliteur(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (*str && *str == c)
		str++;
	while (*str && *str != c)
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split(char const *str, char c)
{
	size_t	len;
	char	**ans;
	size_t	j;
	size_t	i;

	len = count_word(str, c);
	ans = (char **)malloc(sizeof(char *) * (len + 1));
	if (ans == NULL)
		return (NULL);
	ans[len] = 0;
	i = 0;
	while (i < len)
	{
		ans[i] = (char *)malloc(ft_strlen_with_spliteur(str, c) + 1);
		if (ans[i] == NULL)
			return (ft_free(ans, i));
		ans[i][ft_strlen_with_spliteur(str, c)] = '\0';
		while (*str && *str == c)
			str++;
		j = 0;
		while (*str && *str != c)
			ans[i][j++] = *str++;
		i++;
	}
	return (ans);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
(void)ac;
(void)av;
//char **ptr = ft_split(av[1], av[2]);
char **ptr = ft_split("to to et KOl\n", '\n');
for (int i = 0; ptr[i] != 0; i++)
{
printf("ptr[%d]: %s|\n", i, ptr[i]);
}
return (0);
}
*/
