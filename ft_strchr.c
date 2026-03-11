/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 09:44:57 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/11 09:44:57 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int	index;

	index = -1;
	while (s[++index])
		if (s[index] == c)
			return ((char *)(s + index));
	return (0);
}

#include <stdio.h>
int		main()
{
	char *s = "test";
	printf("%s", ft_strchr(s, 't'));
}