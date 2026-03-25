/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 13:07:33 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/25 13:40:00 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;
	char	*pointer;

	index = -1;
	pointer = (char *)(s);
	while (++index < n)
		pointer[index] = c;
	return (s);
}

// #include "libft.h"
// int		main()
// {
// 	char s[] = "test";

// 	printf("%s\n", s);
// 	ft_memset(s + 2, 0, 1);
// 	printf("%s\n", s);
// }