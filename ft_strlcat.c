/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 19:18:49 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/25 13:34:47 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t				n;
	unsigned int		dest_length;
	unsigned int		src_length;

	n = 0;
	dest_length = 0;
	src_length = 0;
	while (dest[dest_length])
		dest_length++;
	while (src[src_length])
		src_length++;
	if (size <= dest_length)
		return (src_length + size);
	while (dest_length + n < size - 1 && src[n])
	{
		dest[dest_length + n] = src[n];
		n++;
	}
	dest[dest_length + n] = '\0';
	return (dest_length + src_length);
}

// #include <bsd/string.h>
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	dest[100] = "abc";
// 	char	dest2[100] = "abc";
// 	char	*src = "abc";
// 	size_t	n = 0;

// 	size_t test = -1;
// 	printf("test>%zu\n", test);

// 	printf("%s\n", dest);
// 	n = ft_strlcat(dest, src, 8);
// 	printf("%s\n", dest);
// 	printf("%zu\n\n", n);

// 	printf("%s\n", dest2);
// 	n = strlcat(dest2, src, 8);
// 	printf("%s\n", dest2);
// 	printf("%zu\n\n", n);

// 	// dest = "abc";
// 	// dest2 = "abc";
// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 0);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 0);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 1);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 1);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 2);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 2);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 3);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 3);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 4);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 4);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 5);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 5);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 6);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 6);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 7);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 7);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 8);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 8);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 9);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 9);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest);
// 	// n = ft_strlcat(dest, src, 10);
// 	// printf("%s\n", dest);
// 	// printf("%zu\n\n", n);

// 	// printf("%s\n", dest2);
// 	// n = strlcat(dest2, src, 10);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n\n", n);
// }