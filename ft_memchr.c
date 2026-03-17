/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 15:21:57 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/17 13:40:55 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*ptr;
	unsigned char	c2 =  c;
	
	index = -1;
	ptr = (char *)s;
	while (++index < n)
		if (ptr[index] == c2)
			return ((void *)(ptr + index));
	return (0);
}

// #include <stdio.h>
// int		main()
// {
// 	char s[] = "test";
// 	printf("%s", (char *)ft_memchr(s+1, 't', 4));
// }