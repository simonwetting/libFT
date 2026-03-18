/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 15:58:34 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/18 12:27:53 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	
	unsigned long	length;

	length = nmemb * size;
	// printf("nmemb * size %lu * %lu = %lu", nmemb, size, length);
	// if (length < 4294967295)
	// 	return (0);
	if ((INT_MAX <= nmemb && INT_MAX <= size) || length == 0)
		return (0);
	if (nmemb > 0 && size > 0)
		p = malloc(length);
	else
		return (0);
	ft_bzero(p, length);
	return (p);
}

// int		main()
// {
// 	char *s = (char *)ft_calloc(1, 5);
// 	ft_memcpy(s, "test", 3);
// 	printf("%s\n", s);
// }