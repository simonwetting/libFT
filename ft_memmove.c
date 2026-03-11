/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 14:39:19 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/11 16:17:57 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*p_src;
	char	*p_dest;

	p_src = (char *)src;
	p_dest = (char *)dest;
	index = -1;
	if (src >= dest)
		while (++index < n)
			p_dest[index] = p_src[index];
	if (src < dest)
		while (++index < n)
			p_dest[n - index] = p_src[n - index]
	return (dest);
}

// int		main()
// {
// 	// char s[] = "test";

// 	// printf("%s\n", s);
// 	// ft_memcpy(s + 1, "ab", 2);
// 	// printf("%s\n", s);
// 	int		array[] = {1, 2, 3 , 4, 5, 6};
// 	// int		array2[] = {500, 500};
// 	for (int n = 0; n < 6; n ++)
// 		printf("%d\n", array[n]);
// 	ft_memmove(array + 1, array, 16);
// 	printf("\n");
// 	for (int n = 0; n < 6; n ++)
// 		printf("%d\n", array[n]);
// }