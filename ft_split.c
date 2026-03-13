/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 14:50:10 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/13 14:55:18 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	count_strings(char const *s, char c)
{
	char	n_strings;

	n_strings = 0;
	if (*s != c && *s)
	{
		n_strings++;
		while (*s != c && *s)
			s++;
	}
	else
		while (*s == c)
			s++;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			n_strings++;
		s++;
	}
	return (n_strings);
}

static size_t	str_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	string_count;
	size_t	len;
	size_t	index;
	char	**strings;
	

	string_count = count_strings(s, c);
	if (string_count == 0)
		return (0);
	strings = malloc(sizeof(char *) * (string_count + 1));
	while (*s == c)
		s++;
	index = 0;
	while (index < string_count)
	{
		while (*s == c)
			s++;
		len = str_len(s, c);
		strings[index] = malloc(len + 1);
		ft_memcpy(strings[index], s, len);
		strings[index++][len] = 0;
		s += len;
	}
	strings[index] = 0;
	return (strings);
}
