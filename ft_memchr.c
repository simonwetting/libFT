/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 15:21:57 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/11 15:28:08 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*ptr;
	
	index = -1;
	ptr = (char *)s;
	while (ptr[++index] && index < n)
		if (ptr[index] == c)
			return ((void *)(ptr + index));
	return (0);
}

// #include <stdio.h>
// int		main()
// {
// 	char s[] = "test";
// 	printf("%s", (char *)ft_memchr(s+1, 't', 4));
// }