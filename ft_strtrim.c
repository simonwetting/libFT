/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 14:25:01 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/25 13:40:15 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define REVERSE
#define FORWARD

static char	check(char c, const char *set)
{
	int		index;

	index = 0;
	while (set[index])
		if (set[index++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (check(s1[start], set))
		start++;
	while (check(s1[end - 1], set))
		end--;
	if (end <= start)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}

// int		count_deletions(char const *s1, char const *set)
// {
// 	int		count;
// 	int		index;

// 	index = -1;
// 	count = 0;
// 	while (s1[++index])
// 		if (check(set, s1[index]))
// 			count++;
// 	return (count);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*new;
// 	int		index_read;
// 	int		index_write;

// 	new = malloc(ft_strlen(s1) + 1 - count_deletions(s1, set));
// 	index_read = -1;
// 	index_write = 0;
// 	while (s1[++index_read])
// 		if (!check(set, s1[index_read]))
// 			new[index_write++] = s1[index_read];
// 	new[index_write] = 0;
// 	return (new);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*new;
// 	char	*start_trim;
// 	size_t	len_str;
// 	size_t	len_trim;
// 	size_t	index;

// 	len_str = ft_strlen(s1);
// 	len_trim = ft_strlen(set);
// 	new = malloc(len_str - len_trim + 1);
// 	start_trim = ft_strnstr(s1, set, len_str);
// 	if (start_trim == 0)
// 		return (0);
// 	index = -1;
// 	while (s1 + ++index < start_trim)
// 		new[index] =  s1[index];
// 	--index;
// 	while (++index - len_trim < len_str)
// 		new[index] = s1[index + len_trim];
// 	new[index] = 0;
// 	return (new);
// }