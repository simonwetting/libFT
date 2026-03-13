/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/13 17:26:58 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/13 18:15:35 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(&lst->content);
	// free(&(lst->next));			//SHOULD THIS BE FREED OR NOT??
	free(&lst);
}