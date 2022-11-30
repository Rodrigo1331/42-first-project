/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/05 10:56:22 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *nl;
	
	if (!lst)
		return (NULL);
	nl = ft_lstnew(f(lst->content));
	if (!nl)s
		return (NULL);
	while
	{
		lst = lst->next;
		nl->next = ft_lstnew(f(lst->content));
		if (!nl->next)
		{
			ft_lstclear(nl, del)); //not sure if it deletes the whole list
			return (NULL);
		}
		nl = n1->next;
	}
	free();
	return (nl)
}