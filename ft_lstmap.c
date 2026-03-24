/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/13 19:09:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/20 17:11:32 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	(void)f;
	(void)del;
	t_list	*node;
	
	if (!lst)
		return (0);
	head = ft_lstnew(f(lst->content));
	// head = ft_lstnew(0);
	while (lst->next)
	{
		node = ft_lstnew(lst->next);
		node->content = f(lst->content);
		if (!node)
			del(head);
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	// del(lst);
	return (head);
}

	t_list	*new;
	// t_list	*clear;

	// clear = lst;
	// if (!lst)
	// 	return (0);
	// new = f(lst);
	// while (lst->next)
	// {
	// 	content = f(lst->content);
	// 	lst = lst->next;
	// 	ft_lstadd_back(&new, f(lst));
	// 	ft_lstnew()
	// }
	// return (new);