/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 09:45:54 by anonymous     #+#    #+#                 */
/*   Updated: 2026/03/11 09:45:54 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	int		index;
	char	*location;

	index = -1;
	location = 0;
	while (s[++index])
		if (s[index] == c)
			location = (char *)(s + index);
	return (location);
}

#include <stdio.h>
int		main()
{
	char *s = "test";
	printf("%s", ft_strrchr(s, 't'));
}