/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 10:34:46 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/12 10:34:46 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	index;

	out = malloc(len + 1);
	index = -1;
	while (++index < len)
		out[index] = s[start + index];
	out[index] = 0;
	return (out);
}