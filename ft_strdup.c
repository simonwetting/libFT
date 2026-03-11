/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 16:24:16 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/11 16:38:07 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	length;
	size_t	index;
	char	*output;

	length = ft_strlen(s);
	output = malloc(sizeof(char) * length);
	index = -1;
	while (++index < length)
		output[index] = s[index];
	return (output);
}

// int	main()
// {
// 	char	*s = "test";
// 	char	*s2 = ft_strdup(s);

// 	printf("%s\n", s2);
// }