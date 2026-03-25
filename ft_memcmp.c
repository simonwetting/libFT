/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 15:29:13 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/25 13:29:13 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	if (n == 0)
		return (0);
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	index = 0;
	while (p_s1[index] == p_s2[index] && index < n - 1)
		index++;
	return (p_s1[index] - p_s2[index]);
}

// #include <stdio.h>
// #include <string.h>
// int		main()
// {
// 	char	*s1 ="test";
// 	char	*s2 = "aesd";

// 	printf("%d\n", ft_memcmp(s1, s2, 0));
// }