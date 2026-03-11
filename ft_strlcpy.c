/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:51:13 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/11 16:18:06 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	length;

	n = 0;
	length = 0;
	while (src[length])
		length++;
	if (size == 0)
		return (length);
	while (src[n] && dest[n] && n < size - 1)
	{
		dest[n] = src[n];
		n++;
	}
	if (size > 0)
		dest[n] = '\0';
	return (length);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int		main(void)
// {
// 	char 	dest[] = "Hello world world world";
// 	char 	dest2[] = "Hello world world world";
// 	char	src[10] = "test test";
// 	int 	length = strlcpy(dest, src, 1);
// 	int 	length2 = ft_strlcpy(dest2, src, 1);

// 	printf("%s\nlength=%d\n", dest, length);
// 	printf("%s\nlength=%d", dest2, length2);
// }
