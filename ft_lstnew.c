/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/13 14:45:43 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/13 14:47:28 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
void			*content;
struct			s_list *next;
}				t_list;

t_list	*ft_lstnew(void *content)
{
	
}