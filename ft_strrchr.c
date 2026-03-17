/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 09:45:54 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/17 14:21:57 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*location;
	unsigned char	c2;

	c2 = c;
	if (c2 == 0)
		return ((char *)(s + ft_strlen(s)));
	index = -1;
	location = 0;
	while (s[++index])
		if (s[index] == c2)
			location = (char *)(s + index);
	return (location);
}

// #include <stdio.h>
// int		main()
// {
// 	char *s = "test";
// 	printf("%s", ft_strrchr(s, 't'));
// }