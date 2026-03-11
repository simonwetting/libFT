/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 15:58:34 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/11 16:21:12 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb > 0 && size > 0)
		p = malloc(nmemb * size);
	else
		return (0);
	return (p);
}

// int		main()
// {
// 	char *s = (char *)ft_calloc(1, 5);
// 	ft_memcpy(s, "test", 3);
// 	printf("%s\n", s);
// }