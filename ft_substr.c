/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:34:46 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/25 13:37:57 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	index;
	size_t	length_s;

	length_s = ft_strlen(s);
	if (start >= length_s)
		return (ft_strdup(""));
	if (start + len <= length_s)
		out = malloc(len + 1);
	else
		out = malloc(ft_strlen(s + start) + 1);
	if (!out)
		return (NULL);
	index = -1;
	while (++index < len && s[start + index])
		out[index] = s[start + index];
	out[index] = 0;
	return (out);
}

// int		main()
// {
// 	// char *str = ft_strdup("0123456789");
// 	// char *s = ft_substr(str, 9, 10);
// 	char *s = ft_substr("tripouille", 1, 1);
// 	// free(str);
// }