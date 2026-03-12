/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/12 14:25:01 by swetting      #+#    #+#                 */
/*   Updated: 2026/03/12 14:46:29 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*start_trim;
	size_t	len_str;
	size_t	len_trim;
	size_t	index;

	len_str = ft_strlen(s1);
	len_trim = ft_strlen(set);
	new = malloc(len_str - len_trim + 1);
	start_trim = ft_strnstr(s1, set, len_str);
	if (start_trim == 0)
		return (0);
	index = -1;
	while (s1 + ++index < start_trim)
		new[index] =  s1[index];
	--index;
	while (++index - len_trim < len_str)
		new[index] = s1[index + len_trim];
	new[index] = 0;
	return (new);
}