/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 14:50:10 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/12 17:15:33 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	count_strings(char const *s, char c, char delim_found, char string_found)
// {
// 	char	string_count;
// 	// char	delim_found;
// 	// char	string_found;

// 	string_count = 0;
// 	// delim_found = 0;
// 	// string_found = 0;

// 	if (s[0] == 0)
// 		return (0);
// 	while (*s == c && *s)
// 		s++;
// 	if (*s != c && *s)
// 		{string_count++; printf("stringcount++\n");}
// 	while (*s != c && *s)
// 		s++;
// 	while (*s == c && *s)
// 		s++;
// 	while (*s)
// 	{
// 		if (*s == c)
// 			delim_found = 1;
// 		else
// 			string_found = 1;
// 		if (delim_found && string_found)
// 		{
// 			string_count++;
// 			delim_found = 0;
// 			string_found = 0;
// 		}
// 		printf("eval[%c], delim[%d], string[%d], str_count[%d]\n", *s, delim_found, string_found, string_count);
// 		s++;
// 	}
// 	return (string_count);
// }

char	count_strings(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	size_t	string_count;
	char	**strings;

	string_count = count_strings(s, c);
	if (string_count == 0)
		return (0);
	strings = malloc(sizeof(char *) * string_count);
	return (strings);
}