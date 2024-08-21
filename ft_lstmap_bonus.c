/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynyamets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:23:17 by ynyamets          #+#    #+#             */
/*   Updated: 2024/06/11 08:23:20 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*curr;

	head = NULL;
	while (lst != NULL && f != NULL)
	{
		curr = f(lst->content);
		if (curr == NULL)
		{
			if (del != NULL)
				ft_lstclear(&head, del);
			return (NULL);
		}
		new = ft_lstnew(curr);
		if (new == NULL && del != NULL)
		{
			ft_lstclear(&head, del);
			del(curr);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
