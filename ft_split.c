/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 14:50:10 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/19 13:43:06 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	count_strings(char const *s, char c)
{
	char	n_strings;

	if (s == 0)
		return (0);
	n_strings = 0;
	if (*s != c && *s)
	{
		n_strings++;
		while (*s != c && *s)
			s++;
	}
	else
		while (*s == c && *s)
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
	strings = malloc(sizeof(char *) * (string_count + 1));
	if (s == 0 || *s == 0)
		return (strings[0] = 0, strings);
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

// int		main()
// {
// 	char *invalidReadCheck = malloc(1);
// 	*invalidReadCheck = 0;
// 	char **split = ft_split(invalidReadCheck, 0);
// 	printf("%p\n", split[0]);
// 	free(split); free(invalidReadCheck);

// 	// char **split = ft_split(0, 0);
// 	// printf("%p\n", split[0]);
// 	// free(split);
// }

// // if (string_count == 0)
// 	// 	return (0);