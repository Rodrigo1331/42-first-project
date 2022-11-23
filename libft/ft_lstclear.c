/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/17 10:56:22 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*y;

	if (!lst && !del)
	{
		while (*lst != NULL)
		{
			y = (*lst)->content;
			*lst = (*lst)->next;
			ft_lstdelone(y, del);
		}
		*lst = NULL;
	}
}

void	del(void *c)
{
 	free (c);
}

int		main()
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;

	char *c1 = ft_strdup("Um --");
    	char *c2 = ft_strdup("Dois --");
    	char *c3 = ft_strdup("Tres --");
    	char *c4 = ft_strdup("Quatro --");

	head = ft_lstnew(c1);
	dois = ft_lstnew(c2);
	tres = ft_lstnew(c3);
	quatro = ft_lstnew(c4);

	ft_lstadd_back(&head, dois);
	ft_lstadd_back(&head, tres);
	ft_lstadd_back(&head, quatro);

	printf("\n%s	    %s	%s	    %s\n", (char *)head->content,\
	(char *)head->next->content, (char *)head->next->next->content,\
	(char *)head->next->next->next->content);
	
	printf("%p %p %p %p %p\n", head, head->next, head->next->next,\
	head->next->next->next, head->next->next->next->next);

	ft_lstclear(&head, del);

	printf("\n%p\n", head);

	return (0);
}