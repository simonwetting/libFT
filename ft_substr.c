/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:34:46 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/18 18:16:26 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	index;
	size_t	length_s;

	// if (len > 1000000000)
	// 	return (NULL);
	length_s = ft_strlen(s);
	if (start >= length_s)
		return(ft_strdup(""));
	if (len <= length_s)
		out = malloc(len + 1);
	else
		out = malloc(length_s + 1);
	index = -1;
	while (++index < len && s[index])
		out[index] = s[start + index];
	out[index] = 0;
	return (out);
}
