/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/13 19:09:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/13 19:09:53 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*clear;

	clear = lst;
	if (!lst)
		return (0);
	new = f(lst);
	while (lst->next)
	{
		lst = lst->next;
		ft_lstadd_back(&new, f(lst));
	}
	ft_lstclear(&clear, del);
	return (new);
}