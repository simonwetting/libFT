/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/13 17:18:43 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/19 14:49:58 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	printf("begin of the function");
	t_list	*head;

	printf("assigning head");
	head = *lst;
	while (head->next)
		head = head->next;
	head->next = new;
}