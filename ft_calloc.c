/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 15:58:34 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/18 16:56:18 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	// unsigned char	*p;
	// unsigned long	length;

	// length = nmemb * size;
	// // printf("nmemb * size %lu * %lu = %lu", nmemb, size, length);
	// if (length < 4294967295)
	// 	return (0);
	// // printf("length>%lu\n", length);
	// if ((INT_MAX <= nmemb && INT_MAX <= size) || length == 0 || length > 1000000000)
	// 	return (NULL);
	// p = malloc(nmemb * size);
	// // if (nmemb > 0 && size > 0)
	// ft_bzero(p, nmemb * size);
	// return (p);

	
	// if (size != 0 && nmemb > SIZE_MAX / size)
	// 	return (NULL);
	// p = malloc(nmemb * size);
	// if (!p)
	// 	return (NULL);
	// // else
	// // 	return (0);	
	// ft_bzero(p, nmemb * size);
	// return (p);

	unsigned char	*str;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

// int		main()
// {
// 	char *s = (char *)ft_calloc(1, 5);
// 	ft_memcpy(s, "test", 3);
// 	printf("%s\n", s);
// }