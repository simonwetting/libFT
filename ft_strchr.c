/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 09:44:57 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/17 14:02:16 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	index;
	unsigned char	c2;

	c2 = c;
	index = -1;
	if (c2 == 0)
		return ((char *)(s + ft_strlen(s)));
	while (s[++index])
		if (s[index] == c2)
			return ((char *)(s + index));
	return (0);
}

// #include <stdio.h>
// int		main()
// {
// 	char *s = "test";
// 	printf("%s", ft_strchr(s, 't'));
// }